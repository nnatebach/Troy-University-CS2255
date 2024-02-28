// Hierarchical (Nested) Structures
// Sample Program 11.3

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct weather_data {
  float totalRainfall;
  float highTemperature;
  float lowTemperature;
  float averageTemperature;
};

int main () {
  const int months = 12;
  weather_data monthData[months];

  float totalRainfall = 0;
  float highestTemperature = -100;
  float lowestTemperature = 140;
  float totalAverageTemperature = 0;
  string highestMonth, lowestMonth;

  // Input data for each month
  for (int i = 0; i < months;i++) {
    cout << "Enter total rainfall for month " << i + 1 << ": ";
    cin >> monthData[i].totalRainfall;

    cout << "Enter high temperature for month " << i + 1 << ": ";
    cin >> monthData[i].highTemperature;

    while (monthData[i].highTemperature >= 140) {
      cout << "Invalid high temperature! Please enter high temperature for month " << i << " again: ";
      cin >> monthData[i].highTemperature;
    };

    cout << "Please enter low temperature for month " << i + 1 << ": ";
    cin >> monthData[i].lowTemperature;

    while (monthData[i].lowTemperature <= -100) {
      cout << "Invalid low temperature! Please enter low temperature for month " << i << " again: ";
      cin >> monthData[i].lowTemperature;
    };

    // Calculate average temperature
    monthData[i].averageTemperature = (monthData[i].highTemperature + monthData[i].lowTemperature) / 2;

    // Update total
    totalRainfall += monthData[i].totalRainfall;
    totalAverageTemperature += monthData[i].averageTemperature;

    // Update highest temperature and month
    if (monthData[i].highTemperature > highestTemperature) {
      highestTemperature = monthData[i].highTemperature;
      highestMonth = "Month " + to_string(i + 1);
    };

    if (monthData[i].lowTemperature < lowestTemperature) {
      lowestTemperature = monthData[i].lowTemperature;
      lowestMonth = "Month " + to_string(i + 1);
    };
  };

  // Calculate average monthly rainfall and average of all monthly average temperatures
  float averageMonthlyRainfall = totalRainfall / months;
  float averageAllMonthlyTemperature = totalAverageTemperature / months;

  // Display results
  cout << fixed << setprecision(2);
  cout << "Average monthly rainfall " << averageMonthlyRainfall << " inches" << endl;
  cout << "Total rainfall for the year " << totalRainfall << " inches" << endl;
  cout << "Highest temperature for the year " << highestTemperature << " degrees Fahrenheit (" << highestMonth << ") " << endl;
  cout << "Lowest temperature for the year " << lowestTemperature << " degrees Fahrenheit (" << lowestMonth << ") " << endl;
  cout << "Average of all monthly average temperatures: " << averageAllMonthlyTemperature << " degrees Fahrenheit" << endl;

  return 0;
};