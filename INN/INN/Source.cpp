using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

#include "MyForm.h"

[STAThreadAttribute]

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	INN::MyForm MyForm;
	Application::Run(% MyForm);
}
