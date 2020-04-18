



 
/*Write a C++ program to sort given numbers in descending order*/
#include<iostream>
using namespace std;

#include<conio.h>
#include<math.h>
	void main()
{
	int a[20],i,j,temp,n;
	
	cout<<"enter number of elements"<<endl;
	cin>>n;cout<<"enter the elements one by one"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
	{
		if(a[j+1]<a[j])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		}
		}
	}
	cout<<"the sorted array in ascending order is";
	for(i=0;i<n;i++)
		cout<<endl<<a[i];
getch();
}

