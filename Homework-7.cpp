#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Employee Class
class Employee {
	private:
		string employeeName;
		int employeeNumber;
		string hireDate;

	public:
		// Default constructor
		Employee() {}
		// Constructor for initializing employeeName, employeeNumber, hireDate
		Employee(const string &employeeName, int employeeNumber, const string &hireDate)
				: employeeName(employeeName), employeeNumber(employeeNumber), hireDate(hireDate) {}

		// Accessor functions
		string getEmployeeName() const {
			return employeeName;
		}
		int getEmployeeNumber() const {
			return employeeNumber;
		}
		string getHireDate() const {
			return hireDate;
		}

		// Mutator functions
		void setEmployeeName (const string &employeeName) {
			this->employeeName = employeeName;
		}
		void setEmployeeNumber (int employeeNumber) {
			this->employeeNumber = employeeNumber;
		}
		void setHireDate (const string &hireDate) {
			this->hireDate = hireDate;
		}
};

// ProductionWorker Class
class ProductionWorker : public Employee {
	private:
		string shift;
		int shiftNumber;
		double hourlyPayRate;

	public:
		// Default Constructor
		ProductionWorker() {}
		// Constructor for initializing employeeName, employeeNumber, hireDate, shiftNumber, hourlyPayRate
		ProductionWorker (const string &employeeName, int employeeNumber, const string &hireDate, int shiftNumber, double hourlyPayRate)
				: Employee(employeeName, employeeNumber, hireDate), shiftNumber(shiftNumber), hourlyPayRate(hourlyPayRate) {
			// The time of "shift" is based on "shiftNumber"
			if (shiftNumber == 1) {
				shift = "Day";
			} else if (shiftNumber == 2) {
				shift = "Night";
			} else {
				shift = "Unknown";
			}
		}

		// Accessor functions
		string getShift() const {
			return shift;
		}
		int getShiftNumber() const {
			return shiftNumber;
		}
		double getHourlyPayRate() const {
			return hourlyPayRate;
		}

		// Mutator functions
		void setShiftNumber (int shiftNumber) {
			this->shiftNumber = shiftNumber;
			// The time of "shift" is based on "shiftNumber"
			if (shiftNumber == 1) {
				shift = "Day";
			} else if (shiftNumber == 2) {
				shift = "Night";
			} else {
				shift = "Unknown";
			}
		}
		void setHourlyPayRate (double hourlyPayRate) {
			this->hourlyPayRate = hourlyPayRate;
		}
};

int main() {
	// Create a ProductionWorker object
	ProductionWorker worker("John Jones", 123, "1/1/2006", 2, 18.00);
	// The fourth argument is for the "Shift Number"
	// 1 is for "Day"
	// 2 is for "Night"

	// Display employee information
	cout << "Employee Name: " << worker.getEmployeeName() << endl;
	cout << "Employee Number: " << worker.getEmployeeNumber() << endl;
	cout << "Hire Date: " << worker.getHireDate() << endl;
	cout << "Shift: " << worker.getShift() << endl;
	cout << "Shift Number: " << worker.getShiftNumber() << endl;
	cout << "Hourly Pay Rate: $" << fixed << setprecision(2) << worker.getHourlyPayRate() << endl;
	cout << "Press any key to continue . . ." << endl;
	// wait for user input
	getchar();

	return 0;
}