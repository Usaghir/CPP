//  7. TravelTime
//  File: TravelTime.cpp
//  Summary: In this program I need to find the remaining travell time.

//  Created by Raja Umer Saghir on 2018-11-18.

// Preprocessor directives
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Prototype
void DistanceCalculater();

// Main function
int main()
{
  // For repitition
  char answer;
  do
  {
    // Function call.
    DistanceCalculater();

    // For repetition request from user.
    cout << "Want to calculate one more time? (Y/N): ";
    cin >> answer;

  } while (answer == 'Y' || answer == 'y');

  return 0;
}

// A seperate function for the distance calculation.
void DistanceCalculater()
{
  // Define and initialize and variables.
  double AvgSpeed, remDistanceMiles, remDistanceKM, remMinutes;
  int remHours;

  // For user input of average speed.
  cout << "Pleae enter the average Speed: km/h ";
  cin >> AvgSpeed;

  // For user input of remaining distance in Swedish miles.
  cout << "Pleae enter the remaining distance: miles ";
  cin >> remDistanceMiles;

  // Remaining distance calculation in km not Swedish miles.
  remDistanceKM = remDistanceMiles * 10;

  // For remaining hours.
  remHours = (int)(remDistanceKM / AvgSpeed);

  // For remaining minutes.
  remMinutes = ((remDistanceKM / AvgSpeed) - remHours) * 60;

  // For output and ceil for the roud the double value up.
  cout << "The total remaining distance is : hours " << remHours << " and : minutes " << ceil(remMinutes) << endl;
}
