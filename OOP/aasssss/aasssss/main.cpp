// derived classes
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height,r;
  public:
    void set_values ()
      { 
		  cout<<"Enter width="<<endl;
		  cin>>width;
		  cout<<"Enter Hieght="<<endl;
		  cin>>height;
	}
 };

class Rectangle: public Polygon {
  public:
    int area ()
      { return width * height; }
 };

class Triangle: public Polygon {
  public:
    int area ()
      { return width * height / 2; }
  };
  class areacircle: public Polygon {
  public:
    int area ()
      { 
		  return 3.141*(r * r);
	}
	void setareaofcir()
	{
	cout<<"Enter Values for area of circle"<<endl;
		cout<<"Enter Radius=";
		cin>>r;
	}
 };
  class areasquare: public Polygon {
  public:
    int area ()
      { return r * r; }
	void setareaofsqr()
	{
	cout<<"Enter Values for area of Square"<<endl;
		cout<<"Enter Radius=";
		cin>>r;
	}
 };
int main () {
  Rectangle rect;
  Triangle trgl;
  areacircle ac;
  areasquare aq;
  rect.set_values ();
  trgl.set_values ();
  ac.setareaofcir ();
  aq.setareaofsqr();
  cout << "Area of Rectangle is = " << rect.area() << endl;
  cout << "Area of Triangle is = " << trgl.area() << endl;
  cout<<  "Area of Circle is= " <<ac.area()<<endl;
  cout<<  "Area of Square is =" <<aq.area()<<endl;
  return 0;
}

