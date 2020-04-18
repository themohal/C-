



 
/*Write a C++ program to sort given numbers in descending order*/
#include<iostream>
using namespace std;

	int main()
{
	int a[99],num,i,j,n;
	
	
	do
	{
		cout<<"enter number of elements"<<endl;
	cin>>n;
	cout<<"enter the elements one by one"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[j]>a[i])
{
num=a[j];
a[j]=a[i];
a[i]=num;
}
}

cout<<"the sorted array in descending order is="<<endl;
	for(int i=0;i<n;i++)
		cout<<endl<<a[i]<<endl;
}	
	
	}

	while(n!=0);
	
	
		
	

	
return 0;
}



