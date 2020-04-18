#include<iostream>
using namespace std;
class integer
{
	
public:
	float k;
	void factorial()
	{
		
		int fact=1;
		for(int i=1;i<=k;i++)
			fact=fact*i;
			 cout<<"factorial is="<<fact<<endl;
	}
	void square()
	{
		cout<<"square is="<<k*k<<endl;
	}
};



void main()
{
	
	char choice;
	integer s1;
	cout<<"Enter a number=";
	cin>>s1.k;
	cout<<"Enter Your Choice For Factorial press F and for Square Press S:";
	cin>>choice;
	if(choice=='s'||choice=='S')
		s1.square();
	else if(choice=='f'||choice=='F')
		s1.factorial();
	else
		cout<<"Wrong Choice"<<endl;
}
	
