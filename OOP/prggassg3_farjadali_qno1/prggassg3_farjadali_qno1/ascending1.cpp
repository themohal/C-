



 
/*Write a C++ program to sort given numbers in descending order*/
#include<iostream>
using namespace std;

#include<conio.h>
#include<math.h>
	void main()
{
	int a[20],i,j,temp,n;
	
	cout<<"enter number of elements"<<endl;
	cin>>n;
	cout<<"enter the elements one by one"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
	{
		temp=a[j];
		a[j]=a[i];
		a[j]=temp;
		}
		}
	}
	cout<<"the sorted array in ascending order is";
	for(int b=0;b<n;b++)
		cout<<endl<<a[b];
getch();
}
