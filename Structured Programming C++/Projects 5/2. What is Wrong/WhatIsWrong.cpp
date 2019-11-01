/*=============================================================================
 File Name   : WhatIsWrong.cpp
 Author      : Raja Umer Saghir
 Description : This Task require to find the mistake in provided code?
 
 Issue
 
 Following question was found in a newsgroup! What is wrong? How to correct it?
 (The fault is not extensive!) "Why does my program always turn up "heads were
 rolled 10 times, tails were rolled 0 times" or vice versa? I'm trying to write
 a coin tossing program that tosses a coin 10 times and reports how many times
 heads were rolled and how many times tails were rolled. The heads and tails
 outcomes need to be determined randomly. Right now there's something I'm doing
 wrong (beginner you know) that is causing the outcome to be pretty unlikely.
 Here is my program":
=============================================================================*/

#include <iostream> // for input and output stream.
#include <ctime>    // for using time();
#include <cstdlib>  // for using srand() and rand();

using namespace std;

// Enumeration type is used for tails as 0 and 1 as head.
enum Coin
{
  Tails,
  Heads
};

// Main function:
int main()
{
  // variables to count the number of time heads or tails
  int frequency0 = 0, frequency1 = 0;
  Coin face; // enum type variable.

  /* This was moved from inside the loop to out in the start because is 
     should be called once and calling it in a loop again and gain set random
     number generator to same value so putting outside will provide different 
     seed each time.                                                         */

  srand((int)time(NULL));

  // Loop to perform the simulation of coin rolling 10 times.
  for (int counter = 1; counter <= 10; ++counter)
  {

    face = Coin(rand() % 2);

    // to correspond each generated random number to head or tail.
    switch (face)
    {
    case Tails:
      ++frequency0;
      break;
    case Heads:
      ++frequency1;
      break;
    }
  }

  // Display the result on console.
  cout << "============================" << endl;
  cout << "Heads and Tails calculation" << endl;
  cout << "============================" << endl;
  cout << "Tails were rolled " << frequency0 << " times" << endl;
  cout << "Heads were rolled " << frequency1 << " times" << endl;
  cout << "=========================" << endl;
  return 0;
}
