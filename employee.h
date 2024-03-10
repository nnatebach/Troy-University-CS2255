#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

using namespace std;

class Employee {
	private:
    string employeeName;
    int employeeNumber;
    string hireDate;

	public:
    // Default constructor
    Employee();
		// Constructor for initializing employeeName, employeeNumber and hireDate
    Employee(const string &employeeName, int employeeNumber, const string &hireDate);

    // Accessor functions
    string getEmployeeName() const;
    int getEmployeeNumber() const;
    string getHireDate() const;

    // Mutator functions
    void setEmployeeName (const string &employeeName);
    void setEmployeeNumber (int employeeNumber);
    void setHireDate (const string &hireDate);
};

class ProductionWorker : public Employee {
	private:
    int shift;
    double hourlyPayRate;

	public:
    // Default constructor
    ProductionWorker();
		// Constructor for initializing employeeName, employeeNumber, hireDate, shift and hourlyPayRate
    ProductionWorker(const string &employeeName, int employeeNumber, const string &hireDate, int shift, double hourlyPayRate);

    // Accessor functions
    int getShift() const;
    double getHourlyPayRate() const;

    // Mutator functions
    void setShift (int shift);
    void setHourlyPayRate (double hourlyPayRate);
};

#endif // EMPLOYEE_H