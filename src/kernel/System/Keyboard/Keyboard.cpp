#include "Keyboard.h"

#define KEYBOARD_PORT 0x60

uint_8 scancode;

static void keyboard_callback(registers_t regs)
{
    scancode = inb(KEYBOARD_PORT);
    Console::WriteLine("key");
    //Keyboard::OnClickEvent.Invoke();
}

void Keyboard::KeyboardInit()
{
    scancode = 0;
    isr_install(IRQ1, keyboard_callback);
}
bool Keyboard::IsKeyPressed(uint_8 key)
{
    return scancode == key;
}
uint_8 GetKeyCode()
{
    return scancode;
}
