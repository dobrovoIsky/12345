#pragma once
#include "User.h"

namespace Kursova2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for admin
	/// </summary>
	public ref class admin : public System::Windows::Forms::Form
	{
	public:
		admin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAddCurer;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;

	public:
		array <Label^>^ arr_lb_id = gcnew array <Label^>(N_clients);
		array <TextBox^>^ arr_tb_name = gcnew array <TextBox^>(N_clients);
		array <TextBox^>^ arr_tb_login = gcnew array <TextBox^>(N_clients);
		array <TextBox^>^ arr_tb_password = gcnew array <TextBox^>(N_clients);
		array <TextBox^>^ arr_tb_phone = gcnew array <TextBox^>(N_clients);
		array <TextBox^>^ arr_tb_email = gcnew array <TextBox^>(N_clients);
		array <Button^>^ arr_btn_update = gcnew array <Button^>(N_clients);
		array <Button^>^ arr_btn_delete = gcnew array <Button^>(N_clients);
	private: System::Windows::Forms::Panel^ pnlCurer;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	public:

	public:
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnAddCurer = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pnlCurer = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->pnlCurer->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnAddCurer
			// 
			this->btnAddCurer->Location = System::Drawing::Point(166, 299);
			this->btnAddCurer->Name = L"btnAddCurer";
			this->btnAddCurer->Size = System::Drawing::Size(75, 23);
			this->btnAddCurer->TabIndex = 0;
			this->btnAddCurer->Text = L"Добавити курєра";
			this->btnAddCurer->UseVisualStyleBackColor = true;
			this->btnAddCurer->Click += gcnew System::EventHandler(this, &admin::btnAddCurer_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1273, 632);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->pnlCurer);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->btnAddCurer);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1265, 606);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Курєри";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pnlCurer
			// 
			this->pnlCurer->Controls->Add(this->label13);
			this->pnlCurer->Controls->Add(this->label12);
			this->pnlCurer->Controls->Add(this->label11);
			this->pnlCurer->Controls->Add(this->label10);
			this->pnlCurer->Controls->Add(this->label9);
			this->pnlCurer->Controls->Add(this->label1);
			this->pnlCurer->Location = System::Drawing::Point(349, 33);
			this->pnlCurer->Name = L"pnlCurer";
			this->pnlCurer->Size = System::Drawing::Size(884, 542);
			this->pnlCurer->TabIndex = 47;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(91, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 46;
			this->label8->Text = L"Логін";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(131, 32);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(188, 20);
			this->textBox7->TabIndex = 45;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 13);
			this->label6->TabIndex = 44;
			this->label6->Text = L"Номер телефону";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(131, 118);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(188, 20);
			this->textBox6->TabIndex = 43;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 252);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 13);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Підтвердіть пароль";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(131, 247);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(187, 20);
			this->textBox5->TabIndex = 41;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 39;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(80, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Пароль";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(131, 204);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(188, 20);
			this->textBox3->TabIndex = 37;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 161);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 20);
			this->textBox2->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(90, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 35;
			this->label2->Text = L"E-mail";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(100, 76);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 13);
			this->label7->TabIndex = 34;
			this->label7->Text = L"ПІБ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(131, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 20);
			this->textBox1->TabIndex = 33;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1113, 606);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Замовлення";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1113, 606);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Користувачі";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 48;
			this->label1->Text = L"ID";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(63, 6);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 13);
			this->label9->TabIndex = 49;
			this->label9->Text = L"ПІП";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(131, 6);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 13);
			this->label10->TabIndex = 50;
			this->label10->Text = L"логін";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(397, 6);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(50, 13);
			this->label11->TabIndex = 51;
			this->label11->Text = L"телефон";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(284, 6);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 13);
			this->label12->TabIndex = 52;
			this->label12->Text = L"email";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(192, 6);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 13);
			this->label13->TabIndex = 53;
			this->label13->Text = L"пароль";
			// 
			// admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1297, 682);
			this->Controls->Add(this->tabControl1);
			this->Name = L"admin";
			this->Text = L"admin";
			this->Load += gcnew System::EventHandler(this, &admin::admin_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->pnlCurer->ResumeLayout(false);
			this->pnlCurer->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAddCurer_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ShowClients(Clients arr[], int n);
	private: System::Void ClearClients(int n);

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e);


	private: System::Void admin_Load(System::Object^ sender, System::EventArgs^ e);

};
}
