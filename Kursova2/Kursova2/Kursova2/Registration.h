#pragma once

namespace Kursova2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
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
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�����";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(53, 47);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 32;
			this->label8->Text = L"����";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(55, 63);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(188, 20);
			this->textBox7->TabIndex = 31;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(52, 164);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 13);
			this->label6->TabIndex = 30;
			this->label6->Text = L"����� ��������";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(55, 180);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(188, 20);
			this->textBox6->TabIndex = 29;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(52, 287);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"ϳ�������� ������";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(56, 312);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(187, 20);
			this->textBox5->TabIndex = 27;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(55, 141);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(188, 20);
			this->textBox4->TabIndex = 26;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(53, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"������";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(55, 264);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(188, 20);
			this->textBox3->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(53, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"ϲ�";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(55, 102);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 20);
			this->textBox1->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button1->Location = System::Drawing::Point(356, 370);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(238, 53);
			this->button1->TabIndex = 18;
			this->button1->Text = L"��������������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Registration::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"E-mail";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(55, 219);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 20);
			this->textBox2->TabIndex = 22;
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(649, 573);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Registration";
			this->Text = L"Registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
