#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Form1(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	AudioConverter::MyForm1 form;
	Application::Run(%form);
}
