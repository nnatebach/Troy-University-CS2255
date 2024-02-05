// Write a program that
// dynamically allocates an array large enough to hold a user-defined number of test scores.
// Once all the scores are entered, the array should be passed to a function that sorts them in ascending order.
// Another function should be called that calculates the average score.
// The program should display the sorted list of scores and averages with appropriate headings.
// Use pointer notation rather than array notation whenever possible.
// NOTE: Input Validation: Do not accept negative numbers for test scores.

#include <iostream>
#include <iomanip>
// manipulator functions
// for manipulating the format of the input and output of our program

using namespace std;

void sortScores (float* scores, int numOfScores);
void displaySortedScores (float* scores, int numOfScores);

int main ()
{
  float *scores;
  // a pointer that will be used to point
  // to the beginning of a float array

  float totalScores = 0; // total of all scores

  float averageScores; // average of all scores

  int numOfScores; // the number of scores

  int count;
  // loop counter
  // use this with the array index to loop through, access and calculate the total number of scores

  cout << fixed << showpoint << setprecision(2);

  cout << "Please enter the scores to be calculated " << endl;
  cin >> numOfScores;

  while (numOfScores <= 0) // checks for a legal value
  {
    cout << "A negative score is not acceptable. Please enter a different score \n";
    cout << "How many scores will be calculated " << endl;
    cin >> numOfScores;
  };

  // allocation memory for the scores array
  scores = new float(numOfScores);
  // new is the operator that is allocating an array of floats

  // check if the array exists
  if (scores == NULL)
  {
    cout << "Error allocating memory!\n";

    return -1;
  }

  cout << "Enter the scores below\n";

  for (count = 0; count < numOfScores; count++)
  {
    cout << "Score " << (count + 1) << ": " << endl;
    cin >> scores[count];
    totalScores = totalScores + scores[count];
  }

  averageScores = totalScores / numOfScores;
  cout << "Average score is " << averageScores << "%" << endl;

  sortScores (scores, numOfScores);
  displaySortedScores(scores, numOfScores);
  delete [] scores; // deallocates all the array memory

  return 0;
}

// sort the scores array with ascending order
void sortScores (float* scores, int numOfScores)
{
  int seek;
  int minCount;
  int minValue;

  for (seek = 0; seek < (numOfScores - 1); seek++)
  {
    minCount = seek;
    minValue = scores[seek];
    for (int index = seek + 1; index < numOfScores; index++)
    {
      if (scores[index] < minValue)
      {
        minValue = scores[index];
        minCount = index;
      }
    }
    scores[minCount] = scores[seek];
    scores[seek] = minValue;
  }
}

// display the sorted scores array
void displaySortedScores (float* scores, int numOfScores)
{
  for (int count = 0; count < numOfScores; count++)
    cout << scores[count] << " ";
  cout << endl;
}