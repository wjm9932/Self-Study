#include <iostream>
#include "BackGround.hpp"
#include "UI.hpp"
#include "UI_Proxy.hpp"
#include "Timer.hpp"

int main()
{
    Timer* timer = Timer::GetTimer();
    timer->Reset();
    float dt;

    UI_Proxy ui_Proxy;

    while (1)
    {
        dt = static_cast<float>(Timer::GetTimer()->GetElapsedSeconds());
        Timer::GetTimer()->Reset();

        ui_Proxy.LoadUI(dt);
    }
}