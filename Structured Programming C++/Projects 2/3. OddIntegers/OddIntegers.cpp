//  3. OddIntegers
//  File: OddIntegers.cpp
//  Summary: In this program I need prints the product of all odd
//  integers between 1 and 15.

//  Created by Raja Umer Saghir on 2018-11-25.

// Preprocessor directives
#include <iostream>
using namespace std;

// Main function
int main()
{
  cout << "Odd integers between 1 and 15 are" << endl;
  cout << "=================================" << endl;

  // Define and initialize and variables.
  int product = 1;

  // For loop for numbers between 1 and 15.
  for (int i = 1; i <= 15; i++)
  {
    // For odd numbers
    if (i % 2)
    {
      cout << i << "\t";
      product *= i;
    }
  }
  cout << "\n=================================" << endl;
  cout << "The product is: \t" << product << endl
       << endl;
  return 0;
}
