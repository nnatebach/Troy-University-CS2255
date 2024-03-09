#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int employeeNumber;
    string hireDate;

public:
    // Constructors
    Employee() {}
    Employee(const string &name, int employeeNumber, const string &hireDate)
        : name(name), employeeNumber(employeeNumber), hireDate(hireDate) {}

    // Accessor functions
    string getName() const { return name; }
    int getEmployeeNumber() const { return employeeNumber; }
    string getHireDate() const { return hireDate; }

    // Mutator functions
    void setName(const string &name) { this->name = name; }
    void setEmployeeNumber(int employeeNumber) { this->employeeNumber = employeeNumber; }
    void setHireDate(const string &hireDate) { this->hireDate = hireDate; }
};

class ProductionWorker : public Employee {
private:
    int shift;
    double hourlyPayRate;

public:
    // Constructors
    ProductionWorker() {}
    ProductionWorker(const string &name, int employeeNumber, const string &hireDate, int shift, double hourlyPayRate)
        : Employee(name, employeeNumber, hireDate), shift(shift), hourlyPayRate(hourlyPayRate) {}

    // Accessor functions
    int getShift() const { return shift; }
    double getHourlyPayRate() const { return hourlyPayRate; }

    // Mutator functions
    void setShift(int shift) { this->shift = shift; }
    void setHourlyPayRate(double hourlyPayRate) { this->hourlyPayRate = hourlyPayRate; }
};

int main() {
    // Create a ProductionWorker object
    ProductionWorker worker("John Doe", 12345, "2024-03-10", 1, 15.50);

    // Display employee information
    cout << "Employee Name: " << worker.getName() << endl;
    cout << "Employee Number: " << worker.getEmployeeNumber() << endl;
    cout << "Hire Date: " << worker.getHireDate() << endl;
    cout << "Shift: " << worker.getShift() << endl;
    cout << "Hourly Pay Rate: $" << worker.getHourlyPayRate() << endl;

    return 0;
}
