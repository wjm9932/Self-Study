#pragma once
#include "UI.hpp"
#include "BackGround.hpp"
#include "Button.hpp"
class UI_Proxy : public UI
{
public:
    //virtual void LoadImage() override;
    virtual void LoadUI(float dt) override;

private:
    BackGound backGround;
    Button button;
};