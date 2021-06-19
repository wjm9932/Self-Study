#pragma once
#include "UI.hpp"

class Button : public UI
{
public:
    //virtual void LoadImage() override;
    virtual void LoadUI(float dt) override;
    bool IsLoaded(float dt);
private:
    float time = 0.f;
    bool isLoaded = false;
};