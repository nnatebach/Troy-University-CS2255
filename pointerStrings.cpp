// Sample Program 10.5
// The program reads in a string of no more than 50 characters
// and counts the number of letters, digits and whitespace characters.
// pointer strPtr points to the string being processed.
// three functions countLetters, countDigits, and countWhiteSpace basically perform the same task.
// in function countLetters, characters are tested to see if they are letters.
// while loop is executed until strPtr points to the null character marking the end of the string.
// if(isalpha(*strPtr)) determines if the character pointed at by strPtr is a letter => counter occurs is incremented by one if the letter pointed at is a letter.
// after the character has been tested, strPtr is incremented by one to test the next character.

#include <iostream>
#include <cctype>

using namespace std;

// function prototypes
int countLetters(char*);
int countDigits(char*);
int countWhiteSpace(char*);

int main ()
{
  int numLetters, numDigits, numWhiteSpace;
  char inputString[51];

  cout << "Enter a string of no more than 50 characters: " << endl << endl;

  cin.getline(inputString,51);

  numLetters = countLetters(inputString);
  numDigits = countDigits(inputString);
  numWhiteSpace = countWhiteSpace(inputString);

  cout << "The number of letters in the entered string is " << numLetters << endl;
  cout << "The number of digits in the entered string is " << numDigits << endl;
  cout << "The number of white spaces in the entered string is " << numWhiteSpace << endl;

  return 0;
}

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
}

int countDigits(char *strPtr)
{
  int occurs = 0;
  while(*strPtr != '\0')
  {
    if (isdigit(*strPtr))
    // isdigit determines
    // if the character is a digit
    {
      occurs++;
    }
    strPtr++;
  }
  return occurs;
}

int countWhiteSpace(char *strPtr)
{
  int occurs = 0;
  while (*strPtr != '\0')
  {
    if (isspace(*strPtr))
    // isspace determines
    // if the character is a whitespace
    {
      occurs++;
    }
    strPtr++;
  }
  return occurs;
}