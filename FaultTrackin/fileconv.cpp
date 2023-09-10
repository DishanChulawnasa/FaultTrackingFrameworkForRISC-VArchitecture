#include "fileconv.h"
#include "podem.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FaultTrackin::fileconv form;
	Application::Run(% form);


}
//array<String^>^ args