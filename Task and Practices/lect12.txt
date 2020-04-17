// derived classes
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b;}
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
      { return 3.141*(width * width); }
 };
  class areasquare: public Polygon {
  public:
    int area ()
      { return width * width; }
 };
int main () {
  Rectangle rect;
  Triangle trgl;
  areacircle ac;
  areasquare aq;
  rect.set_values (4,5);
  trgl.set_values (4,5);
  ac.set_values (4,5);
  aq.set_values (4,5);
  cout << "Area of Rectangle is = " << rect.area() << endl;
  cout << "Area of Triangle is = " << trgl.area() << endl;
  cout<<  "Area of circle is= " <<ac.area()<<endl;
  cout<<  "Area of Square is =" <<aq.area()<<endl;
  return 0;
}

