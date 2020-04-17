#include<iostream>
#include<stdlib.h>
using namespace std;

class array 
{
	private:
			int a[10]={1,2,3,4,5,6,7,8,9,10};
			int choice,pos,value,n;
			public:
				void choiceagain()
				{
					if(choice==0)
					{
						system("cls");
					display();
					}
					else if(choice==1)
					{
					cout<<"Thanks for using";
				}
				}
void choicef()
{
	if (choice==1)
	{
	traverse();
	}
	else if(choice==2)
{
	insertion();
}
}
				void display()
				{
					cout<<"                         MAIN MENU\n";
					cout<<"             PRESS 1 FOR TRAVERSING THE ARRAY\n";
					cout<<"             PRESS 2 FOR INSERTING DATA INTO ARRAY\n";
					cout<<"ENTER YOUR CHOICE:";
					cin>>choice;
					choicef();
				}


void traverse()
{

	for(int i=0;i<10;i++)
	{
		cout<<"INDEX:"<<i<<" "<<"ElEMENT"<<"="<<a[i]<<endl;	
	}
		cout<<"PRESS 0 To GO BACK"<<endl;
		cout<<"PRESS 1 To EXIT"<<endl;
		cin>>choice;
	choiceagain();
}
void insertion()
{
	cout<<"Enter Number of elements in array\n";
	cin>>n;
	cout<<"Enter Elements of array\n";
	for(int m=0;m<n;m++)
	{
		cin>>a[m];
	}
	cout<<"elments in array are:";
	for(int w=0;w<n;w++)
	{
	cout<<" "<<a[w];
	}
	cout<<endl;
	cout<<"Enter the location where you wish to insert an element:[valid range 0-N+1]\n"; //where N is total number of elements
	 cin>>pos;  
cout<<"Enter the value to insert:\n";
	 cin>>value;  
	 for ( int j=n ; j>=pos ; j--)
	 {
	 a[j]= a[j-1];   
	 }
	  a[pos] = value; 
	  n=n+1;
	 cout<<"Resultant array is"<<endl;  
	for( int k= 0 ; k<n; k++ )
	{
	 cout<<" "<<a[k];
}
cout<<endl;
cout<<"PRESS 0 To GO BACK"<<endl;
		cout<<"PRESS 1 To EXIT"<<endl;
		cin>>choice;
	choiceagain();
	}
};


int main()
{
array a;
a.display();
return 0;
}
