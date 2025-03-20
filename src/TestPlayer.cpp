#include "Game.h"
#include <assert.h>
#include <iostream>
#include "raylib.h"
#include "Vec2.h"
#include "TestPlayer.h"
using namespace std;


TestPlayer::TestPlayer(Vec2 pos_in=Vec2(0.0,0.0), Color color_in = WHITE)
{
    position = pos_in;
    color = color_in;
}
