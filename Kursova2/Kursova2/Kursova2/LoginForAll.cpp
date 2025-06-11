#include "LoginForAll.h"
#include "Registration.h"
#include <msclr\marshal.h>
#include "User.h"
#include "UserPanel.h"
#include "admin.h"
#include "curer.h"

using namespace msclr::interop;
System::Void Kursova2::LoginForAll::label6_Click(System::Object^ sender, System::EventArgs^ e)
{
    Registration^ reg = gcnew Registration();
    reg->Show();
    this->Hide();
}

System::Void Kursova2::LoginForAll::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	marshal_context^ ctx = gcnew marshal_context();

	char p_login[50], p_password[20];
	Clients res;
	strcpy(p_login, ctx->marshal_as<const char*>(textBox1->Text));
	strcpy(p_password, ctx->marshal_as<const char*>(textBox2->Text));
	if ((strcmp(p_login, "admin") == 0) && (strcmp(p_password, "1234") == 0))
	{
		// вхід адміна
		MessageBox::Show("Ви успішно авторизувалися як адміністратор!");
		admin^ form = gcnew admin();
		this->Hide();
		form->Show();
	}
	else if (SearchClientsByLogin(p_login, res))
	{
		if (CheckClientsPassword(res, p_password))
		{
			if (strcmp(res.status, "user") == 0)
			{
				// вхід користувача
				MessageBox::Show("Ви успішно авторизувалися як користувач!");
				UserPanel^ users = gcnew UserPanel();
				this->Hide();
				users->Show();
				String^ tmp;
				tmp = gcnew String(res.PIB);
				users->label2->Text = tmp;
				this->Hide();
			}
			else if (strcmp(res.status, "curer") == 0)
			{
				// вхід курєра
				MessageBox::Show("Ви успішно авторизувалися як курєр!");
				curer^ form = gcnew curer();
				this->Hide();
				form->Show();
				String^ tmp;
				tmp = gcnew String(res.PIB);
				form->label1->Text = tmp;
				this->Hide();
			}
		
		}
		else
		{
			MessageBox::Show("Невірно введений пароль! \n\nСпробуйте ще раз!");
			textBox2->Focus();
		}
	}
	else
	{
		MessageBox::Show("Користувача з таким логіном не знайдено! \n\nЗареєструйтеся, будь ласка!");
		button2->Focus();
	}
}

System::Void Kursova2::LoginForAll::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox1->Checked)
	{
		textBox2->PasswordChar = '\0';
	}
	else {
		textBox2->PasswordChar = '*';
	}
}

System::Void Kursova2::LoginForAll::textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox1->Checked)
	{
		textBox2->PasswordChar = '\0';
	}
	else {
		textBox2->PasswordChar = '*';
	}
}
