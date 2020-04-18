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
	float marks[5];
	float s[3];
	float av;
public:
	
	void get_data1()
	{
		cout<<"Enter Marks For Semester 1:"<<endl;
		cout<<"Subject 1:"<<endl;
		cin>>marks[0];
		cout<<"Subject 2:"<<endl;
		cin>>marks[1];
		cout<<"Subject 3:"<<endl;
		cin>>marks[2];
		cout<<"Subject 4:"<<endl;
		cin>>marks[3];
		cout<<"Subject 5:"<<endl;
		cin>>marks[4];
	}
	void get_data2()
	{
		cout<<"Enter Marks For Semester 2:"<<endl;
		cout<<"Subject 1:"<<endl;
		cin>>marks[0];
		cout<<"Subject 2:"<<endl;
		cin>>marks[1];
		cout<<"Subject 3:"<<endl;
		cin>>marks[2];
		cout<<"Subject 4:"<<endl;
		cin>>marks[3];
		cout<<"Subject 5:"<<endl;
		cin>>marks[4];
	}
	void get_data3()
	{
		cout<<"Enter Marks For Semester 3:"<<endl;
		cout<<"Subject 1:"<<endl;
		cin>>marks[0];
		cout<<"Subject 2:"<<endl;
		cin>>marks[1];
		cout<<"Subject 3:"<<endl;
		cin>>marks[2];
		cout<<"Subject 4:"<<endl;
		cin>>marks[3];
		cout<<"Subject 5:"<<endl;
		cin>>marks[4];
	}


	
void average_marks(average,average,average);

};
void average::average_marks(average d1,average d2,average d3)
{
	
	s[0] = d1.marks[0]+d1.marks[1]+d1.marks[2]+d1.marks[3]+d1.marks[4];
	s[1] = d2.marks[0]+d2.marks[1]+d2.marks[2]+d2.marks[3]+d2.marks[4]; 
	s[2] = d3.marks[0]+d3.marks[1]+d3.marks[2]+d3.marks[3]+d3.marks[4];
	av = (s[0] + s[1] + s[2])/15;
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