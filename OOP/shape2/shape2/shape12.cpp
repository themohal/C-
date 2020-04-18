//Quiz#3
#include<iostream>
using namespace std;
class shape
{
    private:
float radius,length,width;
public:
	void circle()

	{
		cout<<"Enter Radius=";
		cin>>radius;
		cout<<"area of circle is="<<3.141*radius*radius<<endl;
	}
	void rectangle()
	{
		cout<<"Enter length=";
		cin>>length;
		cout<<"Enter Width=";
		cin>>width;
		cout<<"Area of rectangle is="<<length*width;
	}
};
	int main()
	{
		shape s1;

		s1.circle();
		s1.rectangle();
		return 0;
		
	}
