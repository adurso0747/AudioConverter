#include "MyForm2.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Form2(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	AudioConverter::MyForm2 form;
	Application::Run(%form);
}
