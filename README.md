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
- '&' is used on a variable so that the variable's address will be used.