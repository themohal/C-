//******* STRUCTURE *****************

#include<iostream>
using namespace std;
struct vehicle
{
	int year, capacity;
	char make[10], color[8];
};

int main()
{ 
  
vehicle car1, car2, x, y, mno, abc[10];
	cout<<"Enter Make for car1: ";
	cin >> car1.make;
	cout<<"Enter Year of car 1 : ";
	cin >> car1.year;
	cout<<"Engine Capacity of car 1: ";
	cin >> car1.capacity;
	cout<<"Color of car 1: ";
	cin >> car1.color;

	cout<< car1.make <<" Specification:"<<endl;
	cout<<car1.year <<", " << car1.capacity <<", " << car1.color << endl;
	return 0;
}

/*
//******* OBJECTS and CLASSES *********
#include<iostream>
using namespace std;
class vehicle
{
public:
	int year, capacity;
	char make[10], color[8];
};

int main()
{
	vehicle car1, car2;
	cout<<"Enter Make for car1: ";
	cin >> car1.make;
	cout<<"Enter Year of car 1 : ";
	cin >> car1.year;
	cout<<"Engine Capacity of car 1: ";
	cin >> car1.capacity;
	cout<<"Color of car 1: ";
	cin >> car1.color;

	cout<< car1.make <<" Specification:"<<endl;
	cout<<car1.year <<", " << car1.capacity <<", " << car1.color << endl;
	return 0;
}
*/
