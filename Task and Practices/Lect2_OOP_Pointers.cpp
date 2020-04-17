#include<iostream>
using namespace std;
void main()
{
	int x = 100;
	char y = 'A';
	float z = 10.56;
	cout<<"Address of x = " << &x << endl;
	cout<<"Address of y = " << &y << endl;
	cout<<"Address of z = " << &z << endl;
	
	int *a;
	char *b;
	float *c;

	a = &x;
	b = &y;
	c = &z;

	cout<<"The value stored at address a = " << *a << endl;
	cout<<"The value stored at address b = " << *b << endl;
	cout<<"The value stored at address c = " << *c << endl;

}