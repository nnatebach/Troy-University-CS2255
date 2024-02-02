#include <iostream>
using namespace std;

int main ()
{
  int one = 10;
  int *ptr1; // ptr1 is a pointer variable that points to an int

  ptr1 = &one;
  // &one indicates that the address of "one" is being assigned to ptr1.
  // Remember that ptr1 can only hold an address - as it was declared "*ptr1"
  // We say that ptr1 "points to" one since ptr1 holds the address where the variable one stored

  cout << "The value of one is " << one << endl << endl;
  cout << "The value of &one is " << &one << endl << endl;
  cout << "The value of ptr1 is " << ptr1 << endl << endl;
  cout << "The value of *ptr1 is " << *ptr1 << endl << endl;

  return 0;
}