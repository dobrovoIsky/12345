#pragma once

namespace Kursova2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserPanel
	/// </summary>
	public ref class UserPanel : public System::Windows::Forms::Form
	{
	public:
		UserPanel(void)
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
		~UserPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label2;
	private:
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Вітаємо,";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->label2->Location = System::Drawing::Point(160, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"username";
			// 
			// UserPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(591, 496);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UserPanel";
			this->Text = L"UserPanel";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
