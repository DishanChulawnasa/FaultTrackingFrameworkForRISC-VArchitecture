#include "fileconv.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FaultTrackin::fileconv form;
	Application::Run(% form);

	
}