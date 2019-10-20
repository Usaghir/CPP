/*=============================================================================
 File Name   : main.cpp
 Author      : Raja Umer Saghir
 Description : This program will convert temperature Fahrenheit to Celsius. 

 Fahrenheit to Celsius one more time
 
 Issue
 
 Write a program that prompts user to enter a temperature in Fahrenheit, 
 computes equivalent temperature in Celsius and prints on screen, as shown in 
 the run example given below. This program is based on the task Temperature in 
 Step 1, which converts a given temperature in Fahrenheit to Celsius. The 
 conversion will this time take place in a separate function, which returns true 
 if the temperature is greater than (or equal to) 0º C, otherwise it
 returns false. The function for temperature conversion should have two input 
 parameters, first for temperature value in Fahrenheit and second for temperature 
 value in Celsius. The converted value of temperature (from Fahrenheit to 
 celsius) should be returned via the second parameter. Of course it would have 
 been smarter to use return statement to return the converted temperature value 
 in Celsius, but this time it is a requirement to send data via parameters.

 Note! – No reading or printing should be done in the function defined for 
 temperature conversion. The program should be able to do multiple calculations
 without restarting.
 ============================================================================*/

// Preprocessor directives
#include <iostream>
#include <iomanip>
// To use the toupper of char.
#include <cctype>
using namespace std;

// ProtoType
bool tempConver(double, double &);
// Precondition: The parameters are temperature in celsius and fahrenheit.
// Postcondition: The function will sort char array alphabetically.

// A Function to send celsius temperature via parameters and return boolean.
bool tempConver(double tempInFahrenheit, double &tempInCelsius)
{
  tempInCelsius = (tempInFahrenheit - 32.0) / 1.8;

  if (tempInCelsius >= 0)
    return true;
  else
    return false;
}

// Main function
int main()
{
  // For the repetition.
  char answer = 'Y';
  cout << "Temperature Coverter" << endl;
  cout << "====================" << endl
       << endl;

  // For the repetition.
  do
  {
    // Define and initialize and variables
    double tempInFahrenheit = 0.0, tempInCelsius = 0.0;

    // For user input
    cout << "Please enter the temperature in Fahrenheit: ";
    cin >> tempInFahrenheit;

    // For conversion from Fahrenheit to Celsius.
    tempConver(tempInFahrenheit, tempInCelsius);

    // For formating the numbers with two decimal points.
    cout << fixed << showpoint << setprecision(2);

    // Output
    cout << "Temperature in Celsius is: " << tempInCelsius << endl;

    // For repetition request from user.
    cout << "One more time? (Y/N): ";
    cin >> answer;

  } while (toupper(answer) == 'Y');

  return 0;
}
