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

    void setLength(float side_l);
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

// Client file

int main () {
  Rectangle box1; // box1 is defined as an object of Rectangle class
  Rectangle box2; // box2 is defined as another Rectangle class object

  box1.setLength(20); // This instruction has the object box1 calling
                      // the setLength member function
                      // which sets the member data length associated with box1
                      // to the value of 20

  box1.setWidth(5);

  box2.setLength(30.5); // This instruction has the object box2 calling
                        // the setLength member function
                        // which sets the member data length associated with box2
                        // to the value of 30.5

  box2.setWidth(8.5);

  cout << "The length of box1 is " << box1.getLength() << endl;
  cout << "The width of box1 is " << box1.getWidth() << endl;
  cout << "The area of box1 is " << box1.findArea() << endl;
  cout << "The perimeter of box1 is " << box1.findPerimeter() << endl;

  cout << "The length of box2 is " << box2.getLength() << endl;
  cout << "The width of box2 is " << box2.getWidth() << endl;
  cout << "The area of box2 is " << box2.findArea() << endl;
  cout << "The perimeter of box2 is " << box2.findPerimeter() << endl;

  return 0;
}

// Implementation file
void Rectangle::setLength (float side_l) {
  length = side_l;
}

void Rectangle::setWidth (float side_w) {
  width = side_w;
}

float Rectangle::getLength () {
  return length;
}

float Rectangle::getWidth () {
  return width;
}

double Rectangle::findArea () {
  return length * width;
}

double Rectangle::findPerimeter () {
  return ((2 * length) + (2 * width));
}