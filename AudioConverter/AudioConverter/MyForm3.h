#pragma once
namespace AudioConverter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(42, 158);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(295, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm3::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(366, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Choose";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Lame Encoder";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Flac Encoder";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(42, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(295, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm3::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(366, 43);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Choose";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 339);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm3";
			this->Text = L"Encoders";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		openFileDialog1->ShowDialog();
		textBox1->Text = openFileDialog1->FileName;
		String^ encDirectory = openFileDialog1->FileName;
		String^ currDirectory = Directory::GetCurrentDirectory();
		currDirectory = currDirectory + "\\lameencoder.txt";
		try {
			StreamWriter^ sw = gcnew StreamWriter(currDirectory);
			sw->WriteLine(encDirectory);
			sw->Close();
		}
		catch (Exception^ e) {
			Console^ c;
			c->WriteLine("Exception: " + e->Message);
		}
	}
	
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
	textBox2->Text = openFileDialog1->FileName;
	String^ encDirectory = openFileDialog1->FileName;
	String^ currDirectory = Directory::GetCurrentDirectory();
	currDirectory = currDirectory + "\\flacencoder.txt";
	try {
		StreamWriter^ sw = gcnew StreamWriter(currDirectory);
		sw->WriteLine(encDirectory);
		sw->Close();
	}
	catch (Exception^ e) {
		Console^ c;
		c->WriteLine("Exception: " + e->Message);
	}
}
};
}
