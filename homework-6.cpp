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

// Constructor initializes the number member variable of the Numbers class
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
    if (number > 0) {
      result += "and "; // Add "and" if there's a value after the hundred
    }
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
  cout << "This program translates whole dollar amounts into words for the purpose of writing checks." << endl;
  cout << "Entering a negative number terminates the program." << endl;
  cout << "Enter an amount to be translated into words:\n";
  do {
    cin >> inputNumber;

    // Validate input
    if (inputNumber < 0 || inputNumber > 9999) {
      cout << "Program terminated." << endl;
      break;
    }

    // Create Numbers object
    Numbers num(inputNumber);

    // Print English description of the number
    cout << "English description:\n";
    num.print();
    cout << "Enter another number <0-9999> or enter a negative number to terminate the program" << endl;
  } while (true);

  return 0;
}