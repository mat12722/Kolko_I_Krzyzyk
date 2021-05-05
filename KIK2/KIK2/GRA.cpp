#include "GRA.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KIK2::GRA form;
	Application::Run(% form);

	return 0;
}

