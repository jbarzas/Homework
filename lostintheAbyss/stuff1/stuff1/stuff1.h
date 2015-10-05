#pragma once


class Point2D
{
public:
	float x;
	float y;

	Point2D operator+(Point2D &other)
	{
		Point2D temp;
		
		temp.x = other.x + this->x;
		temp.y = other.y + this->y;

		return temp;
	}

};