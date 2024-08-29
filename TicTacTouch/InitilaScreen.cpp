#include "InitialScreen.h"

using namespace System;
using namespace System::Windows::Forms;
 [STAThreadAttribute]

void main(array<String^>^ args) {
	 Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles;
	TicTacTouch:: MyForm frm;
	Application:: Run(% frm);
}
