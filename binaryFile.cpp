// Sample Program 12.4
// Initializes an array and then places those values into a file as binary numbers.
// Adds 10 to each element of the array and prints those values to the screen.
// The program reads the original values from the same file and prints them.

#include <fstream>
#include <iostream>

using namespace std;

const int ARRAYSIZE = 10;

int main () {
  fstream test("grade.dat", ios::out | ios::binary);
  // notes the use of | to separate file access flags

  int grade[ARRAYSIZE] = {98,88,78,77,67,66,56,78,98,56};
  int count; // loop counter

  test.write((char*)grade, sizeof(grade)); // write values of array to file

  test.close(); // close file

  // now add 10 to each grade

  cout << "The values of grades with 10 points added\n";

  for (count = 0; count < ARRAYSIZE; count++) {
    grade[count] = grade[count] + 10; // this adds 10 to each element of the array

    cout << grade[count] << endl; // write the new values to the screen
  }

  test.open ("grade.dat", ios::in); // reopen the file but now as an input file

  test.read((char*) grade, sizeof(grade));

  /*
  The above statement reads from the file test and places the values found
  into the grade array.
  As with the "write" function, the first argument is a character pointer even though the array itself is an integer. It points to the starting address in memory where the file information is to be transferred.
  */

 cout << "The grades as they were read into the file" << endl;

 for (count = 0; count < ARRAYSIZE; count++) {
  cout << grade[count] << endl; // write the original values to the screen
 }

 test.close();
 return 0;
}