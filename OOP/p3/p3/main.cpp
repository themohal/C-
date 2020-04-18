#include<iostream>
using namespace std;
class cal
{
public:
	int n,factorial,res,k;
	void fact()
	{
		factorial = 1;
		for(int i = 1; i <=n;i++) 
        factorial=factorial*i;
    cout << "Factorial of " << n << " = " << factorial<<endl;
		
	}
	void sq()
	{
		res=n*n;
		cout << "Square of " << n << " = " <<res <<endl;
	}
	void check()
	{
		cout<<"Enter Integer=";
		cin>>n;
		cout<<"Enter 1 for Factorial And 2 For Square=";
		cin>>k;
	}
};
int main()
{
	cal s;
	s.check();
	if(s.k==1)
		s.fact();
	else
		s.sq();
	return 0;
}