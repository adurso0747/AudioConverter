#pragma once
#include "MyForm3.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <vcclr.h>
#include <stdlib.h>
#include <malloc.h>
#include <windows.h>
#include <tchar.h>
#include <direct.h>


namespace AudioConverter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  encodersToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::TextBox^  textBox2;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->encodersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(686, 28);
			this->menuStrip1->TabIndex = 0;
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
			this->exitToolStripMenuItem->Size = System::Drawing::Size(108, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::exitToolStripMenuItem_Click);
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
			this->encodersToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::encodersToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Folder Directory";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(58, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(331, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Folder not selected";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(477, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Choose folder";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(477, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Encode";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(58, 285);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(142, 23);
			this->progressBar1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(243, 285);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(129, 22);
			this->textBox2->TabIndex = 6;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(686, 320);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->Text = L"Batch Mode";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
	exit(0);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	folderBrowserDialog1->ShowDialog();
	textBox1->Text = folderBrowserDialog1->SelectedPath;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ encoderPath;
	String^ encoderPath2;
	String^ line;
	String^ line2;
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	textBox2->Text = " ";
	progressBar1->Value = 0;
	String ^ newFolder = textBox1->Text;
	newFolder = newFolder + " - MP3";
	pin_ptr<const wchar_t> wch = PtrToStringChars(newFolder);
	size_t convertedChars = 0;
	size_t sizeInBytes = ((newFolder->Length + 1));
	errno_t err = 0;
	char *ch = (char*)malloc(sizeInBytes);
	err = wcstombs_s(&convertedChars,
		ch, sizeInBytes,
		wch, sizeInBytes);
	mkdir(ch);
	try {
		String^ currDirectory = Directory::GetCurrentDirectory();
		currDirectory = currDirectory + "\\flacencoder.txt";
		StreamReader^ sr = gcnew StreamReader(currDirectory);
		line2 = sr->ReadLine();
		sr->Close();
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
	}
	catch (Exception^ e) {
		Console^ c;
		c->WriteLine("Exception: " + e->Message);
	}

	encoderPath = line;
	encoderPath2 = line2;
	DirectoryInfo^ d = gcnew DirectoryInfo(textBox1->Text);
	cli::array<System::IO::FileInfo^>^ a = d->GetFiles();
	for (int i = 0; i < a->Length; i++) {
		if (i != 0) {
			if ((a->Length / i) == (a->Length * .25)) {
				progressBar1->Increment(25);
			}
			if ((a->Length / i) == (a->Length *.50)) {
				progressBar1->Increment(25);
			}
			if ((a->Length / i) == a->Length * .75) {
				progressBar1->Increment(25);
			}
		}
		String ^ args = a[i]->FullName;
		String ^ modifyArgs = args;
		int fileExtPos = args->LastIndexOf(".");
		if (fileExtPos >= 0) {
			args = args->Substring(0, fileExtPos);
		}
		String^ flacArgs = "-d \"" + args + ".flac\"";
		String^ lameArgs = "-V2 \"" + args + ".wav\" \"";
		int fileExtPos1 = modifyArgs->LastIndexOf("\\");
		if (fileExtPos1 >= 0) {
			modifyArgs = modifyArgs->Substring(0, fileExtPos1);
		}
		lameArgs = lameArgs + modifyArgs + " - MP3\\" + a[i]->Name;
		int fileExtPos2 = lameArgs->LastIndexOf(".");
		if (fileExtPos2 >= 0) {
			lameArgs = lameArgs->Substring(0, fileExtPos2);
		}
		lameArgs = lameArgs + ".mp3\"";
		Process^ p = gcnew Process();
		p->StartInfo->CreateNoWindow = true;
		p->StartInfo->UseShellExecute = false;
		p->StartInfo->FileName = encoderPath2;
		p->StartInfo->Arguments = flacArgs;
		p->Start();
		p->WaitForExit();
		Process^ p2 = gcnew Process();
		p2->StartInfo->CreateNoWindow = true;
		p2->StartInfo->UseShellExecute = false;
		p2->StartInfo->FileName = encoderPath;
		p2->StartInfo->Arguments = lameArgs;
		p2->Start();
		p2->WaitForExit();
		args = args + ".wav";
		pin_ptr<const wchar_t> wch = PtrToStringChars(args);
		size_t convertedChars = 0;
		size_t sizeInBytes = ((args->Length + 1));
		errno_t err = 0;
		char *ch = (char*)malloc(sizeInBytes);
		err = wcstombs_s(&convertedChars,
			ch, sizeInBytes,
			wch, sizeInBytes);
		int result = remove(ch);
		if (result == -1) {
			printf("error");
		}
	}
	progressBar1->Value = 100;
	textBox2->Text = "Encoding finished";
}
};
}
