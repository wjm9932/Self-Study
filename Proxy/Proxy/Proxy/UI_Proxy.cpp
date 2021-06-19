#include "UI_Proxy.hpp"

void UI_Proxy::LoadUI(float dt)
{
    if (backGround.IsLoaded(dt) == true) // 흐름 제어 지금은 간단하게 일정시간이 지나면 프린트 되게했지만 나중에 프록시 적용시킬때는 실제 로딩이 다 되었거나 인풋이 들어왔을경우 작업을 수행하도록 흐름 제어 가능
    {
        backGround.LoadUI(dt);
    }
    if (button.IsLoaded(dt) == true)
    {
        button.LoadUI(dt);
    }
}
