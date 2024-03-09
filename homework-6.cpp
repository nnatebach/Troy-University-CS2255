#include "Numbers.h"
#include <iostream>

using namespace std;

// Static member initialization
string Numbers::lessThan20[20] = {
  "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
};
string Numbers::tens[10] = {
  "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
};
string Numbers::hundred = "hundred";
string Numbers::thousand = "thousand";

// Constructor
Numbers::Numbers(int num) : number(num) {}

// Print English description of the number
void Numbers::print () {
  if (number == 0) {
    cout << lessThan20[0] << endl;
    return;
  }

  string result;
  if (number >= 1000) {
    result += lessThan20[number / 1000] + " " + thousand + " ";
    number %= 1000;
  }
  if (number >= 100) {
    result += lessThan20[number / 100] + " " + hundred + " ";
    number %= 100;
  }
  if (number >= 20) {
    result += tens[number / 10 - 2] + " ";
    number %= 10;
  }
  if (number > 0) {
    result += lessThan20[number] + " ";
  }
  cout << result << endl;
}

int main () {
  int inputNumber;
  cout << "Enter a number between 0 and 9999: ";
  cin >> inputNumber;

  // Validate input
  if (inputNumber < 0 || inputNumber > 9999) {
    cerr << "Invalid input! Please enter a number between 0 and 9999." << endl;
    return 1;
  }

  // Create Numbers object
  Numbers num(inputNumber);

  // Print English description of the number
  cout << "English description: ";
  num.print();

  return 0;
}