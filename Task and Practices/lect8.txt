#include<iostream>
using namespace std;
class shapes
{
private:
	int side1, side2, radius;
	float base, height;
public:
	shapes(): side1(10)
	{}
	shapes(int a): side1(a)
	{}
	shapes(int b, int c): side1(b), side2(c)
	{}
	void area_square()
	{
		cout<<"Area of square is = "<<side2*side2<<endl;
	}
	void area_triangle()
	{
	}
	void area_rectangle()
	{
	}
};
void main()
{
	shapes s1;
	shapes s2(8);
	shapes s3(4, 7);
	s3.area_square();
	s1.area_square();
	s2.area_square();
}