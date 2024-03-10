#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Employee Class
class Employee {
	private:
		string name;
		int employeeNumber;
		string hireDate;

	public:
		// Default constructor
		Employee() {}
		// Constructor for initializing name, employeeNumber, hireDate
		Employee(const string &name, int employeeNumber, const string &hireDate)
				: name(name), employeeNumber(employeeNumber), hireDate(hireDate) {}

		// Accessor functions
		string getName() const {
			return name;
		}
		int getEmployeeNumber() const {
			return employeeNumber;
		}
		string getHireDate() const {
			return hireDate;
		}

		// Mutator functions
		void setName (const string &name) {
			this->name = name;
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
		// Constructors
		ProductionWorker() {}
		ProductionWorker(const string &name, int employeeNumber, const string &hireDate, const string &shift, int shiftNumber, double hourlyPayRate)
				: Employee(name, employeeNumber, hireDate), shift(shift), shiftNumber(shiftNumber), hourlyPayRate(hourlyPayRate) {}

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
		void setShift (const string &shift) {
			this->shift = shift;
		}
		void setShiftNumber (int shiftNumber) {
			this->shiftNumber = shiftNumber;
		}
		void setHourlyPayRate(double hourlyPayRate) {
			this->hourlyPayRate = hourlyPayRate;
		}
};

int main() {
	// Create a ProductionWorker object
	ProductionWorker worker("John Jones", 123, "2006-1-1", "Day", 1, 15.50);

	// Display employee information
	cout << "Employee Name: " << worker.getName() << endl;
	cout << "Employee Number: " << worker.getEmployeeNumber() << endl;
	cout << "Hire Date: " << worker.getHireDate() << endl;
	cout << "Shift: " << worker.getShift() << endl;
	cout << "Shift Number: " << worker.getShiftNumber() << endl;
	cout << "Hourly Pay Rate: $" << fixed << setprecision(2) << worker.getHourlyPayRate() << endl;

	return 0;
}
