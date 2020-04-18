#include<iostream>
using namespace std;
class shape
{
private:
	float m1,m2,area;
public:
	shape():m1(0),m2(0)        //m1,m2 are the measurements 
	{}
	shape(float bs,float he):m1(bs),m2(he)
	{}
	
	void area_triangle()
	{
		cout<<"Area of Triangle is="<<(m1*m2)/2<<endl;
	}
	void area_rectangle()
	{
		cout<<"Area of Rectangle is="<<m1*m2<<endl;
	}
	//void show()
	//{
		//cout<<"Value Of m1 is="<<m1<<endl;
		//cout<<"Value Of m2 is="<<m2<<endl;
	//}
};
int main()
{
	//shape s1;
	//s1.show();
	shape s2(2,2);  //2,2 values can be changed and passed to constructor  
	s2.area_triangle();  //funntion call for area of triangle
	shape s3(2,2);  //2,2 values can be changed and passed to constructor 
		s3.area_rectangle();  //fucntion call for area of recctangle
	return 0;
}
