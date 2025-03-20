#include "Game.h"
#include <raylib.h>
#include <assert.h>
#include <iostream>
#include "Vec2.h"
#include "TestPlayer.h"
using namespace std;

Game::Game(int width, int height, int fps, string title)
{
	assert(!GetWindowHandle());
	SetTargetFPS(fps);
	player = TestPlayer(Vec2(0.0,0.0), WHITE);
	InitWindow(width, height, title.c_str());
}

Game::~Game() noexcept
{
	assert(GetWindowHandle());
	CloseWindow();
}

bool Game::GameShouldClose() const
{
	return WindowShouldClose();
}

void Game::Tick()
{
	BeginDrawing();
	Update();
	Draw();
	EndDrawing();
}

void Game::Draw()
{
    DrawRectangle((int)player.position.x, (int)player.position.y, 1, 1, player.color);
	ClearBackground(BLACK);
}

void Game::Update()
{
    player.position.x++;
}
