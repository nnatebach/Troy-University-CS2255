// Sample Program 12.1

#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

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

  if (!infile) { // check to make sure that the physical file exists
    cout << "Error opening file.\n";
    cout << "Perhaps the file is not where indicated.\n";
    return 1; // the file in question can not be found
  }
  outfile << fixed << setprecision(2);
  outfile << "Hours     Pay Rate    Net Pay" << endl;

  infile >> hours; // priming the read

  while (!infile.eof()) {
    infile >> payRate;
    net = hours * payRate;

    outfile << hours << setw(10) << "$ " << setw(6) << payRate << setw(5) << "$ " << setw(7) << net << endl;

    infile >> hours;
  }

  infile.close();
  outfile.close();

  return 0;
}