// Sample Program 9.3
// find the average of a set of grades
// dynamically allocates space for the array holding the grades

#include <iostream>
#include <iomanip> // manipulator functions for manipulating the format of the input and output of our program

using namespace std;

// function prototypes
void sortIt (float* grades, int numOfGrades);
void displayGrades (float* grades, int numOfGrades);

int main ()
{
  float *grades;
  // a pointer that will be used to point
  // to the beginning of a float array

  float total = 0; // total of all grades

  float average; // average of all grades

  int numOfGrades; // the number of grades to be processed

  int count; // loop counter

  cout << fixed << showpoint << setprecision(2);

  cout << "How many grades will be processed " << endl;
  cin >> numOfGrades;

  while (numOfGrades <= 0) // checks for a legal value
  {
    cout << "There must be at least one grade. Please reenter.\n";
    cout << "How many grades will be processed " << endl;
    cin >> numOfGrades;
  }

  // allocation memory for an array
  grades = new float(numOfGrades);
  // new is the operator that is allocating an array of floats
  // with the number of elements specified by the user.
  // grades is the pointer holding the starting address of the array.

  if (grades == NULL)
  // NULL is a special identifier predefined to equal 0.
  // it indicates a non-valid address.
  // if (grades == NULL) => if (grades == 0) => the operating system was unable to allocate enough memory for the array
  {
    cout << "Error allocating memory!\n";

    return -1;
  }
  cout << "Enter the grades below\n";

  for (count = 0; count < numOfGrades; count++)
  {
    cout << "Grade " << (count + 1) << ": " << endl;
    cin >> grades[count];
    total = total + grades[count];
  }

  average = total / numOfGrades;
  cout << "Average Grade is " << average << "%" << endl;

  sortIt (grades, numOfGrades);
  displayGrades(grades, numOfGrades);
  delete [] grades; // deallocates all the array memory

  return 0;
}

void sortIt (float* grades, int numOfGrades)
{
  // Sort routine placed here
}

void displayGrades (float* grades, int numOfGrades)
{
  // Code to display grades of the array
}