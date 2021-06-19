#include "Button.hpp"
#include <iostream>
void Button::LoadUI(float dt)
{
    std::cout << "Button is Loaded\n";
}

bool Button::IsLoaded(float dt)
{
    time += dt;
    if (time >= 3.f)
    {
        time = 0.f;
        return true;
    }
    else
    {
        return false;
    }
}
