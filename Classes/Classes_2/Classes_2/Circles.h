#pragma once
#include<iostream>
using namespace std;

class Circle
{
	private:
		float radius;
	
		//intialize functions	
	public:
		float Area();
		float getradius();
		void setradius(float a);
		float Diameter();
		float Circumference();
};
