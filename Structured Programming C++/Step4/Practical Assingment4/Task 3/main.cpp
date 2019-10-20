/*=============================================================================
 File Name   : main.cpp
 Author      : Raja Umer Saghir
 Description : This program will print square in required format.

 By default

 Issue

 There are many features to use in conjunction with parameter transfer. In this 
 task, a default parameter should be used, which is a convenient way to let 
 functions implement default values, where the parameter value is omitted.
 Declare and define a function that calculates xy, i.e., value of x raised to
 the power of y. The function can be named power and should be able to be used
 with the test program below. The default value to use should be 2.
 ============================================================================*/

#include <iostream>
using namespace std;

// Prototype
int power(int, int = 2);
// Precondition: The first parameter is base and second parameter is default
// power value which is 2.
// Postcondition: The function will return the square of the first parameter.

int main()
{
  for (int i = 0; i < 10; i++)
    cout << power(2, i) << " "; // prints 2 raised to the power of i
  cout << endl;
  cout << power(3) << endl; // will print 9
  cout << power(4) << endl; // will print 16
  cout << power(5) << endl; // will print 25
  return 0;
}
// Function definition for power
int power(int base, int power)
{
  double sqr = 1;
  if (power > 0)
    for (int n = 0; n < power; n++)
      sqr *= base;
  else
    for (int n = 0; n > power; n--)
      sqr /= base;
  return sqr;
}
