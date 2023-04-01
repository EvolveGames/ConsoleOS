#include "System/Keyboard/Keyboard.h"
#include "System/Console.h"
#include "System/System.h"

extern "C" int main() 
{
    System::InitSystemComponents();

    Console::WriteLine("hello, this is my kernel", ForegroundColor::LightCyan);
    //Console::WriteLine(to_string(Keyboard::IsKeyPressed(Keyboard::keycode::KEY_SPACE)));

    //asm volatile("int $0x0");
    for(;;);
}
