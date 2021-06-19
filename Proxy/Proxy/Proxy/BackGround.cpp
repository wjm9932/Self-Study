#include <iostream>
#include "BackGround.hpp"

void BackGound::LoadUI(float dt)
{
    std::cout << "Back Ground is loaded\n";
}

bool BackGound::IsLoaded(float dt)
{
    time += dt;
    if (time >= 5.f)
    {
        time = 0.f;
        return true;
    }
    else
    {
        return false;
    }
}
