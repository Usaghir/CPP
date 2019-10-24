//  3. CompileError
//  File: CompileError.cpp
//  Summary: In this program I need to find and correct the syntax errors.

//  Created by Raja Umer Saghir on 2018-11-18.

//-----------------------------------------------------------------------
// Object: This program has some syntax errors. Use the compiler to find
// and correct them. Document your changes with comments or in log.
//-----------------------------------------------------------------------

#include <iostream> // Preprocessor directives
#include <iomanip>
using namespace std;

//change1: void main (), Main method should be of int return type.
int main()
{
  // Define and initialize variables
  const int hoursPerWeek = 35;   // change2: hoursPerWeek are fixed should be defined as constant.
  const double hourlyWages = 83; // change3: hourlyWages is fixed should be defined as constant.
  double weeklyWages;            // Error2: weeklyWages was undefined and is defined now.

  // Calculate weekly salary
  weeklyWages = hoursPerWeek * hourlyWages;

  // Display results
  cout << fixed           // Floating point format
       << setprecision(2) // 2 decimals
       << showpoint;      // Show trailing zero’es

  cout << " Given an hourly wage of " << hourlyWages << " kr" << endl
       << " and the number of hours per week " << hoursPerWeek << endl
       << " the weekly wages will be: " << weeklyWages << " kr" << endl; // ; Was missing and added now.
  cout << "\nPress return!";

  cin.get(); // Wait for return
  return 0;
}
