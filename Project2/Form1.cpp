#pragma once 
#include "BlackScholes.h"
#include "Form1.h"


using namespace System;

using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Project2::Form1 form;

	Application::Run(%form);
}

