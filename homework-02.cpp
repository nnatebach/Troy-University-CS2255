// Users' passwords
// At least six characters long
// Contain at least one uppercase and at least one lowercase letter.
// At least one digit
// Write a program that asks for a password and then verifies that it meets the stated criteria.
// If it does not, the program should display a message telling the user why.

#include <iostream>
#include <cctype>

using namespace std;

// function prototypes
int countLetters(char*);
int countDigits(char*);
int countUpperCase(char*);
int countLowerCase(char*);

int main () {
  int numLetters, numDigits, numLowerCase, numUpperCase;
  char password[21];

  cout << "Please enter a new password: " << endl;
  cin.getline(password, 21);

  numLetters = countLetters(password);
  numDigits = countDigits(password);
  numLowerCase = countLowerCase(password);
  numUpperCase = countUpperCase(password);
  cout << "There are " << numLetters << " characters, " << numDigits << " digits, " << numLowerCase << " lower case letters, " << numUpperCase << " upper case letters." << endl;

  cout << "The password should be at least 6 characters long." << endl;
  cout << "The password must have at least 1 digit." << endl;
  cout << "The password must have at least 1 lower case letter." << endl;
  cout << "The password must have at least 1 upper case letter." << endl;

  if (numLetters >= 6 && numDigits >= 1 && numLowerCase >= 1 && numUpperCase >= 1) {
    cout << "The password is valid" << endl;
  } else {
    cout << "The password is not valid" << endl;
  }
  cout << "Press anything to continue...." << endl;
  cin.get();
};

int countLetters(char *strPtr)
{
  int occurs = 0;
  while(*strPtr != '\0')
  // loop is executed as long as
  // pointer strPtr does not point to the null character
  // which marks the end of the string
  {
    if (isalpha(*strPtr))
    // isalpha determines
    // if the character is a letter.
    {
      occurs++;
    }
    strPtr++;
  }
  return occurs;
};

int countDigits(char *strPtr)
{
  int occurs = 0;
  while(*strPtr != '\0')
  {
    if (isdigit(*strPtr))
    {
      occurs++;
    }
    strPtr++;
  }
  return occurs;
};

int countLowerCase(char *strPtr) {
  int occurs = 0;
  while(*strPtr != '\0') {
    if (islower(*strPtr)) {
      occurs++;
    }
    strPtr++;
  }
  return occurs;
};

int countUpperCase(char *strPtr) {
  int occurs = 0;
  while(*strPtr != '\0') {
    if (isupper(*strPtr)) {
      occurs++;
    }
    strPtr++;
  }
  return occurs;
}