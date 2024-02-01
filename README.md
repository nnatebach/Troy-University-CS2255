=============================
SEARCHING AND SORTING ARRAYS
=============================

===== SEARCHING =====

Task: Search an array for a particular value.<br />
Data in:
  - List of values in an array.
  - The number of element in the array.
  - The value searched for in the array.<br />
Data returned:
  - Position in the array of the value.
  - If value is NOT found, return -1

------ Linear Search ------
- Advantages:
  + Simplicity
  + The array does NOT have to be in any orders.

- Disadvantage: Time-consuming for large array
WHY? If the desired data is not in the array, the search has to check every element before it returns '-1'

------ Binary Search ------
- Advantage: More efficient algorithm for searching an array
- Disadvantage: The data in the array MUST be ordered.


===== SORTING =====

displayArray<br />
Task: to print the array<br />
Data in: the array to be printed, the array size<br />
Data out: none

------ Bubble Sort ------

Task: to sort values of an array in ascending order<br />
Data in: the array, the array size<br />
Data out: the sorted array<br />

Advantage: Fairly simple<br />

Disadvantage: Inefficient for large arrays<br />
Reason: Data values only move one at a time.

------ Selection Sort - selectionSortArray ------

Task: to sort values of an array in ascending order<br />
Data in: the array, the array size<br />
Data out: the sorted array