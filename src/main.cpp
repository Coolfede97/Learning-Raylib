#include <iostream>
#include <raylib.h>
#include "Game.h"
using namespace std;
int main() 
{
    Game game(1000,300, 60, "Title");
    while (!WindowShouldClose())
    {
        cout << "Hola" << endl;
        game.Tick();
    }
    return 0;
}