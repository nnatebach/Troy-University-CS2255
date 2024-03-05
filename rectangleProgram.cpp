// this program shows
// how a rectangle class can be defined in C++

#include <iostream>
using namespace std;

// Class declaration (header file)

class Rectangle // Rectangle is the name of the class (its identity)
{
  public:
    // The following are labeled as public
    // Usually member functions are defined public
    // and are to describe what the class can do

    void setLength(float side_1);
    // This member function receives
    // the length of the Rectangle object that calls it
    // and places that value in the member data called length.

    void setWidth(float side_w);
    // This member function receives
    // the width of the Rectangle object that calls it
    // and places the value in the member data called width.

    float getLength();
    // This member function returns the width of
    // the Rectangle object that calls it

    float getWidth();
    // This member function returns the width of
    // the Rectangle object that calls it

    double findArea();
    // This member function finds the area of
    // the Rectangle object that calls it.

    double findPerimeter();
    // This member function finds the perimeter
    // of the Rectangle object that calls it

  private:

    // The following are labeled as private
    // Member data are usually declared private
    // so they can ONLY be accessed by functions that belong to the class.
    // Member data describe the attributes of the class

    float length;
    float width;
};