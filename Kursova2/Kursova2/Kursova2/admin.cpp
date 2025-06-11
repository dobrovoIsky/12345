#include "admin.h"
#include "User.h"
#include <msclr\marshal.h>
using namespace msclr::interop;

using namespace Kursova2;

System::Void admin::admin_Load(System::Object^ sender, System::EventArgs^ e)
{
	 tabPage1->Controls->Add(pnlCurer);
	 Clients arr[N_clients];
	 int n= SearchClientsByStatus("curer",arr);
	 ShowClients(arr,n);
}

System::Void admin::btnAddCurer_Click(System::Object^ sender, System::EventArgs^ e)
{
    marshal_context^ ctx = gcnew marshal_context();
  
    Clients A;

    strcpy(A.login, ctx->marshal_as<const char*>(textBox7->Text));
    strcpy(A.PIB, ctx->marshal_as<const char*>(textBox1->Text));
    strcpy(A.phone, ctx->marshal_as<const char*>(textBox6->Text));
    strcpy(A.email, ctx->marshal_as<const char*>(textBox2->Text));
    strcpy(A.password, ctx->marshal_as<const char*>(textBox3->Text));
    if (SearchClientsByLogin(A.login, A))
    {
        MessageBox::Show("Такий логін вже існує.");
        textBox7->Focus();
    }
    else
    {
        A.ID = GetLastIDClients() + 1;
        strcpy(A.status, "curer");
        WriteToFileClients(A);
        MessageBox::Show("Ви успішно зареєстрували курєра!");
		Clients arr[N_clients];
		int n = SearchClientsByStatus("curer",arr);
		ClearClients(n-1);
		ShowClients(arr, n);
    }
}

System::Void admin::btnUpdate_Click(System::Object^ sender, System::EventArgs^ e)
{
	Button^ btn = (Button^)sender;
	//MessageBox::Show("Натиснена кнопка " + btn->Text);
	Clients arr[N_clients];
	int n = SearchClientsByStatus("curer",arr);
	for (int i = 0; i < n; i++)
	{
		if (btn == arr_btn_update[i])
		{
			// обраний user з індексом i
			// читаємо оновлені записи
			marshal_context^ ctx = gcnew marshal_context();
			Clients a;
			a.ID = Convert::ToInt32(arr_lb_id[i]->Text);
			strcpy(a.PIB, ctx->marshal_as<const char*>(arr_tb_name[i]->Text));
			strcpy(a.login, ctx->marshal_as<const char*>(arr_tb_login[i]->Text));
			strcpy(a.password, ctx->marshal_as<const char*>(arr_tb_password[i]->Text));
			strcpy(a.email, ctx->marshal_as<const char*>(arr_tb_email[i]->Text));
			strcpy(a.phone, ctx->marshal_as<const char*>(arr_tb_phone[i]->Text));
			EditClient(a.ID, a);
			MessageBox::Show("Дані оновлено!");
		}
	}
}
//-------------------------------------------------------------------------------------
System::Void admin::btnDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	Button^ btn = (Button^)sender;
	//MessageBox::Show("Натиснена кнопка " + btn->Text);
	Clients arr[N_clients];
	int n = SearchClientsByStatus("curer", arr);
	for (int i = 0; i < n; i++)
	{
		if (btn == arr_btn_delete[i])
		{
			// обраний user з індексом i
			// читаємо оновлені записи
			marshal_context^ ctx = gcnew marshal_context();
			Clients a;
			a.ID = Convert::ToInt32(arr_lb_id[i]->Text);
			DeleteClient(a.ID);
			MessageBox::Show("Користувача вилучено!");
			ClearClients(n);
			n = SearchClientsByStatus("curer",arr);
			ShowClients(arr, n);
		}
	}
}
System::Void admin::ClearClients(int n)
{
	for (int i = 0; i < n; i++)
	{
		arr_lb_id[i]->Visible = false;
		arr_tb_name[i]->Visible = false;
		arr_tb_login[i]->Visible = false;
		arr_tb_password[i]->Visible = false;
		arr_tb_email[i]->Visible = false;
		arr_tb_phone[i]->Visible = false;
		arr_btn_update[i]->Visible = false;
		arr_btn_delete[i]->Visible = false;
	}
}
System::Void admin::ShowClients(Clients arr[], int n)
{
	int dy = 30; // відстань між рядками
	int dx = 10; // відстань між обєктами
	int top = 30;
	int left = 20;

	for (int i = 0; i < n; i++)
	{
		String^ tmp;
		// створення id
		Label^ lb = gcnew Label();
		tmp = Convert::ToString(arr[i].ID);
		lb->Text = tmp;
		lb->Top = top + dy * (i + 1);
		lb->Left = left;
		lb->Width = 40;
		lb->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204));
		lb->Visible = true;
		pnlCurer->Controls->Add(lb);
		arr_lb_id[i] = lb;
		// створення name
		TextBox^ tb_name = gcnew TextBox();
		tmp = gcnew String(arr[i].PIB);
		tb_name->Text = tmp;
		tb_name->Top = top + dy * (i + 1);
		tb_name->Left = left + lb->Width + dx;
		tb_name->Width = 100;
		tb_name->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204));
		tb_name->Visible = true;
		pnlCurer->Controls->Add(tb_name);
		arr_tb_name[i] = tb_name;
		// створення login
		TextBox^ tb_login = gcnew TextBox();
		tmp = gcnew String(arr[i].login);
		tb_login->Text = tmp;
		tb_login->Top = top + dy * (i + 1);
		tb_login->Left = left + lb->Width + dx + tb_name->Width + dx;
		tb_login->Width = 100;
		tb_login->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204));
		tb_login->Visible = true;
		pnlCurer->Controls->Add(tb_login);
		arr_tb_login[i] = tb_login;
		// створення password
		TextBox^ tb_password = gcnew TextBox();
		tmp = gcnew String(arr[i].password);
		tb_password->Text = tmp;
		tb_password->Top = top + dy * (i + 1);
		tb_password->Left = left + lb->Width + dx + tb_name->Width + dx + tb_login->Width + dx;
		tb_password->Width = 100;
		tb_password->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204));
		tb_password->Visible = true;
		pnlCurer->Controls->Add(tb_password);
		arr_tb_password[i] = tb_password;
		
		TextBox^ tb_email = gcnew TextBox();
		tmp = gcnew String(arr[i].email);
		tb_email->Text = tmp;
		tb_email->Top = top + dy * (i + 1);
		tb_email->Left = left + lb->Width + dx + tb_name->Width + dx + tb_login->Width + dx+ tb_password->Width+dx;
		tb_email->Width = 100;
		tb_email->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204));
		tb_email->Visible = true;
		pnlCurer->Controls->Add(tb_email);
		arr_tb_email[i] = tb_email;
		
		TextBox^ tb_phone = gcnew TextBox();
		tmp = gcnew String(arr[i].phone);
		tb_phone->Text = tmp;
		tb_phone->Top = top + dy * (i + 1);
		tb_phone->Left = left + lb->Width + dx + tb_name->Width + dx + tb_login->Width + dx + tb_password->Width + dx+ tb_email->Width+dx;
		tb_phone->Width = 100;
		tb_phone->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204));
		tb_phone->Visible = true;
		pnlCurer->Controls->Add(tb_phone);
		arr_tb_phone[i] = tb_email;

		// створення кнопки edit
		Button^ bt_update = gcnew Button();
		bt_update->Text = "Редагувати";
		bt_update->Top = top + dy * (i + 1);
		bt_update->Left = left + lb->Width + dx + tb_name->Width + dx + tb_login->Width + dx + tb_password->Width + dx+tb_email->Width + dx+ tb_phone->Width+dx;
		bt_update->Width = 100;
		bt_update->Click += gcnew System::EventHandler(this, &admin::btnUpdate_Click);
		pnlCurer->Controls->Add(bt_update);
		arr_btn_update[i] = bt_update;

		// створення кнопки delete
		Button^ bt_delete = gcnew Button();
		bt_delete->Text = "Вилучити";
		bt_delete->Top = top + dy * (i + 1);
		bt_delete->Left = left + lb->Width + dx + tb_name->Width + dx + tb_login->Width + dx + tb_password->Width + dx + dx + tb_email->Width + dx + tb_phone->Width + dx + bt_update->Width + dx;
		bt_delete->Width = 100;
		bt_delete->Click += gcnew System::EventHandler(this, &admin::btnDelete_Click);
		pnlCurer->Controls->Add(bt_delete);
		arr_btn_delete[i] = bt_delete;
	}
}
