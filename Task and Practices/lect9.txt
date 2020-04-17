/*
#include<iostream>
using namespace std;
class Box
{
private:
	int length, width, height;
public:
	void volume()
	{
		cout<<"Enter length of box: ";
		cin>>length;
		cout<<"Enter width of box: ";
		cin>>width;
		cout<<"Enter height of box: ";
		cin>>height;
		cout<<"Volume of box is = "<<length*width*height<<endl;
	}
};
void main()
{
	Box b1;
	b1.volume();
}
*/
#include<iostream>
using namespace std;
class average
{
private:
	int m1,m2,m3,m4,m5;
	int sum1, sum2, sum3;
	float av;
public:
	average(): m1(0),m2(0),m3(0),m4(0),m5(0) {}
	average(int a,int b,int c,int d,int e): m1(a),m2(b),m3(c),m4(d),m5(e)
	{}
	void average_marks(average, average, average); // member function declaration
};
// member function definition
void average::average_marks(average s1, average s2, average s3)
{
	sum1 = s1.m1+s1.m2+s1.m3+s1.m4+s1.m5;
	sum2 = s2.m1+s2.m2+s2.m3+s2.m4+s2.m5; 
	sum3 = s3.m1+s3.m2+s3.m3+s3.m4+s3.m5;
	av = (sum1 + sum2 + sum3)/15;
	cout<<"Average Marks: "<<av<<endl;
}
void main()
{
	average semester1(80, 83,84,85,92);
	average semester2(81, 84,84,87,95);
	average semester3(82, 85,86,89,97);
	average ss;
	ss.average_marks(semester1, semester2, semester3);
}