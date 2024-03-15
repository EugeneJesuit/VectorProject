//17.5.Практическая работа с массивами данных и преобразованием типов данных

#include <iostream>
#include <cmath>

using namespace std;

class Vector
{
private:
	double x = 0;
	double y = 0;
	double z = 0;

public:
	Vector()
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}

	void Show()
	{
		cout << x << " " << y << " " << z << endl;
	}

	void Length()
	{
		double l = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
		cout << "The length of vector {" << x << ", " << y << ", " << z << "} is: " << l << endl;
	}
};


int main()
{
	double x, y, z;
	
	cout << "Enter x, y, z coordinates for the vector, to calculate its length." << endl;
	cout << "Enter x: "; cin >> x;
	cout << "Enter y: "; cin >> y;
	cout << "Enter z: "; cin >> z;
	cout << endl;
	
	Vector v(x, y, z);
	v.Length();

	return 0;
}
