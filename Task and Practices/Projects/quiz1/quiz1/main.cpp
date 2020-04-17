 #include<iostream>
using namespace std;
#include<conio.h>

class vehicle
{
private:
	
	int modelnumber;
	char color[10];
	
public:
	
	
		void get_input()
		{
			
			cout<<"Enter Model nummber=";
			cin>>modelnumber;
			cout<<"Enter Color=";
			cin>>color;
		}
	void disp()
	{
		cout<<"Model Number Is:"<<modelnumber ;
		cout<<endl;
		cout<<"Color Is:"<<color;
		cout<<endl;
		
	}	
};
	int main()
	{
		vehicle s1;
		s1.get_input();
	s1.disp();
	getch();
	
	}		