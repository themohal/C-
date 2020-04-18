#pragma once

namespace mypro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for food
	/// </summary>
	public ref class food : public System::Windows::Forms::Form
	{
	public:
		food(void)
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
		~food()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::CheckBox^  checkBox36;
	private: System::Windows::Forms::ComboBox^  comboBox36;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::CheckBox^  checkBox37;
	private: System::Windows::Forms::ComboBox^  comboBox37;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::CheckBox^  checkBox38;
	private: System::Windows::Forms::ComboBox^  comboBox38;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::CheckBox^  checkBox39;
	private: System::Windows::Forms::ComboBox^  comboBox39;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::CheckBox^  checkBox40;
	private: System::Windows::Forms::ComboBox^  comboBox40;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::CheckBox^  checkBox31;
	private: System::Windows::Forms::ComboBox^  comboBox31;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::CheckBox^  checkBox32;
	private: System::Windows::Forms::ComboBox^  comboBox32;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::CheckBox^  checkBox33;
	private: System::Windows::Forms::ComboBox^  comboBox33;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::CheckBox^  checkBox34;
	private: System::Windows::Forms::ComboBox^  comboBox34;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::CheckBox^  checkBox35;
	private: System::Windows::Forms::ComboBox^  comboBox35;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::ComboBox^  comboBox28;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::ComboBox^  comboBox29;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::ComboBox^  comboBox30;
	private: System::Windows::Forms::CheckBox^  checkBox28;
	private: System::Windows::Forms::CheckBox^  checkBox29;
	private: System::Windows::Forms::CheckBox^  checkBox30;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::ComboBox^  comboBox26;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::ComboBox^  comboBox27;
	private: System::Windows::Forms::CheckBox^  checkBox26;
	private: System::Windows::Forms::CheckBox^  checkBox27;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::ComboBox^  comboBox16;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::ComboBox^  comboBox17;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::ComboBox^  comboBox18;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::ComboBox^  comboBox19;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::ComboBox^  comboBox20;
	private: System::Windows::Forms::CheckBox^  checkBox20;
	private: System::Windows::Forms::CheckBox^  checkBox19;
	private: System::Windows::Forms::CheckBox^  checkBox18;
	private: System::Windows::Forms::CheckBox^  checkBox17;
	private: System::Windows::Forms::CheckBox^  checkBox16;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: System::Windows::Forms::ComboBox^  comboBox11;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::CheckBox^  checkBox12;
	private: System::Windows::Forms::ComboBox^  comboBox12;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::CheckBox^  checkBox13;
	private: System::Windows::Forms::ComboBox^  comboBox13;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::CheckBox^  checkBox14;
	private: System::Windows::Forms::ComboBox^  comboBox14;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::CheckBox^  checkBox15;
	private: System::Windows::Forms::ComboBox^  comboBox15;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::ComboBox^  comboBox10;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(food::typeid));
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->checkBox36 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox36 = (gcnew System::Windows::Forms::ComboBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->checkBox37 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox37 = (gcnew System::Windows::Forms::ComboBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->checkBox38 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox38 = (gcnew System::Windows::Forms::ComboBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->checkBox39 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox39 = (gcnew System::Windows::Forms::ComboBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->checkBox40 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox40 = (gcnew System::Windows::Forms::ComboBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox31 = (gcnew System::Windows::Forms::ComboBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->checkBox32 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox32 = (gcnew System::Windows::Forms::ComboBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->checkBox33 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox33 = (gcnew System::Windows::Forms::ComboBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->checkBox34 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox34 = (gcnew System::Windows::Forms::ComboBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->checkBox35 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox35 = (gcnew System::Windows::Forms::ComboBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->comboBox28 = (gcnew System::Windows::Forms::ComboBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->comboBox29 = (gcnew System::Windows::Forms::ComboBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->comboBox30 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->comboBox26 = (gcnew System::Windows::Forms::ComboBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->comboBox27 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->comboBox16 = (gcnew System::Windows::Forms::ComboBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->comboBox17 = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->comboBox18 = (gcnew System::Windows::Forms::ComboBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->comboBox19 = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->comboBox20 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(696, 218);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(379, 76);
			this->pictureBox9->TabIndex = 367;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(1034, 218);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(349, 76);
			this->pictureBox8->TabIndex = 366;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(0, 218);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(400, 76);
			this->pictureBox7->TabIndex = 365;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(368, 218);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(355, 76);
			this->pictureBox4->TabIndex = 364;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(795, -1);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(463, 81);
			this->pictureBox3->TabIndex = 363;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, -1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(418, 81);
			this->pictureBox2->TabIndex = 362;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(368, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(427, 81);
			this->pictureBox1->TabIndex = 361;
			this->pictureBox1->TabStop = false;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(517, 330);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(30, 13);
			this->label43->TabIndex = 360;
			this->label43->Text = L"Qty:";
			// 
			// checkBox36
			// 
			this->checkBox36->AutoSize = true;
			this->checkBox36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox36->Location = System::Drawing::Point(418, 329);
			this->checkBox36->Name = L"checkBox36";
			this->checkBox36->Size = System::Drawing::Size(128, 17);
			this->checkBox36->TabIndex = 359;
			this->checkBox36->Text = L"Tandoori Paratha:";
			this->checkBox36->UseVisualStyleBackColor = true;
			// 
			// comboBox36
			// 
			this->comboBox36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox36->FormattingEnabled = true;
			this->comboBox36->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox36->Location = System::Drawing::Point(549, 327);
			this->comboBox36->Name = L"comboBox36";
			this->comboBox36->Size = System::Drawing::Size(30, 21);
			this->comboBox36->TabIndex = 358;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(517, 356);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(30, 13);
			this->label44->TabIndex = 357;
			this->label44->Text = L"Qty:";
			// 
			// checkBox37
			// 
			this->checkBox37->AutoSize = true;
			this->checkBox37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox37->Location = System::Drawing::Point(419, 356);
			this->checkBox37->Name = L"checkBox37";
			this->checkBox37->Size = System::Drawing::Size(102, 17);
			this->checkBox37->TabIndex = 356;
			this->checkBox37->Text = L"Khamire Roti:";
			this->checkBox37->UseVisualStyleBackColor = true;
			// 
			// comboBox37
			// 
			this->comboBox37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox37->FormattingEnabled = true;
			this->comboBox37->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox37->Location = System::Drawing::Point(549, 354);
			this->comboBox37->Name = L"comboBox37";
			this->comboBox37->Size = System::Drawing::Size(30, 21);
			this->comboBox37->TabIndex = 355;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(517, 382);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(30, 13);
			this->label45->TabIndex = 354;
			this->label45->Text = L"Qty:";
			// 
			// checkBox38
			// 
			this->checkBox38->AutoSize = true;
			this->checkBox38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox38->Location = System::Drawing::Point(419, 382);
			this->checkBox38->Name = L"checkBox38";
			this->checkBox38->Size = System::Drawing::Size(107, 17);
			this->checkBox38->TabIndex = 353;
			this->checkBox38->Text = L"Sada Paratha:";
			this->checkBox38->UseVisualStyleBackColor = true;
			// 
			// comboBox38
			// 
			this->comboBox38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox38->FormattingEnabled = true;
			this->comboBox38->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox38->Location = System::Drawing::Point(549, 380);
			this->comboBox38->Name = L"comboBox38";
			this->comboBox38->Size = System::Drawing::Size(30, 21);
			this->comboBox38->TabIndex = 352;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(517, 407);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(30, 13);
			this->label46->TabIndex = 351;
			this->label46->Text = L"Qty:";
			// 
			// checkBox39
			// 
			this->checkBox39->AutoSize = true;
			this->checkBox39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox39->Location = System::Drawing::Point(419, 406);
			this->checkBox39->Name = L"checkBox39";
			this->checkBox39->Size = System::Drawing::Size(110, 17);
			this->checkBox39->TabIndex = 350;
			this->checkBox39->Text = L"Chicken Naan:";
			this->checkBox39->UseVisualStyleBackColor = true;
			// 
			// comboBox39
			// 
			this->comboBox39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox39->FormattingEnabled = true;
			this->comboBox39->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox39->Location = System::Drawing::Point(549, 407);
			this->comboBox39->Name = L"comboBox39";
			this->comboBox39->Size = System::Drawing::Size(30, 21);
			this->comboBox39->TabIndex = 349;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(517, 303);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(30, 13);
			this->label47->TabIndex = 348;
			this->label47->Text = L"Qty:";
			// 
			// checkBox40
			// 
			this->checkBox40->AutoSize = true;
			this->checkBox40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox40->Location = System::Drawing::Point(419, 302);
			this->checkBox40->Name = L"checkBox40";
			this->checkBox40->Size = System::Drawing::Size(97, 17);
			this->checkBox40->TabIndex = 347;
			this->checkBox40->Text = L"Roghni Nan:";
			this->checkBox40->UseVisualStyleBackColor = true;
			// 
			// comboBox40
			// 
			this->comboBox40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox40->FormattingEnabled = true;
			this->comboBox40->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox40->Location = System::Drawing::Point(549, 300);
			this->comboBox40->Name = L"comboBox40";
			this->comboBox40->Size = System::Drawing::Size(30, 21);
			this->comboBox40->TabIndex = 346;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(517, 114);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(30, 13);
			this->label37->TabIndex = 345;
			this->label37->Text = L"Qty:";
			// 
			// checkBox31
			// 
			this->checkBox31->AutoSize = true;
			this->checkBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox31->Location = System::Drawing::Point(418, 113);
			this->checkBox31->Name = L"checkBox31";
			this->checkBox31->Size = System::Drawing::Size(90, 17);
			this->checkBox31->TabIndex = 344;
			this->checkBox31->Text = L"Pineapple :";
			this->checkBox31->UseVisualStyleBackColor = true;
			// 
			// comboBox31
			// 
			this->comboBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox31->FormattingEnabled = true;
			this->comboBox31->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox31->Location = System::Drawing::Point(549, 111);
			this->comboBox31->Name = L"comboBox31";
			this->comboBox31->Size = System::Drawing::Size(30, 21);
			this->comboBox31->TabIndex = 343;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(517, 140);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(30, 13);
			this->label38->TabIndex = 342;
			this->label38->Text = L"Qty:";
			// 
			// checkBox32
			// 
			this->checkBox32->AutoSize = true;
			this->checkBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox32->Location = System::Drawing::Point(419, 140);
			this->checkBox32->Name = L"checkBox32";
			this->checkBox32->Size = System::Drawing::Size(59, 17);
			this->checkBox32->TabIndex = 341;
			this->checkBox32->Text = L"Kulfa:";
			this->checkBox32->UseVisualStyleBackColor = true;
			// 
			// comboBox32
			// 
			this->comboBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox32->FormattingEnabled = true;
			this->comboBox32->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox32->Location = System::Drawing::Point(549, 138);
			this->comboBox32->Name = L"comboBox32";
			this->comboBox32->Size = System::Drawing::Size(30, 21);
			this->comboBox32->TabIndex = 340;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(517, 166);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(30, 13);
			this->label39->TabIndex = 339;
			this->label39->Text = L"Qty:";
			// 
			// checkBox33
			// 
			this->checkBox33->AutoSize = true;
			this->checkBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox33->Location = System::Drawing::Point(419, 166);
			this->checkBox33->Name = L"checkBox33";
			this->checkBox33->Size = System::Drawing::Size(68, 17);
			this->checkBox33->TabIndex = 338;
			this->checkBox33->Text = L"Vanilla:";
			this->checkBox33->UseVisualStyleBackColor = true;
			// 
			// comboBox33
			// 
			this->comboBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox33->FormattingEnabled = true;
			this->comboBox33->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox33->Location = System::Drawing::Point(549, 164);
			this->comboBox33->Name = L"comboBox33";
			this->comboBox33->Size = System::Drawing::Size(30, 21);
			this->comboBox33->TabIndex = 337;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(517, 191);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(30, 13);
			this->label40->TabIndex = 336;
			this->label40->Text = L"Qty:";
			// 
			// checkBox34
			// 
			this->checkBox34->AutoSize = true;
			this->checkBox34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox34->Location = System::Drawing::Point(419, 190);
			this->checkBox34->Name = L"checkBox34";
			this->checkBox34->Size = System::Drawing::Size(68, 17);
			this->checkBox34->TabIndex = 335;
			this->checkBox34->Text = L"Mango:";
			this->checkBox34->UseVisualStyleBackColor = true;
			// 
			// comboBox34
			// 
			this->comboBox34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox34->FormattingEnabled = true;
			this->comboBox34->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox34->Location = System::Drawing::Point(549, 191);
			this->comboBox34->Name = L"comboBox34";
			this->comboBox34->Size = System::Drawing::Size(30, 21);
			this->comboBox34->TabIndex = 334;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(517, 87);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(30, 13);
			this->label41->TabIndex = 333;
			this->label41->Text = L"Qty:";
			// 
			// checkBox35
			// 
			this->checkBox35->AutoSize = true;
			this->checkBox35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox35->Location = System::Drawing::Point(418, 86);
			this->checkBox35->Name = L"checkBox35";
			this->checkBox35->Size = System::Drawing::Size(97, 17);
			this->checkBox35->TabIndex = 332;
			this->checkBox35->Text = L"Truity Fruity:";
			this->checkBox35->UseVisualStyleBackColor = true;
			// 
			// comboBox35
			// 
			this->comboBox35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox35->FormattingEnabled = true;
			this->comboBox35->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox35->Location = System::Drawing::Point(549, 84);
			this->comboBox35->Name = L"comboBox35";
			this->comboBox35->Size = System::Drawing::Size(30, 21);
			this->comboBox35->TabIndex = 331;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(923, 357);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(30, 13);
			this->label34->TabIndex = 330;
			this->label34->Text = L"Qty:";
			// 
			// comboBox28
			// 
			this->comboBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox28->FormattingEnabled = true;
			this->comboBox28->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Half ", L"Full"});
			this->comboBox28->Location = System::Drawing::Point(966, 355);
			this->comboBox28->Name = L"comboBox28";
			this->comboBox28->Size = System::Drawing::Size(30, 21);
			this->comboBox28->TabIndex = 329;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(923, 383);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(30, 13);
			this->label35->TabIndex = 328;
			this->label35->Text = L"Qty:";
			// 
			// comboBox29
			// 
			this->comboBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox29->FormattingEnabled = true;
			this->comboBox29->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox29->Location = System::Drawing::Point(966, 381);
			this->comboBox29->Name = L"comboBox29";
			this->comboBox29->Size = System::Drawing::Size(30, 21);
			this->comboBox29->TabIndex = 327;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(923, 408);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(30, 13);
			this->label36->TabIndex = 326;
			this->label36->Text = L"Qty:";
			// 
			// comboBox30
			// 
			this->comboBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox30->FormattingEnabled = true;
			this->comboBox30->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Half ", L"Full"});
			this->comboBox30->Location = System::Drawing::Point(966, 408);
			this->comboBox30->Name = L"comboBox30";
			this->comboBox30->Size = System::Drawing::Size(30, 21);
			this->comboBox30->TabIndex = 325;
			// 
			// checkBox28
			// 
			this->checkBox28->AutoSize = true;
			this->checkBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox28->Location = System::Drawing::Point(794, 408);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(100, 17);
			this->checkBox28->TabIndex = 324;
			this->checkBox28->Text = L"Masala Rice:";
			this->checkBox28->UseVisualStyleBackColor = true;
			// 
			// checkBox29
			// 
			this->checkBox29->AutoSize = true;
			this->checkBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox29->Location = System::Drawing::Point(794, 383);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(149, 17);
			this->checkBox29->TabIndex = 323;
			this->checkBox29->Text = L"Vegetable Fried Rice:";
			this->checkBox29->UseVisualStyleBackColor = true;
			// 
			// checkBox30
			// 
			this->checkBox30->AutoSize = true;
			this->checkBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox30->Location = System::Drawing::Point(794, 356);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(118, 17);
			this->checkBox30->TabIndex = 322;
			this->checkBox30->Text = L"Egg Fried Rice :";
			this->checkBox30->UseVisualStyleBackColor = true;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(924, 304);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(30, 13);
			this->label32->TabIndex = 321;
			this->label32->Text = L"Qty:";
			// 
			// comboBox26
			// 
			this->comboBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox26->FormattingEnabled = true;
			this->comboBox26->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox26->Location = System::Drawing::Point(967, 302);
			this->comboBox26->Name = L"comboBox26";
			this->comboBox26->Size = System::Drawing::Size(30, 21);
			this->comboBox26->TabIndex = 320;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(924, 329);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(30, 13);
			this->label33->TabIndex = 319;
			this->label33->Text = L"Qty:";
			// 
			// comboBox27
			// 
			this->comboBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox27->FormattingEnabled = true;
			this->comboBox27->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Half ", L"Full"});
			this->comboBox27->Location = System::Drawing::Point(967, 329);
			this->comboBox27->Name = L"comboBox27";
			this->comboBox27->Size = System::Drawing::Size(30, 21);
			this->comboBox27->TabIndex = 318;
			// 
			// checkBox26
			// 
			this->checkBox26->AutoSize = true;
			this->checkBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox26->Location = System::Drawing::Point(795, 329);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(149, 17);
			this->checkBox26->TabIndex = 317;
			this->checkBox26->Text = L"Vegetable Fried Rice:";
			this->checkBox26->UseVisualStyleBackColor = true;
			// 
			// checkBox27
			// 
			this->checkBox27->AutoSize = true;
			this->checkBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox27->Location = System::Drawing::Point(795, 304);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(118, 17);
			this->checkBox27->TabIndex = 316;
			this->checkBox27->Text = L"Chicken Biryani:";
			this->checkBox27->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(897, 112);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(30, 13);
			this->label20->TabIndex = 315;
			this->label20->Text = L"Qty:";
			// 
			// comboBox16
			// 
			this->comboBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox16->FormattingEnabled = true;
			this->comboBox16->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox16->Location = System::Drawing::Point(929, 109);
			this->comboBox16->Name = L"comboBox16";
			this->comboBox16->Size = System::Drawing::Size(30, 21);
			this->comboBox16->TabIndex = 314;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(897, 136);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(30, 13);
			this->label21->TabIndex = 313;
			this->label21->Text = L"Qty:";
			// 
			// comboBox17
			// 
			this->comboBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox17->FormattingEnabled = true;
			this->comboBox17->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Half ", L"Full"});
			this->comboBox17->Location = System::Drawing::Point(929, 134);
			this->comboBox17->Name = L"comboBox17";
			this->comboBox17->Size = System::Drawing::Size(30, 21);
			this->comboBox17->TabIndex = 312;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(897, 161);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(30, 13);
			this->label22->TabIndex = 311;
			this->label22->Text = L"Qty:";
			// 
			// comboBox18
			// 
			this->comboBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox18->FormattingEnabled = true;
			this->comboBox18->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox18->Location = System::Drawing::Point(929, 158);
			this->comboBox18->Name = L"comboBox18";
			this->comboBox18->Size = System::Drawing::Size(30, 21);
			this->comboBox18->TabIndex = 310;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(897, 183);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(30, 13);
			this->label23->TabIndex = 309;
			this->label23->Text = L"Qty:";
			// 
			// comboBox19
			// 
			this->comboBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox19->FormattingEnabled = true;
			this->comboBox19->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Half ", L"Full"});
			this->comboBox19->Location = System::Drawing::Point(929, 183);
			this->comboBox19->Name = L"comboBox19";
			this->comboBox19->Size = System::Drawing::Size(30, 21);
			this->comboBox19->TabIndex = 308;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(897, 88);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(30, 13);
			this->label24->TabIndex = 307;
			this->label24->Text = L"Qty:";
			// 
			// comboBox20
			// 
			this->comboBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox20->FormattingEnabled = true;
			this->comboBox20->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Half", L"Full"});
			this->comboBox20->Location = System::Drawing::Point(929, 85);
			this->comboBox20->Name = L"comboBox20";
			this->comboBox20->Size = System::Drawing::Size(30, 21);
			this->comboBox20->TabIndex = 306;
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox20->Location = System::Drawing::Point(795, 185);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(120, 17);
			this->checkBox20->TabIndex = 305;
			this->checkBox20->Text = L"Chicken Jalfrezi:";
			this->checkBox20->UseVisualStyleBackColor = true;
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox19->Location = System::Drawing::Point(795, 162);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(90, 17);
			this->checkBox19->TabIndex = 304;
			this->checkBox19->Text = L"Daal Mash:";
			this->checkBox19->UseVisualStyleBackColor = true;
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox18->Location = System::Drawing::Point(795, 138);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(116, 17);
			this->checkBox18->TabIndex = 303;
			this->checkBox18->Text = L"Chicken Karhai:";
			this->checkBox18->UseVisualStyleBackColor = true;
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox17->Location = System::Drawing::Point(795, 113);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(112, 17);
			this->checkBox17->TabIndex = 302;
			this->checkBox17->Text = L"Mix Vegitables:";
			this->checkBox17->UseVisualStyleBackColor = true;
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox16->Location = System::Drawing::Point(795, 87);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(121, 17);
			this->checkBox16->TabIndex = 301;
			this->checkBox16->Text = L"Chicken Makhni:";
			this->checkBox16->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(133, 328);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 13);
			this->label13->TabIndex = 300;
			this->label13->Text = L"Qty:";
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox11->Location = System::Drawing::Point(34, 327);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(108, 17);
			this->checkBox11->TabIndex = 299;
			this->checkBox11->Text = L"Chicken Tikka";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// comboBox11
			// 
			this->comboBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox11->Location = System::Drawing::Point(165, 325);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(30, 21);
			this->comboBox11->TabIndex = 298;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(133, 354);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(30, 13);
			this->label14->TabIndex = 297;
			this->label14->Text = L"Qty:";
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox12->Location = System::Drawing::Point(35, 354);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(86, 17);
			this->checkBox12->TabIndex = 296;
			this->checkBox12->Text = L"Mix Platter";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// comboBox12
			// 
			this->comboBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox12->Location = System::Drawing::Point(165, 352);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(30, 21);
			this->comboBox12->TabIndex = 295;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(133, 380);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(30, 13);
			this->label15->TabIndex = 294;
			this->label15->Text = L"Qty:";
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox13->Location = System::Drawing::Point(35, 380);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(112, 17);
			this->checkBox13->TabIndex = 293;
			this->checkBox13->Text = L"Chicken Kabab";
			this->checkBox13->UseVisualStyleBackColor = true;
			// 
			// comboBox13
			// 
			this->comboBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox13->Location = System::Drawing::Point(165, 378);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(30, 21);
			this->comboBox13->TabIndex = 292;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(133, 405);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(30, 13);
			this->label16->TabIndex = 291;
			this->label16->Text = L"Qty:";
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox14->Location = System::Drawing::Point(35, 404);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(108, 17);
			this->checkBox14->TabIndex = 290;
			this->checkBox14->Text = L"Mutton Qeema";
			this->checkBox14->UseVisualStyleBackColor = true;
			// 
			// comboBox14
			// 
			this->comboBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox14->Location = System::Drawing::Point(165, 405);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(30, 21);
			this->comboBox14->TabIndex = 289;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(133, 301);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(30, 13);
			this->label17->TabIndex = 288;
			this->label17->Text = L"Qty:";
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox15->Location = System::Drawing::Point(35, 300);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(98, 17);
			this->checkBox15->TabIndex = 287;
			this->checkBox15->Text = L"Chicken Boti";
			this->checkBox15->UseVisualStyleBackColor = true;
			// 
			// comboBox15
			// 
			this->comboBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox15->Location = System::Drawing::Point(165, 298);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(30, 21);
			this->comboBox15->TabIndex = 286;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(133, 114);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 13);
			this->label8->TabIndex = 285;
			this->label8->Text = L"Qty:";
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox6->Location = System::Drawing::Point(34, 113);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(88, 17);
			this->checkBox6->TabIndex = 284;
			this->checkBox6->Text = L"HamBurger";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// comboBox6
			// 
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox6->Location = System::Drawing::Point(165, 111);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(30, 21);
			this->comboBox6->TabIndex = 283;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(133, 140);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 13);
			this->label9->TabIndex = 282;
			this->label9->Text = L"Qty:";
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox7->Location = System::Drawing::Point(35, 140);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(56, 17);
			this->checkBox7->TabIndex = 281;
			this->checkBox7->Text = L"Pizza";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// comboBox7
			// 
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox7->Location = System::Drawing::Point(165, 138);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(30, 21);
			this->comboBox7->TabIndex = 280;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(133, 166);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(30, 13);
			this->label10->TabIndex = 279;
			this->label10->Text = L"Qty:";
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox8->Location = System::Drawing::Point(35, 166);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(73, 17);
			this->checkBox8->TabIndex = 278;
			this->checkBox8->Text = L"Nuggets";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// comboBox8
			// 
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox8->Location = System::Drawing::Point(165, 164);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(30, 21);
			this->comboBox8->TabIndex = 277;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(133, 191);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(30, 13);
			this->label11->TabIndex = 276;
			this->label11->Text = L"Qty:";
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox9->Location = System::Drawing::Point(35, 190);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(81, 17);
			this->checkBox9->TabIndex = 275;
			this->checkBox9->Text = L"Sandwich";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// comboBox9
			// 
			this->comboBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox9->Location = System::Drawing::Point(165, 191);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(30, 21);
			this->comboBox9->TabIndex = 274;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(133, 87);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(30, 13);
			this->label12->TabIndex = 273;
			this->label12->Text = L"Qty:";
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox10->Location = System::Drawing::Point(35, 86);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(96, 17);
			this->checkBox10->TabIndex = 272;
			this->checkBox10->Text = L"French Fries";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// comboBox10
			// 
			this->comboBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox10->Location = System::Drawing::Point(165, 84);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(30, 21);
			this->comboBox10->TabIndex = 271;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1171, 328);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 270;
			this->label5->Text = L"Qty:";
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox5->Location = System::Drawing::Point(1072, 327);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(53, 17);
			this->checkBox5->TabIndex = 269;
			this->checkBox5->Text = L"7 Up";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox5->Location = System::Drawing::Point(1203, 325);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(30, 21);
			this->comboBox5->TabIndex = 268;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1171, 354);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 13);
			this->label4->TabIndex = 267;
			this->label4->Text = L"Qty:";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(1073, 354);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(51, 17);
			this->checkBox4->TabIndex = 266;
			this->checkBox4->Text = L"Dew";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox4->Location = System::Drawing::Point(1203, 352);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(30, 21);
			this->comboBox4->TabIndex = 265;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1171, 380);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 13);
			this->label3->TabIndex = 264;
			this->label3->Text = L"Qty:";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(1073, 380);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(55, 17);
			this->checkBox3->TabIndex = 263;
			this->checkBox3->Text = L"Coke";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox3->Location = System::Drawing::Point(1203, 378);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(30, 21);
			this->comboBox3->TabIndex = 262;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1171, 405);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 261;
			this->label2->Text = L"Qty:";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(1073, 404);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(105, 17);
			this->checkBox2->TabIndex = 260;
			this->checkBox2->Text = L"Mineral Water";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox2->Location = System::Drawing::Point(1203, 405);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(30, 21);
			this->comboBox2->TabIndex = 259;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1171, 301);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 258;
			this->label1->Text = L"Qty:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(1073, 300);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(57, 17);
			this->checkBox1->TabIndex = 257;
			this->checkBox1->Text = L"Pepsi";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox1->Location = System::Drawing::Point(1203, 298);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(30, 21);
			this->comboBox1->TabIndex = 256;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(156, 556);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 368;
			this->button1->Text = L"Order";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &food::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(324, 555);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 369;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &food::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(503, 555);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 370;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &food::button3_Click);
			// 
			// food
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1354, 733);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->checkBox36);
			this->Controls->Add(this->comboBox36);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->checkBox37);
			this->Controls->Add(this->comboBox37);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->checkBox38);
			this->Controls->Add(this->comboBox38);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->checkBox39);
			this->Controls->Add(this->comboBox39);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->checkBox40);
			this->Controls->Add(this->comboBox40);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->checkBox31);
			this->Controls->Add(this->comboBox31);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->checkBox32);
			this->Controls->Add(this->comboBox32);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->checkBox33);
			this->Controls->Add(this->comboBox33);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->checkBox34);
			this->Controls->Add(this->comboBox34);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->checkBox35);
			this->Controls->Add(this->comboBox35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->comboBox28);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->comboBox29);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->comboBox30);
			this->Controls->Add(this->checkBox28);
			this->Controls->Add(this->checkBox29);
			this->Controls->Add(this->checkBox30);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->comboBox26);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->comboBox27);
			this->Controls->Add(this->checkBox26);
			this->Controls->Add(this->checkBox27);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->comboBox16);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->comboBox17);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->comboBox18);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->comboBox19);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->comboBox20);
			this->Controls->Add(this->checkBox20);
			this->Controls->Add(this->checkBox19);
			this->Controls->Add(this->checkBox18);
			this->Controls->Add(this->checkBox17);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->comboBox11);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->comboBox12);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->comboBox13);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->comboBox14);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->comboBox15);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->comboBox8);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->comboBox9);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->comboBox10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"food";
			this->Text = L"food";
			this->Load += gcnew System::EventHandler(this, &food::food_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }

private: System::Void food_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
