//============================================================================
// Name        : Task.cpp
// Author      : Raja Umer Saghir
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream> // for input and output.
#include <ctime>    // for using time();
#include <cstdlib>  // for using srand() and rand();

using namespace std;

// Enumeration type is used for tails as 0 and head as 1
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

  /* This was moved from inside the loop to out in the start because is should be called once
	and calling it in a loop again and gain set random number generator to same value so
	putting outside will provide different seed each time. */

  srand(time(NULL));

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
  cout << "Tails were rolled " << frequency0 << " times" << endl;
  cout << "Heads were rolled " << frequency1 << " times" << endl;
  cin.get();
  return 0;
}
