#include <iostream>
using namespace std;
#include<conio.h> 
class Counter
{
private:
unsigned int count; //count
public:
Counter() : count(10) //constructor //count() is fuction counter() definition u can re write it as counter(){count=0;}
{
	//empty body 
}
int inc_count() //increment count
{ count++;
return count;
}
//int get_count() //return count
//{ 
	//return count;
//}
};
////////////////////////////////////////////////////////////////
int main()
	{
Counter c1, c2; //define and initialize
cout << "\nc1 = " << c1.inc_count(); //display
cout << "\nc2 = " << c2.inc_count();
c1.inc_count(); //increment c1
c2.inc_count(); //increment c2
c2.inc_count(); //increment c2
c2.inc_count(); //increment c2
cout << "\nc1 = " << c1.inc_count(); //display again
cout << "\nc2 = " << c2.inc_count();
cout << endl;
getch();
}