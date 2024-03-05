#include <iostream>

using namespace std;

class Rectangle {
  public:
    // Constructor allowing a user to input the length and width
    Rectangle(float side_l, float side_w);
    Rectangle(); // default constructor
    ~Rectangle(); // destructor
  
  void setLength(float side_l);
  void setWidth(float side_w);
  float getLength();
  float getWidth();
  double findArea();
  double findPerimeter();

  private:
    float length;
    float width;
};

const int NUMBEROFOBJECTS = 4;

int main () {
  Rectangle box[NUMBEROFOBJECTS]; // Box is defined as an array
                                  // of Rectangle objects

  for (int pos = 0; pos < NUMBEROFOBJECTS; pos++) {
    cout << "Information for box number " << pos + 1 << endl << endl;

    cout << "The length of the box is " << box[pos].getLength() << endl;
    cout << "The width of the box is " << box[pos].getWidth() << endl;
    cout << "The area of the box is " << box[pos].findArea() << endl;
    cout << "The perimeter of the box is " << box[pos].findPerimeter() << endl << endl;
  }
  return 0;
}

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

Rectangle::Rectangle (float side_l, float side_w) {
  length = side_l;
  width = side_w;
}

Rectangle::Rectangle () {
  length = 1;
  width = 1;
}

Rectangle::~Rectangle () {

}

// The output will be the same for each box
// Because each has been initialized to the default values
// for length and width