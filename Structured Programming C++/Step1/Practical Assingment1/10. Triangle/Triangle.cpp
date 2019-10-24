//  1. Triangle
//  File: Triangle.cpp
//  Summary: In this program I need to calculate the hypoteneus of right-angle triangle.

//  Created by Raja Umer Saghir on 2018-11-18.

// Preprocessor directives
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Prototype
void Triangle();

// Main function.
int main()
{
  char answer;
  do
  {
    Triangle();

    // To repeat the calculation.
    cout << "Want to calculate one more time? (Y/N): ";
    cin >> answer;

  } while (answer == 'Y' || answer == 'y');

  return 0;
}

// A seperate function to calculate the hypotenuse.
void Triangle()
{

  // Define variables.
  double adj, opp, hyp;

  // For user input
  cout << "Pleas ente the adjasent: ";
  cin >> adj;
  cout << "Pleas ente the opposite: ";
  cin >> opp;

  hyp = sqrt(pow(adj, 2) + pow(opp, 2));

  // for output with the result of the Hypotinuse length.
  cout << fixed << showpoint << setprecision(2);
  cout << "The Hypotinuse of the triagnle is : " << hyp << endl;
}
