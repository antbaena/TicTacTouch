#include "InitialScreen.h"
#include "GameScreen.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace TicTacTouch;
 [STAThreadAttribute]

void main(array<String^>^ args) {
	 Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles;
	TicTacTouch:: InitialScreen init;
	Application:: Run(% init);
}
