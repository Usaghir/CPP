/*=============================================================================
 File Name   : TimeStructures.cpp
 Author      : Raja Umer Saghir
 Description : Is this Task need to provide the maximum time differene for
 multiple times data.
 
 Time structures
 
 Issue
 
 You should write a program testing some structure management according to the
 following descriptions. The main program don't need to be that meaningful, it
 shall just test the functions you have written. Use the following structure in
 the implementations.
 
 struct TimeType
 {
 int hour;
 int min;
 };
 
 a) Write a function that, with use of actual argument (timeA), calculates the
 total number of minutes. The function name shall be toMinutes, and is to be
 used as shown below.
 
 int main()
 {
 int minutes;
 TimeType timeA = {10, 15};
 minutes = toMinutes(timeA);
 cout << minutes << " minutes" << endl; // Should write: 615 minutes return 0;
 }
 
 b) Write a function that converts a number of minutes, sent as an argument, to
 a time in the form of the above structure. The function should be called
 toTime, and is to be used according to following program example. Test it in
 the same program as task a).
 
 int minutes = 124;
 TimeType time = toTime(minutes);
 
 Then, print out the time! With the above conditions, the output should be: 
 02:04
 
 c) Write a function timeDifference, which calculates the difference between 
 two time points, sent as arguments. The function shall take advantage of the 
 two functions above, and be used as in examples below. (Nothing indicates that 
 time2 will have larger value than time1.)
 
 TimeType timeB = {10, 30}, timeC = {13, 20}, difference;
 difference = timeDifference(timeB, timeC);
 
 Then, print out the resulting difference so that time, with the above data,
 becomes: 02:50
 
 d) Write a function dynamicTimes, which creates a dynamic vector, named times,
 with capacity for 200 times. (Error handling is not needed.) Write code that
 randomizes values for the 200 time posts. Then you write code to calculate the
 maximum time difference that exists among the random time values. You can
 benefit from the above functions for this. Finally, also deallocate the 
 vector. A function call as follows should be able to perform:
 
 TimeType maxDiff = dynamicTimes();
 
 maxDiff should at the end be printed in the same way as in task c).
 ============================================================================*/

#include <iostream> // for input and output
#include <iomanip>  // for setfill()and setw(2)
#include <vector>   // for using vectors
#include <ctime>    // for using time();
#include <cstdlib>  // for using srand() and rand();

using namespace std;

// A Struct to store multiple time data.
struct TimeType
{
  int hour;
  int min;
};

// Functions prototypes.
int toMinutes(TimeType timeA);
// Precondition: The TimeA is a struct TimeType variable containing int values
// of number of hours and minuts.
// Postcondition: The function will return the value in int as time in minutes.

TimeType toTime(int minutes);
// Precondition: The minutes is a int value (returned from previous function.
// Postcondition: The function will return struct TimeType variable containing
// int hours and minutes values.

TimeType timeDifference(TimeType timeB, TimeType timeC);
// Precondition: The timeB and timeC should be struct TimeType variable
// contaning int time values hour and minute.
// Postcondition: The function will return struct TimeType variable containing
// int hours and minutes values which is difference TimeB and TimeC.

TimeType dynamicTimes();
// Precondition:
// Postcondition: The function will return struct TimeType variable containing
// int hours and minutes values of 200 different times.

// A function to covert hours and minutes in just minutes.
int toMinutes(TimeType timeA)
{
  return (timeA.hour * 60) + timeA.min;
}

// A function to convert minutes to hours and minutes.
TimeType toTime(int minutes)
{
  TimeType time;
  time.hour = minutes / 60;
  time.min = minutes % 60;
  return time;
}

// A function to provide the time difference of two times.
TimeType timeDifference(TimeType timeB, TimeType timeC)
{

  TimeType diff;
  int diffMin = 0;
  int diffHour = 0;
  int totMinB;
  int totMinC;

  totMinB = toMinutes(timeB);
  totMinC = toMinutes(timeC);

  // In finding total minutes for different values of timeB and TimeC;
  if (totMinC > totMinB)
    diffMin = totMinC - totMinB;
  else if ((totMinC < totMinB))
    diffMin = totMinB - totMinB;
  else
    diffMin = 0;

  diffHour = diffMin / 60;
  diffMin %= 60;
  diff.hour = diffHour;
  diff.min = diffMin;

  return diff;
}

// A function to provide the time difference of 200 different times.
TimeType dynamicTimes()
{
  TimeType MintHours;     // A struct to keep the time data in minutes and hours.
  vector<TimeType> times; // A vector to keep the 200 structs.
  int totMints[200], minMints = 0, maxMints = 0;

  // To generate random number via seed of clock.
  srand((int)time(NULL));

  // Loop to iterate through all the the 200 structs and array of minutes to
  // find min and max time.
  for (int i = 0; i < 200; i++)
  {
    //For random time posts.
    MintHours.hour = rand() % 25;
    MintHours.min = rand() % 60;

    times.push_back(MintHours);
    totMints[i] = toMinutes(MintHours);
    minMints = totMints[0];

    if (totMints[i] < minMints) // For finding minimum minutes or time.
    {
      minMints = totMints[i];
    }
    maxMints = totMints[0];

    if (totMints[i] > maxMints) // For finding maximum minutes or time.
    {
      maxMints = totMints[i];
    }
  }

  // return of the time difference after converting minutes to time.
  return timeDifference(toTime(minMints), toTime(maxMints));
}

// Main function.
int main()

{
  int minutes;
  TimeType timeA = {10, 15};
  minutes = toMinutes(timeA); //call to function.

  cout << "================================" << endl;
  cout << "      Time structures" << endl;
  cout << "================================" << endl;
  cout << "a) Time in Minutes: ";
  cout << minutes << " minutes" << endl; // output

  minutes = 124;
  TimeType time = toTime(minutes); //call to function.

  cout << "================================" << endl;
  cout << "b) In Time Format: ";

  cout << setfill('0') << setw(2);
  cout << time.hour;
  cout << ":";
  cout << setfill('0') << setw(2);
  cout << time.min << endl;

  TimeType timeB = {10, 30}, timeC = {13, 20}, difference;
  difference = timeDifference(timeB, timeC);

  cout << "================================" << endl;
  cout << "c) Time Differene: ";

  cout << setfill('0') << setw(2);
  cout << difference.hour;
  cout << ":";
  cout << setfill('0') << setw(2);
  cout << difference.min << endl;

  TimeType maxDiff = dynamicTimes();

  cout << "================================" << endl;
  cout << "d) Maximum Time Differene: ";

  cout << setfill('0') << setw(2);
  cout << maxDiff.hour;
  cout << ":";
  cout << setfill('0') << setw(2);
  cout << maxDiff.min << endl;
  cout << "================================" << endl
       << endl;

  return 0;
}
