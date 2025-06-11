#include "LoginForAll.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Kursova2::LoginForAll   form;
	Application::Run(% form);
}
