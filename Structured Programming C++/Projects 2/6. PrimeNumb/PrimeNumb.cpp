//  6. PrimeNumb
//  File: PrimeNumb.cpp
//  Summary: In this program I need to find the second largest number from 10
//  interegs.
//
//  Created by Raja Umer Saghir on 2018-11-25.

// Preprocessor directives
#include <iostream>
#include <iomanip>
using namespace std;

// ProtoType
void primeNumb();

// Main function
int main()
{
  // For the repetition.
  char answer;

  do
  {

    // Function call
    primeNumb();

    cout << "\nWanto to find one more time (Y/N)? " << endl;
    cin >> answer;
  } while (answer == 'Y' || answer == 'y');
  return 0;
}

// A seperate function for second largest number calculation.
void primeNumb()
{
  //Variable initialization.
  int number, largest = 0, secondLargest = 0;

  // A loop for asking user to load the numbers.
  for (int j = 1; j <= 10; j++)
  {
    cout << "please enter the number:" << j << setw(5) << " ";
    cin >> number;

    // For finding the second largest number.
    if (number > largest)
    {
      secondLargest = largest;
      largest = number;
    }
    else if (number > secondLargest)
    {
      secondLargest = number;
    }
  }
  // For prinintg the second largest number.
  cout << "The 2nd largest number is:\t" << secondLargest << endl;
}
