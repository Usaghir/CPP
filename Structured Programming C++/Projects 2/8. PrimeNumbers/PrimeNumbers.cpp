//  8. PrimeNumbers
//  File: PrimeNumbers.cpp
//  Summary: In this program I need find prime numbers between 2 and 100

//
//  Created by Raja Umer Saghir on 2018-11-25.

// Preprocessor directives
#include <iostream>
using namespace std;

// Proto Type
void primeNumb();

// Main Function
int main()
{
  // For printing the table hearer
  cout << "The List of the prime numbers between 2 and 100 is\n";
  cout << "==================================================\n";

  // Function call.
  primeNumb();
  cout << "\n";
  return 0;
}

// A seperate function for calculating the prime number.
void primeNumb()
{

  // For calculating the prime number between 2 and 100 .
  for (int i = 2; i <= 100; i++)
  {
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        break;
      }
      else if (i == j + 1)
      {
        cout << i << "\t";
      }
    }
  }
}
