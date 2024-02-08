================ POINTERS ================

'&' is used on two occasions
- Between data type and variable name - pass by reference parameter (reference variable).
- When we are interested in the address rather than the contents of a variable.<br />

'*' is used on two occasions
- Define pointer variable<br />
int *ptr;
- Indirection operator<br />
When we are more interested in the memory location pointed to by a pointer variable rather than the address itself.<br />

Ex:<br />
cout << *ptr;<br />
// Since ptr is a pointer variable, * dereferences ptr<br />
// The values stored at the location ptr points to will be printed<br />

'&' and '*' are the opposites in many ways
- '*' is used before a pointer variable to obtain actual data.
- '&' is used on a variable so that the variable's address will be used.<br />

================ DYNAMIC VARIABLES ================

Examples on dynamic variables<br />
int *one;<br />
int *two;<br />
// one and two are defined to be pointer variables that point to ints<br />

int result; // defines an int variable that will hold the sum of two values<br />

one = new int;<br />
two = new int;<br />
// These statements each dynamically allocate enough memory<br />
// to hold an int and assign their addresses to pointer variables one and two, respectively.<br />

*one = 10;<br />
*two = 20;<br />
// These statements assign<br />
// the value 10 to the memory location pointed to by one<br />
// and 20 to the memory location pointed to by two<br />

result = *one + *two;<br />
// This adds the contents of the memory locations<br />
// pointed to by one and two.<br />
cout << "result = " << result << endl;<br />

delete one;<br />
delete two;<br />
// These statements deallocate the dynamic variables.<br />
// Their memory is freed and they cease to exist.<br />

NOTE:<br />
Since one and two are initially defined as pointer variables (*one, *two).<br />
Therefore, even without the "indirection operator" (*), they are still seen as pointer variables (one = new int; two = new int;)

------ sortIt ------<br />

Task: sort numbers in an array<br />
Data in:
- an array of floats
- the number of elements in the array<br />
Data out: Sorted array<br />

------ displayGrades ------<br />

Task: display numbers in an array<br />
Data in:
- an array of floats
- the number of elements in the array<br />
Data out: none

------ Homework 01 ------<br />
Programming Challenges 2<br />
Test Scores #1