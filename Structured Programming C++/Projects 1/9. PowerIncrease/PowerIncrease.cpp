//  9. PowerIncrease
//  File: PowerIncrease.cpp
//  Summary: In this program I need to find the power increase comparision between two
//  amplifiers.

//  Created by Raja Umer Saghir on 2018-11-18.

// Preprocessor directives
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Prototype
void PowerCalculater();

// Main fucntion.
int main()
{
  // For repitition
  char answer;
  do
  {
    // Function call
    PowerCalculater();

    // For repetition request from user.
    cout << "Want to calculate one more time? (Y/N): ";
    cin >> answer;

  } while (answer == 'Y' || answer == 'y');

  return 0;
}

// Seperate function for the calculation of the amplifier sound increase.
void PowerCalculater()
{
  // Define and initialize const and variables.
  double FraknAmp, friendsAmp, diff;
  int level;
  const int oneLevel = 3;

  // For user input for his amplifiers watts to make it more flexible.
  cout << "Please entert the output power of Frank's own amplifier: Watts ";
  cin >> FraknAmp;

  // For user input for his friend's amplifiers watts to make it more flexible.
  cout << "Please entert the output power of Frank friend's amplifier: Watts ";
  cin >> friendsAmp;

  // To calculate the power increase.
  diff = 10 * log10(FraknAmp / friendsAmp);
  level = diff / oneLevel;

  // For displaying the input according to Testcase.
  cout << "POWER CALCULATIONS" << endl;
  cout << "================== " << endl;
  cout << "Load Friends power: Watts " << friendsAmp << endl;
  cout << "Load Frank's: Watts " << FraknAmp << endl;
  cout << "======================================= " << endl;
  cout << "A change from Watts " << friendsAmp << " to Watts " << FraknAmp << " corresponds to " << round(diff) << " dB" << endl;
  cout << "This is " << level << " range of " << round(diff) << " dB" << endl;
}
