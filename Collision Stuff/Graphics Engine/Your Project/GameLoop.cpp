#include "GameLoop.h"
#include <time.h>

// Rectangles
// 2D Vector for the center point of rectangle1
System::Point2D<float> rectangle1 = { 200, 350 };

// Min X and Y values for rectangle1
System::Point2D<float> rec1Min = { 0, 0 };

// Max X and Y values for rectangle1
System::Point2D<float> rec1Max = { 0, 0 };

// 2D Vector for the center point of rectangle2
System::Point2D<float> rectangle2 = { 200, 150 };

// Min X and Y values for rectangle2
System::Point2D<float> rec2Min = { (rectangle2.X - 50) , (rectangle2.Y + 50) };

// Max X and Y values for rectangle2
System::Point2D<float> rec2Max = { (rectangle2.X + 50) , (rectangle2.Y - 50) };

// Circles
// 2D Vector for the center point of circle1
System::Point2D<int> circle1 = { 500, 400 };

// Min X and Y values for circle1
System::Point2D<int> circle1Min = { (circle1.X - 50) , (circle1.Y + 50) };

// Max X and Y values for circle1
System::Point2D<int> circle1Max = { (circle1.X + 50) , (circle1.Y - 50) };

// 2D Vector for the center point of circle2
System::Point2D<int> circle2 = { 500, 200 };

// Min X and Y values for circle2
System::Point2D<int> circle2Min = { (circle2.X - 50) , (circle2.Y + 50) };

// Max X and Y values for circle2
System::Point2D<int> circle2Max = { (circle2.X + 50) , (circle2.Y - 50) };

bool Xcollision = false;

bool Ycollision = false;

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

			if (rec1Max.X > rec2Min.X && rec1Min.X < rec2Max.X)
			{
				Xcollision = true;
				//cout << "Collision Detected on the X Axis!" << endl;
				//cout << "rec1Max.X = " << rec1Max.X << endl;
				//cout << "rec2Min.X = " << rec2Min.X << endl;	
			}

			// tesing info
			cout << "rec1Min| " << "X: " << rec1Min.X << " Y: " << rec1Min.Y << "  rec1Max| " << "X: " << rec1Max.X << " Y: " << rec1Max.Y << endl;
			cout << "rec2Min| " << "X: " << rec2Min.X << " Y: " << rec2Min.Y << "  rec2Max| " << "X: " << rec2Max.X << " Y: " << rec2Max.Y << endl;
			cout << "" << endl;

			if (rec1Max.Y > rec2Min.Y && rec1Min.Y < rec2Max.Y)
			{
				Ycollision = true;
				cout << "Collision Detected on the Y Axis!" << endl;
			}

			if (Xcollision && Ycollision)
				cout << "Collision Detected! @" << clock() << endl;

			else
			{
				Xcollision = false;
				Ycollision = false;
			}

			/*if ((rectangle1.X + 100) == rectangle2.X || (rectangle1.X - 100) == rectangle2.X)
			{
				cout << "Collision Detected on the X Axis!" << endl;
			}

			if ((rectangle1.Y + 100) == rectangle2.Y || (rectangle1.Y - 100) == rectangle2.Y)
			{
				cout << "Collision Detected on the Y Axis!" << endl;
			}*/

			Graphics::Flip(); // Required to update the window with all the newly drawn content
		}
	}
}

void GameLoop::Draw()
{
	// Objects are drawn in a painter's layer fashion meaning the first object drawn is on the bottom, and the last one drawn is on the top
	// just like a painter would paint onto a canvas
	
	// Blue rectangle with controlled X and Y movement
	Graphics::DrawRect(rectangle1, { 100, 100 }, { 0, 0, 255, 255 });

	// Red static rectangle
	Graphics::DrawRect(rectangle2, { 100, 100 }, { 255, 0, 0, 255 });

	// Blue circle with controlled X and Y movement
	//Graphics::DrawCircle({ circle1.X, circle1.Y }, 50, 20, { 0, 0, 255, 255 });

	// Red static circle
	//Graphics::DrawCircle({ circle2.X, circle2.Y }, 50, 20, { 255, 0, 0, 255 });

	rec1Min.X = (rectangle1.X - 50);
	rec1Min.Y = (rectangle1.Y + 50);

	rec1Max.X = (rectangle1.X + 50);
	rec1Max.Y = (rectangle1.Y - 50);

	
}

void GameLoop::OnKeyDown(const SDL_Keycode ac_sdlSym, const Uint16 ac_uiMod, const SDL_Scancode ac_sdlScancode)
{
	switch (ac_sdlSym)
	{
	case SDLK_w: circle1.Y -= 10; break;
	case SDLK_s: circle1.Y += 10; break;
	case SDLK_a: circle1.X -= 10; break;
	case SDLK_d: circle1.X += 10; break;
	case SDLK_e: cout << "Circle 1 is at: " << "( " << circle1.X << ", " << circle1.Y << " )" << endl; break;

	case SDLK_i: rectangle1.Y -= 10; break;
	case SDLK_k: rectangle1.Y += 10; break;
	case SDLK_j: rectangle1.X -= 10; break;
	case SDLK_l: rectangle1.X += 10; break;
	case SDLK_o: cout << "Rectangle 1 is at: " << "( " << rectangle1.X << ", " << rectangle1.Y << " )" << "rectangle min: "<< rec1Min.X << ", " << rec1Min.Y << endl; break;
	
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