#include<iostream>
using namespace std;
class inc
{
private:
	int a,b,c,d;
public:
	int e,f,g,h;
	inc():a(2),b(3),c(4),d(5)
	{}
	int ret()
	{
		return e=a,f=b,g=c,h=d; 
	}
	//or method 2
	//int e()
	//{
		//return a; 
	//}
	//int f()
	//{
		//return b; 
	//}
	//int g()
	//{
		//return c; 
	//}
	//int h()
	//{
		//return d; 
	//}
	void operator ++()
	{
		a++;
		b++;
		c++;
		d++;
	}
	
	
};
int main()
{
	inc s;
	s++;
	s.ret();
	cout<<"Values Are ="<<s.e<<","<<s.f<<","<<s.g<<","<<s.h<<endl; //drop braces () e,f,g,h to use 2nd method
	return 0;
}
	