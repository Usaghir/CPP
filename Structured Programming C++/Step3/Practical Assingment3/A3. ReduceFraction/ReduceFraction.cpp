/*=============================================================================
 File Name   : ReduceFraction.cpp
 Author      : Raja Umer Saghir
 Description : This program will reduce the fraction to lower terms.
 
 Reducing Fractions to Lowest Terms
 
 Issue
 
 Write a program that asks the user to enter the values of a fraction. A
 structure, with data members that can represent the numerator and the
 denominator, shall be used to store the fraction. Moreover, the program should
 satisfy the following requirements.
 1. The program should reduce the fraction to its lowest terms and print the
 lowest terms as shown in the example output displayed below as a test case.
 2. After reducing the fraction to lowest terms, the program should represent
 (print) the fraction in mixed form, that is, for example, 3/2 = 1½,
 or 25/7 = 3 4/7
 3. It is not common to use a negative denominator (eg: 4/-3). In such cases,
 the fraction should be adjusted so that denominator instead becomes positive
 and the numerator switches sign (eg: -4/3).
 4. Multiple calculations should be able to perform without restarting the
 application.
 ============================================================================*/

// Including input and output Library.
#include <iostream>

//Included for std:: prefix.
using namespace std;

//Required Structure.
struct fractionLowTer
{
  int numerator, denominator;
};

//The main function for the main part of the function.
int main()
{

  cout << "FRACTION CALCULATION\n====================\n\n";
  //For user choice to do multiple calculation without restarting.
  char ans = 'y';

  do
  {
    int fracNum = 0, fracDenu = 0;

    // Assigning the construct variable. and user input.
    fractionLowTer fraction;
    cout << "Enter the numerator: ";
    cin >> fraction.numerator;

    //For checking the values of numerator, if that is higher of lower than zero.
    if (fraction.numerator < 0)
    {
      fracNum = fraction.numerator * -1;
    }
    else
    {
      fracNum = fraction.numerator;
    }

    //For checking the values of denominator, if that is higher of lower than zero.
    cout << "Enter the denominator: ";
    cin >> fraction.denominator;

    if (fraction.denominator < 0)
    {
      fracDenu = fraction.denominator * -1;
    }
    else
    {
      fracDenu = fraction.denominator;
    }

    //For moving to next line.
    cout << endl;

    int lowNume, lowDeno;

    //For calculation of greatest commmon divisor.
    int gcd = 0;

    for (int i = 1; i <= fracNum && i <= fracDenu; i++)
    {

      if (fracNum % i == 0 && fracDenu % i == 0)
        gcd = i;
    }

    //For calculating the lower numerator and denominator;
    lowNume = fracNum / gcd;
    lowDeno = fracDenu / gcd;

    //To present in required formate and handle the negative numbers.
    if ((fraction.numerator >= 0 && fraction.denominator >= 0) || (fraction.numerator < 0 && fraction.denominator < 0))
    {
      cout << "The fraction is abbreviated to : " << lowNume << "/" << lowDeno << " = " << lowNume / lowDeno << " " << lowNume % lowDeno << "/" << lowDeno << endl;
    }
    else
    {
      cout << "The fraction is abbreviated to : " << lowNume * -1 << "/" << lowDeno << " = " << lowNume / lowDeno * -1 << " " << lowNume % lowDeno << "/" << lowDeno << endl;
    }
    cout << "If you want to do one more time please press (y or Y) otherwise press any other key: ";
    cin >> ans;

    //For user choice to stop or continue with the program.
  } while (ans == 'y' || ans == 'Y');

  cout << "\n\n-------------------------Thanks and goodbye----------------------- " << endl;

  return 0;
}
