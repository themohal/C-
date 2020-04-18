
#pragma once
#include "stdafx.h"
#include "customrec.h"
#include "update.h"
#include "delrec.h"
#include "view.h"
#include "food.h"


namespace mypro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for mdi
	/// </summary>
	public ref class mdi : public System::Windows::Forms::Form
	{
	public:
		mdi(void)
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
		~mdi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  newRecordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  updateRecordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteRecordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton2;
	private: System::Windows::Forms::ToolStripMenuItem^  customerRecordToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mdi::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->newRecordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updateRecordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteRecordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripDropDownButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->customerRecordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripDropDownButton1, 
				this->toolStripSeparator1, this->toolStripDropDownButton2});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1354, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->newRecordToolStripMenuItem, 
				this->updateRecordToolStripMenuItem, this->deleteRecordToolStripMenuItem, this->exitToolStripMenuItem});
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(49, 22);
			this->toolStripDropDownButton1->Text = L"Insert";
			// 
			// newRecordToolStripMenuItem
			// 
			this->newRecordToolStripMenuItem->Name = L"newRecordToolStripMenuItem";
			this->newRecordToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->newRecordToolStripMenuItem->Text = L"New Record";
			this->newRecordToolStripMenuItem->Click += gcnew System::EventHandler(this, &mdi::newRecordToolStripMenuItem_Click);
			// 
			// updateRecordToolStripMenuItem
			// 
			this->updateRecordToolStripMenuItem->Name = L"updateRecordToolStripMenuItem";
			this->updateRecordToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->updateRecordToolStripMenuItem->Text = L"Update Record";
			this->updateRecordToolStripMenuItem->Click += gcnew System::EventHandler(this, &mdi::updateRecordToolStripMenuItem_Click);
			// 
			// deleteRecordToolStripMenuItem
			// 
			this->deleteRecordToolStripMenuItem->Name = L"deleteRecordToolStripMenuItem";
			this->deleteRecordToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->deleteRecordToolStripMenuItem->Text = L"Delete Record";
			this->deleteRecordToolStripMenuItem->Click += gcnew System::EventHandler(this, &mdi::deleteRecordToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &mdi::exitToolStripMenuItem_Click_1);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripDropDownButton2
			// 
			this->toolStripDropDownButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->customerRecordToolStripMenuItem});
			this->toolStripDropDownButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripDropDownButton2.Image")));
			this->toolStripDropDownButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton2->Name = L"toolStripDropDownButton2";
			this->toolStripDropDownButton2->Size = System::Drawing::Size(45, 22);
			this->toolStripDropDownButton2->Text = L"View";
			this->toolStripDropDownButton2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// customerRecordToolStripMenuItem
			// 
			this->customerRecordToolStripMenuItem->Name = L"customerRecordToolStripMenuItem";
			this->customerRecordToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->customerRecordToolStripMenuItem->Text = L"Customer Record";
			this->customerRecordToolStripMenuItem->Click += gcnew System::EventHandler(this, &mdi::customerRecordToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(1115, 646);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 75);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Order Food";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mdi::button1_Click);
			// 
			// mdi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1354, 733);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->button1);
			this->IsMdiContainer = true;
			this->Name = L"mdi";
			this->Text = L"mdi";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &mdi::mdi_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void updateToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void exitToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
				Close();
				 
			 }
	private: System::Void newRecordToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 customrec^ fr=gcnew customrec();
				 fr->MdiParent=this;
				            fr->Show();
										 
										 
			 }

private: System::Void mdi_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void updateRecordToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 update^ op=gcnew update();
			 op->MdiParent=this;
			 
			 op->Show();
			  
		 }
private: System::Void deleteRecordToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			delrec^ op=gcnew delrec();
			op->MdiParent=this;
			op->Show();
			 
		 }
private: System::Void customerRecordToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			view^ op=gcnew view();
			op->MdiParent=this;
				op->Show();
				
			
			 
		 }

		 
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->MdiParent;
			 food^ op=gcnew food();
			 op->Show();
		 }
};
}

