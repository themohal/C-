#include<iostream>
using namespace std;
class tabfact
{
public:
	int num,n,j,k;
	void message1()
	{
		cout<<"Welcome"<<endl;
	cout<<"Press 1 for table"<<endl;
	cout<<"Press 2 for factorial"<<endl;
	cin>>num;
	}
	void tab()
	{
	cout<<"Enter number for table=";
	cin>>n;
	for(int i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
	}
	void fact()
	{
		k=1;
		cout<<"Enter number for factorial=";
	cin>>j;
	for(int l=1;l<=j;l++)
	{
		
		k=k*l;	
	}
	cout<<"factorial is="<<k<<endl;
	}
};

int main()
{
	tabfact a;
	a.message1();
	if(a.num==1)
	{
	a.tab();
	}
	else if(a.num==2)
	{
		a.fact();
	}
	
return 0;
}