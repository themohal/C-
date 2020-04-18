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
	int red()
	{
		return e=a,f=b,g=c,h=d; 
	}
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
	s.red();
	cout<<"Values Are ="<<s.e<<","<<s.f<<","<<s.g<<","<<s.h<<endl;
	return 0;
}
	