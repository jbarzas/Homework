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
	Vector2D<T> add(Vector2D<T>);
	Vector2D<T> sub(Vector2D<T>);
	T mag();
	Vector2D<T> normalize();
	void print();
};

// 2D Vector constructor
template <typename T>
Vector2D<T>::Vector2D(T a, T b)
{
	x = a;
	y = b;
};

// Addition of two 2D vectors.
template <typename T>
Vector2D<T> Vector2D<T>::add(Vector2D<T> b)
{
	Vector2D<T> temp({ (this->x + b.x), (this->y + b.y) });

	return temp;
}

// Subtraction of two 2D vectors.
template <typename T>
Vector2D<T> Vector2D<T>::sub(Vector2D<T> b)
{
	Vector2D<T> temp({ (this->x - b.x), (this->y - b.y) });

	return temp;
}

// Magnitude of a 2D Vector
template <typename T>
T Vector2D<T>::mag()
{
	T mag = sqrt((this->x * this->x) + (this->y * this->y));

	return mag;
}

// Normalize a 2D Vector
template <typename T>
Vector2D<T> Vector2D<T>::normalize()
{
	T mag = sqrt((this-> x * this-> x) + (this-> y * this-> y));

	Vector2D<T> temp( { (this-> x / mag), (this-> y / mag) } );

	return temp;
}

// Print the value of a 2D Vector
template <typename T>
void Vector2D<T>::print()
{
	cout << "2D vector: " << "x = " << this->x << ", " << "y = " << this->y << endl;
	cout << "\n";
}

// 3D vector support
template <typename T>
class Vector3D
{
public:
	T x;
	T y;
	T z;

	Vector3D(T a, T b, T c);
	Vector3D<T> add(Vector3D<T>);
	Vector3D<T> sub(Vector3D<T>);
	T mag();
	Vector3D<T> normalize();
	void print();
};

// Addition of two 3D vectors.
template<typename T>
Vector3D<T> Vector3D<T>::add(Vector3D<T> b)
{
	Vector3D<T> temp({ (this->x + b.x), (this->y + b.y), (this->z + b.z) });

	return temp;
}

// Subtraction of two 3D vectors.
template<typename T>
Vector3D<T> Vector3D<T>::sub(Vector3D<T> b)
{
	Vector3D<T> temp({ (this->x - b.x), (this->y - b.y), (this->z - b.z) });

	return temp;
}

// Magnitude of a 3D Vector
template <typename T>
T Vector3D<T>::mag()
{
	T mag = sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z));

	return mag;
}

// Normalize a 3D Vector
template <typename T>
Vector3D<T> Vector3D<T>::normalize()
{
	T mag = sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z));

	Vector3D<T> temp({ (this->x / mag), (this->y / mag), (this->z / mag) });

	return temp;
}

// Print the value of a 3D Vector
template <typename T>
void Vector3D<T>::print()
{
	cout << "3D vector: " << "x = " << this->x << ", " << "y = " << this->y << ", " << "z = " << this->z << endl;
	cout << "\n";
}

// 3D vector Constructor
template <typename T>
Vector3D<T>::Vector3D(T a, T b, T c)
{
	x = a;
	y = b;
	z = c;
}

#endif