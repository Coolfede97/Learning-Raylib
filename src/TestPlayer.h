#pragma once

#include <assert.h>
#include <iostream>
#include "raylib.h"
#include "Vec2.h"
using namespace std;

class TestPlayer
{
public:
    TestPlayer(Vec2 pos_in=Vec2(0.0,0.0), Color color_in=WHITE);
    TestPlayer operator=(TestPlayer other)
    {
        position = other.position;
        color = other.color;
    }
    Vec2 position;
    Color color;
};