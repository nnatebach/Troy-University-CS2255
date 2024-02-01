#include <iostream>;
using namespace std;

// Function prototype

void selectionSortArray(int [], int);
void displayArray(int [], int);
const int SIZE = 5;

int main ()
{
  int values[SIZE] = {9,2,0,11,5};

  cout << "The values before the selection sort is performed are " << endl;
  displayArray(values, SIZE);

  selectionSortArray(values, SIZE);
  cout << "The values after the selection sort is performed are " << endl;
  displayArray(values, SIZE);

  return 0;
}

void displayArray (int array[], int elems)
{
  for (int count = 0; count < elems; count++)
    cout << array[count] << " ";
  cout << endl;
};

void selectionSortArray(int array[], int elems)
{
  int seek; // array position currently being put in order
  int minCount; // location of smallest value found
  int minValue; // holds the smallest value found

  for (seek = 0; seek < (elems - 1); seek++) // outer loop performs the swap
  // then increments seek
  {
    minCount = seek;
    minValue = array[seek];
    for (int index = seek + 1; index < elems; index++)
    {
      // inner loop searches through array
      // starting at array[seek] searching
      // for the smallest value.
      // When the value is found, the subscript is stored in minCount.
      // The value is stored in minValue
      if (array[index] < minValue)
      {
        minValue = array[index];
        minCount = index;
      }
    }

    // the following two statements exchange the value of the element
    // currently needing the smallest value found in the pass (indicated by seek)
    // with the smallest value found (located in minValue)
    array[minCount] = array[seek];
    array[seek] = minValue;
  }
}