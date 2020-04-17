/*
//*********** Ordinary Variables vs. CONST Variables **********
#include <iostream>
using namespace std;

class Counter
{
	private:
int count; //only one data item for all objects
//note: “declaration” only!
public:
Counter(): count(0) //increments count when object created
{ count++; }
int getcount() //returns count
{ return count; }
};
int main()
{
Counter c1, c2, c3; //create three objects
cout << "count is " << c1.getcount() << endl; //each object
cout << "count is " << c2.getcount() << endl; //sees the
cout << "count is " << c3.getcount() << endl; //same value
return 0;
}
*/
///////////////////////////////////////////////////////////
//******************* CONST Variable **********************
//*
#include <iostream>
using namespace std;

class Counter
{
	private:
static int count; //only one data item for all objects
//note: “declaration” only!
public:
Counter() //increments count when object created
{ count++; }
int getcount() //returns count
{ return count; }
};
//--------------------------------------------------------------
int Counter::count = 0; //*definition* of count
////////////////////////////////////////////////////////////////
int main()
{
Counter c1, c2, c3; //create three objects
cout << "count is " << c1.getcount() << endl; //each object
cout << "count is " << c2.getcount() << endl; //sees the
cout << "count is " << c3.getcount() << endl; //same value
return 0;
}
//*/
