#include "MyForm3.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Form3(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	AudioConverter::MyForm3 form;
	Application::Run(%form);
}