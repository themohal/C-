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
	float m1,m2,m3,m4,m5;
	float sum1, sum2, sum3;
	float av;
public:
	average(): m1(0),m2(0),m3(0),m4(0),m5(0) {}
	void get_data1()
	{
		cout<<"Enter Marks For Semester 1:"<<endl;
		cout<<"Subject 1:"<<endl;
		cin>>m1;
		cout<<"Subject 2:"<<endl;
		cin>>m2;
		cout<<"Subject 3:"<<endl;
		cin>>m3;
		cout<<"Subject 4:"<<endl;
		cin>>m4;
		cout<<"Subject 5:"<<endl;
		cin>>m5;
	}
	void get_data2()
	{
		cout<<"Enter Marks For Semester 2:"<<endl;
		cout<<"Subject 1:"<<endl;
		cin>>m1;
		cout<<"Subject 2:"<<endl;
		cin>>m2;
		cout<<"Subject 3:"<<endl;
		cin>>m3;
		cout<<"Subject 4:"<<endl;
		cin>>m4;
		cout<<"Subject 5:"<<endl;
		cin>>m5;
	}
	void get_data3()
	{
		cout<<"Enter Marks For Semester 3:"<<endl;
		cout<<"Subject 1:"<<endl;
		cin>>m1;
		cout<<"Subject 2:"<<endl;
		cin>>m2;
		cout<<"Subject 3:"<<endl;
		cin>>m3;
		cout<<"Subject 4:"<<endl;
		cin>>m4;
		cout<<"Subject 5:"<<endl;
		cin>>m5;
	}


	
void average_marks(average,average,average);

};
void average::average_marks(average d1,average d2,average d3)
{
	sum1 = d1.m1+d1.m2+d1.m3+d1.m4+d1.m5;
	sum2 = d2.m1+d2.m2+d2.m3+d2.m4+d2.m5; 
	sum3 = d3.m1+d3.m2+d3.m3+d3.m4+d3.m5;
	av = (sum1 + sum2 + sum3)/15;
	cout<<"Average Marks: "<<av<<endl;
	
}

void main()
{
	average s1,s2,s3,s4;
	s1.get_data1();
	s2.get_data2();
	s3.get_data3();
	s4.average_marks(s1,s2,s3);
}