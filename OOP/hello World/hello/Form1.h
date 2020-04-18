#pragma once

namespace hello {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	private ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnclick;
	private: System::Windows::Forms::Button^  btnexit;


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
			this->btnclick = (gcnew System::Windows::Forms::Button());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(108, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 0;
			// 
			// btnclick
			// 
			this->btnclick->Location = System::Drawing::Point(111, 126);
			this->btnclick->Name = L"btnclick";
			this->btnclick->Size = System::Drawing::Size(75, 23);
			this->btnclick->TabIndex = 1;
			this->btnclick->Text = L"&Click Here..";
			this->btnclick->UseVisualStyleBackColor = true;
			this->btnclick->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// btnexit
			// 
			this->btnexit->Location = System::Drawing::Point(111, 155);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(75, 23);
			this->btnexit->TabIndex = 2;
			this->btnexit->Text = L"E&xit";
			this->btnexit->UseVisualStyleBackColor = true;
			this->btnexit->Click += gcnew System::EventHandler(this, &Form1::btnexit_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->btnclick);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Welcome ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 label1->Text="Aslaam O Alaikum";
				 
			 }
	
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e){
			 }
				 
				
			 
	private: System::Void btnexit_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
			 }
			 
			 
	};
}

