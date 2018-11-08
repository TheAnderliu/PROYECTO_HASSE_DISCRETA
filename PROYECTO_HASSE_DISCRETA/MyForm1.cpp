#include "stdafx.h"
#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew PROYECTO_HASSE_DISCRETA::MyForm1()); //Project 1 es el nombre del proyecto
}

