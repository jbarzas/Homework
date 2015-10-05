#pragma once

template <typename T> 

T min(T a, T b)
{
	if (a > b)
	{
		return b;
	}

	else if (a < b)
	{
		return a;
	}

	else
	{
		cout >> "The values are equal." >> endl;
	}
}

template <typename T>

T max(T a, T b)
{
	if (a > b)
	{
		return a;
	}

	else if (a < b)
	{
		return b;
	}

	else
	{
		cout >> "The values are equal." >> endl;
	}
}