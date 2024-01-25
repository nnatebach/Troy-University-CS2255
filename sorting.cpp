#include <iostream>

using namespace std;

int searchList(char[], int, char); // function prototype
const int SIZE = 8;

int main() {
  char word[SIZE] = "Harpoon";
  int found;
  char ch;

  cout << "Enter a character to search for:" << endl;
  cin >> ch;

  found = searchList(word, SIZE, ch);
  if (found == -1)
    cout << "The character " << ch << " was not found in the list" << endl;
  else
    cout << "The letter " << ch << " is in the " << found << " position of the list " << endl;
  return 0;
}

int searchList(char list[], int numElems, char value) {
  for (int count = 0; count < numElems; count++)
  {
    if (list[count] == value)
    return count;
  }
  return -1;
}