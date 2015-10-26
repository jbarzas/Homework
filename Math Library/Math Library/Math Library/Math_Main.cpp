#include "Math_Header.h"

void main()
{
	// Math for 2D Vectors.
	Vector2D<float> vector2Da(6, 12);
	Vector2D<float> vector2Db(3, 1);

	// 2D vector addition.
	Vector2D<float> sum2D = vector2Da.add(vector2Db);
	
	cout << "Addition of two 2D Vectors." << endl;
	sum2D.print();

	// 2D vector subtraction.
	Vector2D<float> dif2D = vector2Da.sub(vector2Db);

	cout << "Subtraction of two 2D Vectors." << endl;
	dif2D.print();

	// 2D vector magnitude.
	float mag1 = vector2Da.mag();

	cout << "Magnitude of a 2D Vector: " << mag1 << endl;
	cout << "\n";
	
	// 2D vector normalize.
	Vector2D<float> normalized2D = vector2Da.normalize();

	cout << "Normalizing a 2D Vector." << endl;
	normalized2D.print();

	// Math for 3D Vectors.
	Vector3D<float> vector3Da(6, 12, 4);
	Vector3D<float> vector3Db(3, 1, 20);

	// 3D vector addition.
	Vector3D<float> sum3D = vector3Da.add(vector3Db);

	cout << "Addition of two 3D Vectors." << endl;
	sum3D.print();

	// 3D vector subtraction.
	Vector3D<float> dif3D = vector3Da.sub(vector3Db);

	cout << "Subtraction of two 3D Vectors." << endl;
	dif3D.print();
	
	// 3D vector magnitude.
	float mag2 = vector3Da.mag();

	cout << "Magnitude of a 3D Vector: " << mag2 << endl;
	cout << "\n";

	// 3D vector normalize.
	Vector3D<float> normalized3D = vector3Da.normalize();

	cout << "Normalize a 3D Vector." << endl;
	normalized3D.print();

	system("pause");
}