#pragma once

namespace mypro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for delrec
	/// </summary>
	public ref class delrec : public System::Windows::Forms::Form
	{
	public:
		delrec(void)
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
		~delrec()
		{
			if (components)
			{
				delete components;
			}
		}
		String^ gender;
	private: System::Windows::Forms::Label^  label6;
	protected: 
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox5;


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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(115, 180);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 13);
			this->label6->TabIndex = 1055;
			this->label6->Text = L"Gender:";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(394, 176);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(65, 17);
			this->radioButton2->TabIndex = 1054;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &delrec::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(243, 176);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(52, 17);
			this->radioButton1->TabIndex = 1053;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &delrec::radioButton1_CheckedChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(301, 329);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(231, 96);
			this->richTextBox1->TabIndex = 1052;
			this->richTextBox1->Text = L"";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(248, 267);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(298, 20);
			this->textBox7->TabIndex = 1051;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(140, 346);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 13);
			this->label9->TabIndex = 1050;
			this->label9->Text = L"Address:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(115, 267);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 13);
			this->label8->TabIndex = 1049;
			this->label8->Text = L"Mobile No.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(99, 210);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 13);
			this->label7->TabIndex = 1048;
			this->label7->Text = L"Date of Birth:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(234, 203);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(298, 20);
			this->textBox6->TabIndex = 1047;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(140, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 1046;
			this->label5->Text = L"ID";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(234, 61);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 20);
			this->textBox3->TabIndex = 1045;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(99, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 1044;
			this->label4->Text = L"Last Name:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(234, 114);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(298, 20);
			this->textBox4->TabIndex = 1043;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(99, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 1042;
			this->label2->Text = L"Father Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(99, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 1041;
			this->label1->Text = L"First Name:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(234, 138);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(298, 20);
			this->textBox2->TabIndex = 1040;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(234, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(298, 20);
			this->textBox1->TabIndex = 1039;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(243, 490);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 23);
			this->button1->TabIndex = 1056;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &delrec::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(505, 490);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 23);
			this->button2->TabIndex = 1057;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &delrec::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(383, 490);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 23);
			this->button3->TabIndex = 1058;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &delrec::button3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(99, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(99, 13);
			this->label10->TabIndex = 1061;
			this->label10->Text = L"Enter Firstname:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(411, 16);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 1060;
			this->button4->Text = L"Search";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &delrec::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox5->Location = System::Drawing::Point(234, 16);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(165, 20);
			this->textBox5->TabIndex = 1059;
			
			// 
			// delrec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(659, 602);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Name = L"delrec";
			this->Text = L"delrec";
			this->Load += gcnew System::EventHandler(this, &delrec::delrec_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }

private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 gender="male";
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 gender="female";
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 

			 
			 String^ comboval=textBox5->Text;
			 MySqlConnection^ conn=gcnew MySqlConnection("server=localhost;port=3306;username=root;password=themohal123;database=myproject");
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand ("DELETE FROM myproject.mydata WHERE firstname='"+comboval+"';",conn);
			try
			{
			 conn->Open();
			 MySqlDataReader^ myReader;
				myReader=cmdDataBase->ExecuteReader();
				MessageBox::Show("Data Has Been Deleted");
				
				 conn->Close();
			}
			catch(Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}

		 }
private: System::Void delrec_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 textBox1->Clear();
			 textBox2->Clear();
			 textBox3->Clear();
			 textBox4->Clear();
			 textBox6->Clear();
			 textBox7->Clear();
			 richTextBox1->Clear();
			 radioButton1->Checked=false;
	         radioButton2->Checked=false;
			 
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox5->Text=="")
					{MessageBox::Show("Please Enter Firstname");
			 }
			 
			 String^ comboval=textBox5->Text;
				  MySqlConnection^ conn=gcnew MySqlConnection("server=localhost;port=3306;username=root;password=themohal123;database=myproject");
			  
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand ("SELECT * FROM myproject.mydata where firstname='"+comboval+"';",conn);
			 MySqlDataReader^ myReader;
			 try
			 {
				 conn->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 
				
				if(myReader->Read())
				{
					
					
		String^ idn=myReader->GetInt32("id").ToString();
		textBox3->Text=idn;
		String^ fnam=myReader->GetString("firstname");
		textBox1->Text=fnam;
		String^ lnam=myReader->GetString("lastname");
		textBox4->Text=lnam;
		String^ frnam=myReader->GetString("fathername");
		textBox2->Text=frnam;
		String^ datb=myReader->GetString("dob");
			textBox6->Text=datb;
		String^ mn=myReader->GetString("mno");
			textBox7->Text=mn;
		String^ adres=myReader->GetString("address");
			richTextBox1->Text=adres;
			String^ gendr=myReader->GetString("gender");
				if(gendr=="male")
				{
					radioButton1->Checked=true;
				}
				else
					radioButton2->Checked=true;

				}
conn->Close();
			 }
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
		 }
};
}
