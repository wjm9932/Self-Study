#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <iostream>
#include "List.h"

void func();


int main()
{
    func();
    _CrtDumpMemoryLeaks();
}

void func()
{
    List<int> test;
    test.Push_Front(1);
    test.Push_Front(2);
    test.Push_Front(3);
}