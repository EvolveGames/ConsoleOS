#include "System.h"

void System::ErrorPanel(const char *error)
{
    if (error != NULL)
    {
        Console::ClearScreen();
        Console::WriteLine("Main System Exeption:\n", ForegroundColor::LightRed);
        Console::Write("Error: ", ForegroundColor::LightRed);
        Console::WriteLine(error, ForegroundColor::Red);
    }

    for(;;);
}

void System::InitSystemComponents()
{
    isr_init();
    sti();
    Keyboard::KeyboardInit();
}