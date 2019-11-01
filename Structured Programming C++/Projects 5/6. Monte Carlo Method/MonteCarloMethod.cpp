/*=============================================================================
 File Name   : MonteCarloMethod.cpp
 Author      : Raja Umer Saghir
 Description : This program provide the value of pi using Monte Carlo-method.
 
 Monte Carlo-method for determination of Pi
 
 Issue
 
 By randomly throwing arrows on a square which is enclosed by a quartercircle
 you can experimentally determine the value of Pi with good accuracy,
 by assuming that the number of arrows that hit different surfaces is
 proportional to their areas. With the side length of the square = R we get the
 relation:
 
 Quarter-Circle Area/Square Area = (π.R^2/4)/R^2 = π/4 
 => Number of arrows below circular arc/Number of arrows in square 4 = π/4
 
 • A program investigating this method to determine Pi should be written.
 • The program should use a number of functions which you will write.
 • The program is to use the following globally accessible definitions:
 const double R = 100; // Radius of the circle (=square side) is determined 
 here

 struct Coord // Data representation of a point where the arrow hits
 {
 double x, y;
 };

 a) Write the function throw which returns a coordinate of the type Coord. The
 throws are done by generating random numbers for x and y within the square 
 area. The random coordinate is returned in a structure of the type Coord.

 b) Write the Boolean function below which takes a coordinate of the type Coord
 as argument and returns true if the coordinate falls below the circle arc. 
 This happens if

 x2+y2 < R2.

 c) Write the function throwSeries which takes an integer, n, as argument. The
 function shall throw an arrow n times and then print the n-value, the Pi value
 with 5 decimals calculated with the formula above, as well as the relative 
 fault with 1 decimal (see test case). The functions in a) and b) should 
 clearly be used. Relative faults are calculated with the

 formula: relFel = (PI_calculated -PI)/PI * 100%
 
 Only one row should be printed when calling this function.

 d) Finally, write a program that calculates pi in this way with 100, 200, 300,
 …, 10000 throws of the arrow. See test case below (If you have done it all 
 correct, you should though not expect exactly the same values).
 ============================================================================*/

#include <iostream> // for input and output
#include <iomanip>  // for setfill()and setw(2)
#include <vector>   // for using vectors
#include <ctime>    // for using time();
#include <cstdlib>  // for using srand() and rand();
#include <string>   // for using toupper();
#include <cmath>    // for using pow();

using namespace std;

// Radios of the quarter circle and square.
const double R = 100;

// A struct which keep the coordinates of the circuit.
struct Coord
{
  double x;
  double y;
};

Coord throww();
// Precondition:
// Postcondition: The function will simulate the arrow throw and return the
// x and y coordinates as a struct type variable Coord.

bool fall(Coord);
// Precondition: The Coord is a struct type variable with x and y coordinates
// in struct variable Coord as double.
// Postcondition: The function will return status of arrow position if it is
// inside or outside.

void throwSeries(int n);
// Precondition: The n is number of throws that will be done.
// Postcondition: The function will simulate the multiple arrow throw and
// will calculate the value of PI and also the relative fault.

// Function for initial throw.
Coord throww()
{
  Coord initCoord;

  initCoord.x = rand() % int((R)*100) / (double)100;

  initCoord.y = rand() % int((R)*100) / (double)100;

  return initCoord;
}

// Function for arrow position inside or outside the quarter circle.
bool fall(Coord initCoord)
{
  if ((pow(initCoord.x, 2) + pow(initCoord.y, 2)) < pow(R, 2))
    return true;
  else
    return false;
}

// Function for calculation of PI and relative fault after multiple throws.
void throwSeries(int n)
{
  int insdieCount = 0;
  for (int i = 0; i < n; i++)
  {
    if (fall(throww()))
    {
      insdieCount++;
    }
  }
  double piCal;
  piCal = ((double)insdieCount * 4) / n;

  double refFel = ((piCal - M_PI) / M_PI) * 100;

  if (n < 1000)
  {
    cout << n;
    cout << fixed << setprecision(5) << setw(16) << piCal;
    cout << fixed << setprecision(1) << setw(15) << refFel << endl;
  }
  else if (n > 999 && n < 10000)
  {
    cout << n;
    cout << fixed << setprecision(5) << setw(15) << piCal;
    cout << fixed << setprecision(1) << setw(15) << refFel << endl;
  }
  else
  {
    cout << n;
    cout << fixed << setprecision(5) << setw(14) << piCal;
    cout << fixed << setprecision(1) << setw(15) << refFel << endl;
  }
}

// Main function
int main(int argc, const char *argv[])
{

  // Random function will take time as seed to generate real random numbers.
  srand((int)time(NULL));
  int n = 100;

  // For printing on screen.
  cout << "Monto Carlo-method for determination of Pi" << endl;
  cout << "==========================================" << endl;
  cout << setw(3) << "n" << setw(12) << "pi" << setw(21) << "Rel. fault" << endl;
  cout << "===|===============|======================" << endl
       << endl;

  while (n <= 10000)
  {
    throwSeries(n);
    n += 100;
  }
  cout << "==========================================" << endl;
  return 0;
}
