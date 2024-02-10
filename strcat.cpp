#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
  char string1[20] = "Total Eclipse ";
  // Note: The programmer must add the space after the second word
  // because "strcat" does NOT insert a space.

  char string2[11] = "of the Sun";

  cout << string1 << endl;
  cout << string2 << endl;

  strcat(string1, string2);

  cout << string1 << endl;
}