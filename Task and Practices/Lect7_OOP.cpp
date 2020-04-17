#include<iostream>
using namespace std;
class shape
{
private:
	int side1, side2, radius;
public:
	void area_square()
	{
		cout<<"Measurement of side of square (cm) = ";
		cin>>side1;
		cout<<"Area of square is = " << side1 * side1 << " square cm" << endl;
	}
	void area_circle()
	{
	}
	void area_rectangle()
	{
	}
	void area_triangle()
	{
	}
};
void main()
{
	shape s1;
	s1.area_square();
		
}
