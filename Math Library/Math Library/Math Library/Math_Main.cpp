#include "Math_Header.h"

void main()
{
	
	// addition of 2D and 3D Vectors.
	Vector2D<int> vector2D1(6, 12);
	Vector2D<int> vector2D2(3, 1);

	Vector2D<int> sum2D(0, 0);
	sum2D = add2D(vector2D1, vector2D2, sum2D);

	cout << "Addition of two 2D Vectors: " << sum2D.x << ", "<< sum2D.y << endl;

	Vector3D<int> vector3D1(6, 12, 4);
	Vector3D<int> vector3D2(3, 1, 20);

	Vector3D<int> sum3D(0, 0, 0);
	sum3D = add3D(vector3D1, vector3D2, sum3D);

	cout << "Addition of two 3D Vectors: " << sum3D.x << ", " << sum3D.y << ", " << sum3D.z << endl;
	cout << "\n";

	// subtraction of 2D and 3D Vectors.
	Vector2D<int> vector2D3(6, 12);
	Vector2D<int> vector2D4(3, 1);

	Vector2D<int> dif2D(0, 0);
	dif2D = sub2D(vector2D3, vector2D4, dif2D);

	cout << "Subtraction of two 2D Vectors: " << dif2D.x << ", " << dif2D.y << endl;

	Vector3D<int> vector3D3(6, 12, 4);
	Vector3D<int> vector3D4(3, 1, 20);

	Vector3D<int> dif3D(0, 0, 0);
	dif3D = sub3D(vector3D3, vector3D4, dif3D);

	cout << "Subtraction of two 3D Vectors: " << dif3D.x << ", " << dif3D.y << ", " << dif3D.z << endl;
	cout << "\n";
	
	// magnitude of 2D and 3D Vectors.
	Vector2D<int> vector2D5(6, 12);

	float mag1 = mag2D(vector2D5);

	cout << "Magnitude of a 2D Vector: " << mag1 << endl;
	
	Vector3D<int> vector3D5(6, 12, 4);

	float mag2 = mag3D(vector3D5);

	cout << "Magnitude of a 3D Vector: " << mag2 << endl;
	cout << "\n";
	
	// normalizing of 2D and 3D Vectors.
	Vector2D<int> vector2D6(6, 12);

	cout << "Normalising a 2D Vector: " << vector2D6.x << ", " << vector2D6.y << endl;
	
	system("pause");
}