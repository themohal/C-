/*
#include<iostream>
using namespace std;

class Distance //English Distance class
{
private:
int feet_l, feet_w;
float inches_l, inches_w;
public:
//void setdist(int ft, float in) //set Distance to args
//{ 
	//feet = ft; 
	//inches = in; 
//}
void getdist() //get length from user
{
cout << "\nRoom length (feet): "; cin >> feet_l;
cout << "Room length (inches) "; cin >> inches_l;
}
void getwidth() //get length from user
{
cout << "\nRoom width (feet): "; cin >> feet_w;
cout << "Room width (inches) "; cin >> inches_w;
}
void showdist() //display distance
{ 
	cout<<"Dimensions of the room:"<<endl;
	cout<<"Room length = "<<feet_l<<"\'"<<inches_l<<"\''"<<endl;
	cout<<"Room width = " << feet_w<<"\'"<<inches_w<<"\''"<<endl;
//	cout << feet << "\''-" << inches << "\''"; }

};
int main()
{
Distance dist2; //define two lengths
//dist1.setdist(11, 6.25); //set dist1

//dist2.getdist(); //get dist2 from user
//dist2.getwidth();

//display lengths
//cout << "\ndist1 = "; dist1.showdist();

//dist2.showdist();
//cout << endl;

return 0;
}
*/
//******************** CONSTRUCTOR *******************
//*
#include <iostream>
using namespace std;
class Counter
{
private:
unsigned int count; //count
public:
Counter() : count(10) //constructor
{ //empty body 
}
void inc_count() //increment count
{ count++; }
int get_count() //return count
{ return count; }
};
////////////////////////////////////////////////////////////////
int main()
	{
Counter c1, c2; //define and initialize
cout << "\nc1 = " << c1.get_count(); //display
cout << "\nc2 = " << c2.get_count();
c1.inc_count(); //increment c1
c2.inc_count(); //increment c2
c2.inc_count(); //increment c2
c2.inc_count(); //increment c2
cout << "\nc1 = " << c1.get_count(); //display again
cout << "\nc2 = " << c2.get_count();
cout << endl;
return 0;
}
//*/