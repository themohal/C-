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
	/// Summary for view
	/// </summary>
	public ref class view : public System::Windows::Forms::Form
	{
	public:
		view(void)
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
		~view()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 108);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(841, 150);
			this->dataGridView1->TabIndex = 1030;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(252, 44);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(404, 20);
			this->textBox5->TabIndex = 1029;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &view::textBox5_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(79, 51);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 13);
			this->label6->TabIndex = 1028;
			this->label6->Text = L"Enter FirstName";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(713, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1031;
			this->button1->Text = L"search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &view::button1_Click);
			// 
			// view
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Name = L"view";
			this->Text = L"view";
			this->Load += gcnew System::EventHandler(this, &view::view_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				
			 }
	private: System::Void view_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			  try
			 {
				 if(textBox5->Text=="")
					{MessageBox::Show("Please Enter Firstname");
			 }
			 
			  MySqlConnection^ conn=gcnew MySqlConnection("server=localhost;port=3306;username=root;password=themohal123;database=myproject");
			 
			 MySqlDataAdapter^ sda=gcnew MySqlDataAdapter ("SELECT *FROM mydata firstname where firstname like '"+textBox5->Text+"%'",conn);
			 conn->Open();
		     DataTable^ dt=gcnew DataTable();
			 sda->Fill(dt);
			 dataGridView1->DataSource=dt;
			 conn->Close();
			 }
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
		 }
};
}
