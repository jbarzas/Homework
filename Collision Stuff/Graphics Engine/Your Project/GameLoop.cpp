#include "GameLoop.h"

int circle1x = 500;
int circle1y = 400;

int circle2x = 500;
int circle2y = 200;

float rectangle1x = 200;
float rectangle1y = 350;

float rectangle2x = 200;
float rectangle2y = 150;

void GameLoop::Loop()
{
	

	while (m_bRunning)
	{
		SDL_Event sdlEvent; // Will hold the next event to be parsed

		while (m_bRunning)
		{
			// Events get called one at a time, so if multiple things happen in one frame, they get parsed individually through 'SDL_PollEvent'
			// The next event to parse gets stored into 'sdlEvent', and then passed to the 'EventHandler' class which will call it's appropriate function here
			// 'SDL_PollEvent' returns 0 when there are no more events to parse
			while (SDL_PollEvent(&sdlEvent))
			{
				// Calls the redefined event function for the EventHandler class
				// Refer to its header file and cpp for more information on what each inherited function is capable of
				// and its syntax
				OnEvent(sdlEvent);
			}

			Draw();

			if ((rectangle1x + 100) == rectangle2x || (rectangle1x - 100) == rectangle2x)
			{
				cout << "Collision Detected on the X Axis!" << endl;
			}

			if ((rectangle1y + 100) == rectangle2y || (rectangle1y - 100) == rectangle2y)
			{
				cout << "Collision Detected on the Y Axis!" << endl;
			}

			Graphics::Flip(); // Required to update the window with all the newly drawn content
		}
	}
}

void GameLoop::Update()
{

}

void GameLoop::LateUpdate()
{
	
}

void GameLoop::Draw()
{
	// Objects are drawn in a painter's layer fashion meaning the first object drawn is on the bottom, and the last one drawn is on the top
	// just like a painter would paint onto a canvas

	Graphics::DrawCircle({ circle1x, circle1y }, 50, 20, { 0, 0, 255, 255 });

	Graphics::DrawCircle({ circle2x, circle2y }, 50, 20, { 255, 0, 0, 255 });

	Graphics::DrawRect({ rectangle1x, rectangle1y }, { 100, 100 }, { 0, 0, 255, 255 });

	Graphics::DrawRect({ rectangle2x, rectangle2y }, { 100, 100 }, { 255, 0, 0, 255 });
}

void GameLoop::OnKeyDown(const SDL_Keycode ac_sdlSym, const Uint16 ac_uiMod, const SDL_Scancode ac_sdlScancode)
{
	
	switch (ac_sdlSym)
	{
	case SDLK_w: circle1y -= 10; break;
	case SDLK_s: circle1y += 10; break;
	case SDLK_a: circle1x -= 10; break;
	case SDLK_d: circle1x += 10; break;
	case SDLK_e: cout << "Circle 1 is at: " << "( " << circle1x << ", " << circle1y << " )" << endl; break;

	case SDLK_i: rectangle1y -= 10; break;
	case SDLK_k: rectangle1y += 10; break;
	case SDLK_j: rectangle1x -= 10; break;
	case SDLK_l: rectangle1x += 10; break;
	case SDLK_o: cout << "Rectangle 1 is at: " << "( " << rectangle1x << ", " << rectangle1y << " )" << endl; break;
	
	case SDLK_SPACE: Graphics::DrawLine({ 100, 200 }, { 100, 300 }, { 255, 255, 255, 255 }); break;

	case SDLK_ESCAPE: m_bRunning = false; break; // End the loop

	default: printf("%s\n",SDL_GetKeyName(ac_sdlSym)); break;
	}
}

void GameLoop::OnKeyUp(const SDL_Keycode ac_sdlSym, const Uint16 ac_uiMod, const SDL_Scancode ac_sdlScancode)
{
	switch (ac_sdlSym)
	{
	default: break;
	}
}

void GameLoop::OnExit()
{
	m_bRunning = false; // End the loop
}

GameLoop::GameLoop()
{
	m_bRunning = true;
}

GameLoop::~GameLoop()
{

}