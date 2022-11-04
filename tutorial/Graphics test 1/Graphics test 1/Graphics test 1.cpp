#include <iostream>
#include "olcConsoleGameEngine.h"

class olcEngine3D : public olcConsoleGameEngine
{
public:
    olcEngine3D()
    {

    }

public:
    bool OnUserCreate() override
    {
        return true;
    }

    bool OnUserUpdate(float fElapsedTime) override
    {
        return true;
    }
};


int main()
{
    olcEngine3D demo;

    if (demo.ConstructConsole(256, 240, 4, 4))
        demo.Start();

    return 0;
}
