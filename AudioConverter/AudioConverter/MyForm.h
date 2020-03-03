#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"


namespace AudioConverter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  encodersToolStripMenuItem;


	private: System::ComponentModel::IContainer^  components;


	protected:






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->encodersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(115, 118);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 102);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Batch Mode";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(410, 118);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 102);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Single File";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->optionsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(696, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(216, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->encodersToolStripMenuItem });
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->optionsToolStripMenuItem->Text = L"Options";
			// 
			// encodersToolStripMenuItem
			// 
			this->encodersToolStripMenuItem->Name = L"encodersToolStripMenuItem";
			this->encodersToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->encodersToolStripMenuItem->Text = L"Encoders";
			this->encodersToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::encodersToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 327);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Flacinator";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		MyForm1^ form1 = gcnew MyForm1;
		form1->ShowDialog();
		this->Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		MyForm2^ form2 = gcnew MyForm2;
		form2->ShowDialog();
		this->Close();
	}
	private: System::Void filesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void encodersToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ line;
	String^ line2;
	MyForm3^ form3 = gcnew MyForm3;
	try {
		String^ currDirectory = Directory::GetCurrentDirectory();
		currDirectory = currDirectory + "\\flacencoder.txt";
		StreamReader^ sr = gcnew StreamReader(currDirectory);
		line2 = sr->ReadLine();
		sr->Close();
		form3->textBox2->Text = line2;
	}
	catch (Exception^ e) {
		Console^ c;
		c->WriteLine("Exception: " + e->Message);
	}
	try {
		String^ currDirectory = Directory::GetCurrentDirectory();
		currDirectory = currDirectory + "\\lameencoder.txt";
		StreamReader^ sr = gcnew StreamReader(currDirectory);
		line = sr->ReadLine();
		sr->Close();
		form3->textBox1->Text = line;
	}
	catch (Exception^ e) {
		Console^ c;
		c->WriteLine("Exception: " + e->Message);
	}
	form3->Show();
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
