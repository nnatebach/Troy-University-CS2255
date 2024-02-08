// Sample Program 10.1
// This program utilizes several functions
// for character testing
// test to see whether an entered input is
// an alphabet, an uppercase, a lowercase, a digit
// or none of those

// NOTE:
// - isdigit() - Only digits from 0 to 9 are recognized
// - isalpha() - Check to see whether input character is a letter

#include <iostream>
#include <cctype> // ctype.h - character handling functions

using namespace std;

int main ()
{
  char input;

  cout << "Please enter any character: " << endl;
  cin >> input;
  cout << "The entered character is " << input << endl << endl;
  cout << "The ASCII code for " << input << " is " << int(input) << endl;

  if (isalpha(input)) // tests to see if character is a letter
  {
    cout << "The character is a letter " << endl;

    if (islower(input)) // tests to see if letter is lower case
      cout << "The character is lower case" << endl;
    if (isupper(input)) // tests to see if letter is upper case
      cout << "The character is upper case" << endl;
  }
  else if (isdigit(input)) // tests to see if letter is a digit
    cout << "The character is a digit " << endl;
  else
    cout << "The character is not a letter nor a digit. " << endl;

  return 0;
}