#include "stdafx.h"
#include "signup.h"
#pragma once

namespace Loginform3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
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
	private: System::Windows::Forms::Button^  button2;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(234, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(35, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(160, 20);
			this->textBox2->TabIndex = 15;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(131, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 20);
			this->textBox1->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Password :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Username :";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(131, 123);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 18;
			this->button3->Text = L"SignUp";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 199);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MySqlConnection^ conn=gcnew MySqlConnection("server=localhost;port=3306;username=root;password=themohal123;database=myfirstdb");

			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM myfirstdb.mytableiduserpass where username='"+this->textBox1->Text+"' and password='"+this->textBox2->Text+"';" ,conn);

		     MySqlDataReader^ myReader;
			 try
			 {
				 conn->Open();
				 myReader=cmdDataBase->ExecuteReader();
				int count=0;
				while(myReader->Read())
				{
					count++;
				}
				 if (count==1)
				 {
					 MessageBox::Show("UserName And Password are Correct");
				 }
				 else 
					 MessageBox::Show("Username and Password Are Not Correct");

			 }
			 catch(Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
		 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 signup^ op=gcnew signup();
			 op->ShowDialog();
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

