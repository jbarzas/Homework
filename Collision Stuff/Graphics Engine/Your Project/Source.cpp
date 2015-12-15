//////////////////////////////////////////////////////////////
// Project: Student Graphics Engine
// Author: Ben Odom
//////////////////////////////////////////////////////////////

#include "GameLoop.h"

// including math library
#include "Math_Header.h"

int wmain()
{
	// testing math lib
	Vector2D<float> vector2d(6,12);

	// printing vector made from math library
	vector2d.print();
	
	Graphics::Init();

	Graphics::NewWindow({ 800, 600 }, false, { 800, 600 }, "Graphics Engine");

	GameLoop oGameLoop;

	oGameLoop.Loop();

	Graphics::Quit();

	return 0;
}