#include "THEFORM.h"

#include <Windows.h>

using namespace CALCLAB4;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew THEFORM);
    return 0;
}


