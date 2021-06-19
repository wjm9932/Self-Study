#pragma once

class UI
{
public:
    UI();
    ~UI();
   //virtual void LoadImage() = 0;
    virtual void LoadUI(float dt) = 0;

private:
};