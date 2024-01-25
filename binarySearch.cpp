#include <iostream>

using namespace std;

int binarySearch(int [], int, int); // function prototype

const int SIZE = 16;

int main() {
  int found, value;
  int array[] = {34, 19, 19, 18, 17, 13, 12, 12, 12, 11, 9, 5, 3, 2, 2, 0}; // array to be searched

  cout << "Enter an integer to search for: " << endl;
  cin >> value;

  found = binarySearch(array, SIZE, value);
  // function call to perform the binary search
  // on array looking for an occurrence of value
  if (found == -1)
    cout << "The value " << value << " is not in the list." << endl;
  else {
    cout << "The value " << value << " is at position number " << found + 1 << " of the list." << endl;
  }
  return 0;
}

int binarySearch(int array[], int numElems, int value) // function heading
{
  int first = 0; // first element of list
  int last = numElems - 1; // last element of list
  int middle; // variable containing the current middle value of the list.

  while(first <= last)
  {
    middle = first + (last - first) / 2;

    if (array[middle] == value)
      return middle; // if value is in the middle => we are done.

    else if (array[middle] < value)
      last = middle - 1;
      // focus on the first half of the array
      // ignore the second half
    else
      first = middle + 1;
      // focus on the second half of the array
      // ignore the first half.
  }
  return -1; // the value is NOT in the array.
}