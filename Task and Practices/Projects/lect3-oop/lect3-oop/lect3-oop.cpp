#include<iostream>
using namespace std;
#include<conio.h>
class counter
{
private:
unsigned int count;
public:
	counter():count(0)//constructor

	{}//empty body
	void inc_count()
	{count++;}
	int get_count()//return count
		{return count;}
};
int main()
{
	counter c1,c2;
	cout<<"\nc1="<<c1.get_count();
	cout<<"\nc2="<<c2.get_count();
	c1.inc_count();
	c2.inc_count();
	c2.inc_count();
	cout<<"\nc1="<<c1.get_count();
	cout<<"\nc2="<<c2.get_count();
	cout<<endl;
	
	getch();
}
