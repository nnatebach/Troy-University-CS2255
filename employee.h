#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

using namespace std;

class Employee {
private:
    string name;
    int employeeNumber;
    string hireDate;

public:
    // Constructors
    Employee();
    Employee(const string &name, int employeeNumber, const string &hireDate);

    // Accessor functions
    string getName() const;
    int getEmployeeNumber() const;
    string getHireDate() const;

    // Mutator functions
    void setName(const string &name);
    void setEmployeeNumber(int employeeNumber);
    void setHireDate(const string &hireDate);
};

class ProductionWorker : public Employee {
private:
    int shift;
    double hourlyPayRate;

public:
    // Constructors
    ProductionWorker();
    ProductionWorker(const string &name, int employeeNumber, const string &hireDate, int shift, double hourlyPayRate);

    // Accessor functions
    int getShift() const;
    double getHourlyPayRate() const;

    // Mutator functions
    void setShift(int shift);
    void setHourlyPayRate(double hourlyPayRate);
};

#endif // EMPLOYEE_H

