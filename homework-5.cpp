#include <iostream>
#include <string>

using namespace std;

class Employee {
  private:
    string name;
    int idNumber;
    string department;
    string position;

  public:
    // Constructor for employee's name, ID, department and position
    Employee(string name = "", int idNumber = 0, string department = "", string position = "") {
      this->name = name;
      this->idNumber = idNumber;
      this->department = department;
      this->position = position;
    }

    // Constructor for employee's name and ID
    Employee(string name, int idNumber) {
      this->name = name;
      this->idNumber = idNumber;
      this->department = "";
      this->position = "";
    }

    // Default constructor
    Employee() {
      this->name = "";
      this->idNumber = 0;
      this->department = "";
      this->position = "";
    }

  // Accessor functions to return values in the member variables
  const string getName() {
    return name;
  }
  const int getIdNumber() {
    return idNumber;
  }
  const string getDepartment() {
    return department;
  }
  const string getPosition() {
    return position;
  }

  // Mutator functions to store values in the member variables
  void setName(string employeeName) {
    name = employeeName;
  }
  void setIdNumber(int employeeIdNumber) {
    idNumber = employeeIdNumber;
  }
  void setDepartment(string employeeDepartment) {
    department = employeeDepartment;
  }
  void setPosition(string employeePosition) {
    position = employeePosition;
  }

  // Function to display employee data
  void displayEmployee()
  {
    cout << "Name: " << name << endl;
    cout << "ID Number: " << idNumber << endl;
    cout << "Department: " << department << endl;
    cout << "Position: " << position << endl;
  }
};

int main()
{
  // Create three Employee objects
  Employee employee1 ("Susan Meyers", 47899, "Accounting", "Vice President");
  Employee employee2 ("Mark Jones", 39119, "IT", "Programmer");
  Employee employee3 ("Joy Rogers", 81774, "Manufacturing", "Engineer");

  // Display employee data
  cout << "Employee 1:\n";
  employee1.displayEmployee();
  cout << endl;

  cout << "Employee 2:\n";
  employee2.displayEmployee();
  cout << endl;

  cout << "Employee 3:\n";
  employee3.displayEmployee();
  cout << endl;
  cout << "Please press any key to continue . . ." << endl;

  // wait for user input
  getchar();

  return 0;
}