#include<iostream>
using namespace std;
class Polygon
{
protected:
	int width,height,radius;
public:
	Polygon():width(2),height(3),radius(6)
	{}
};
class rectangle:public Polygon
{
public:
	int area()
	{
		
		
		return width*height;
	}
};
class circla:public Polygon
{
public:
	int area()
	{
		return 3.141*radius*radius;
	}
};
int main()
{
	Polygon s;
	rectangle rect;
	circla cir;
	
	cout<<"Area of Rectangle is="<<rect.area()<<endl;
	cout<<"Area of Circle is="<<cir.area()<<endl;
	return 0;
}