#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
using namespace std;

// 2D vector support
template <typename T>
class Vector2D
{
public:
	T x;
	T y;

	Vector2D(T a, T b);
};

// 2D Vector constructor
template <typename T>
Vector2D<T>::Vector2D(T a, T b)
{
	x = a;
	y = b;
};

// 3D vector support
template <typename T>
class Vector3D
{
public:
	T x;
	T y;
	T z;

	Vector3D(T a, T b, T c);
};

// 3D vector Constructor
template <typename T>
Vector3D<T>::Vector3D(T a, T b, T c)
{
	x = a;
	y = b;
	z = c;
}

// addition of two 2D Vectors
template <typename T>
Vector2D<T> add2D(Vector2D<T> a, Vector2D<T> b, Vector2D<T> c)
{
	c.x = a.x + b.x;
	c.y = a.y + b.y;

	return c;
}

// addition of two 3D Vectors
template <typename T>
Vector3D<T> add3D(Vector3D<T> a, Vector3D<T> b, Vector3D<T> c)
{
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	c.z = a.z + b.z;

	return c;
}

// subtraction of two 2D Vectors
template <typename T>
Vector2D<T> sub2D(Vector2D<T> a, Vector2D<T> b, Vector2D<T> c)
{
	c.x = a.x - b.x;
	c.y = a.y - b.y;

	return c;
}

// subtraction of two 3D Vectors
template <typename T>
Vector3D<T> sub3D(Vector3D<T> a, Vector3D<T> b, Vector3D<T> c)
{
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	c.z = a.z - b.z;

	return c;
}

// magnitude of a 2D Vector
template <typename T>
T mag2D(Vector2D<T> a)
{
	T mag = sqrt((a.x * a.x) + (a.y * a.y));

	return mag;
}

// magnitude of a 3D Vector
template <typename T>
T mag3D(Vector3D<T> a)
{
	T mag = sqrt((a.x * a.x) + (a.y * a.y) + (a.z * a.z));

	return mag;
}

// normalise a 2D Vector
template <typename T>
Vector2D<T> norm2D(Vector2D<T> a, Vector2D<T> b, T mag)
{	
	Vector2D<T> temp({ a.x / mag, a.y / mag });

	b = temp;
	
	return b;
}

#endif