// Sample Program 12.3
// This is the Sample Program 12.2 with some changes
// that show how names with embedded whitespace along with numeric data can be processed.

#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_NAME = 11;

int main () {
  ifstream infile; // defining an input file
  ofstream outfile; // defining an output file

  infile.open("payroll.dat");
  // This statement opens outfile as an output file.
  // Whenever outfile is used, information will be sent
  // to the file payment.out

  outfile.open("payment.out");
  // This statement opens outfile as an output file.
  // Whenever outfile is used, information will be sent
  // to the file payment.out

  int hours; // The number of hours worked
  float payRate; // The rate per hour paid
  float net; // The net pay
  char ch; // ch is used to hold the next value (read as character)

  char name[MAX_NAME]; // array of characters for the name of a student
                       // with at most 10 characters

  if (!infile) { // check to make sure that the physical file exists
    cout << "Error opening file.\n";
    cout << "Perhaps the file is not where indicated.\n";
    return 1; // the file in question can not be found
  }
  outfile << fixed << setprecision(2);
  outfile << "Name            Hours     Pay Rate    Net Pay" << endl;

  while ((ch = infile.peek()) != EOF) { // no need to prime the read
    infile.get(name, MAX_NAME); // gets names with blanks
    infile >> hours;
    infile >> payRate;
    infile.ignore(81, '\n'); // ignores the rest of the line
                             // and consumes end of line marker

    net = hours * payRate;

    outfile << name << setw(10) << hours << setw(10) << "$ " << setw(6) << payRate << setw(5) << "$ " << setw(7) << net << endl;

  }

  infile.close();
  outfile.close();

  return 0;
}