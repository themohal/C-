/*Write a C++ program to sort given numbers in descending order using do while*/
#include<iostream>
using namespace std;
	int main()
{
	int a[100],i,j,num,n=0;
	
	do{
		if(a[n++]==0)
		break;
		cout<<"enter the elements one by one"<<endl;
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
}		 		
}	
	
	while(cin>>a[n]) ;
	 
	cout<<"the sorted array in descending order is:"<<endl;
	for(int b=0;b<n-2;b++)
		cout<<endl<<a[b]<<endl;
	 
	
return 0;
}