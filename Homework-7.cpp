#include <iostream>
#include "employee.h"

using namespace std;

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
