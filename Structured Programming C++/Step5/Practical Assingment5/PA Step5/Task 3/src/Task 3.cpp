//============================================================================
// Name        : Task.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>	 //for input and output
#include <iomanip>   // for setfill()and setw(2)
#include <vector>	 // for using vectors
#include <ctime>	 // for using time();
#include <cstdlib>	 // for using srand() and rand();
using namespace std;

// A Structure
struct TimeType {
	int hour;
	int min;
};

// functions prototypes.
int toMinutes(TimeType timeA);
TimeType toTime(int minutes);
TimeType timeDifference(TimeType timeB, TimeType timeC);
TimeType dynamicTimes();

// A function to covert hours and minutes in just minutes.
int toMinutes(TimeType timeA) {
	return timeA.hour * 60 + timeA.min;
}

// A function to convert minutes to Hours and minutes.
TimeType toTime(int minutes) {
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

	// In Finding total minutes for different values of timeB and TimeC;
	if(totMinC>totMinB)
	diffMin = totMinC - totMinB;
	else if ((totMinC<totMinB))
	diffMin = totMinB - totMinB;
	else
		diffMin=0;

	diffHour = diffMin / 60;
	diffMin %= 60;
	diff.hour = diffHour;
	diff.min = diffMin;

	return diff;
}

// A function to provide the time difference of 200 different times.
TimeType dynamicTimes() {
	TimeType MintHours;	// A struct to keep the time data in minutes and hours.
	vector<TimeType> times;				// A vector to keep the 200 structs.
	int totMints[200], minMints, maxMints;

	// To generate random number via seed of clock.
	srand(time(NULL));

	//Loop to iterate through all the the 200 structs and array of minutes to find min and max time.
	for (int i = 0; i < 200; i++) {

		//For random time posts.
		MintHours = {(rand()% 25),(rand()% 60)};
		times.push_back(MintHours);
		totMints[i] = toMinutes(MintHours);
		minMints=totMints[0];

		if(totMints[i] < minMints)	// For finding minimum minutes or time.
		{
			minMints=totMints[i];
		}
		maxMints=totMints[0];

		if(totMints[i] > maxMints)	// For finding maximum minutes or time.
		{
			maxMints=totMints[i];
		}
	}

// return of the time difference after converting minutes to time.
	return timeDifference(toTime(minMints), toTime(maxMints));

}

// Main function.
int main()

{
	int minutes;
	TimeType timeA = { 10, 15 };
	minutes = toMinutes(timeA);			//call to function.
	cout << minutes << " minutes" << endl; // output

	minutes = 124;
	TimeType time = toTime(minutes);   //call to function.

	cout << setfill('0') << setw(2);
	cout << time.hour;
	cout << ":";
	cout << setfill('0') << setw(2);
	cout << time.min << endl;

	TimeType timeB = { 10, 30 }, timeC = { 13, 20 }, difference;
	difference = timeDifference(timeB, timeC);

	cout << setfill('0') << setw(2);
	cout << difference.hour;
	cout << ":";
	cout << setfill('0') << setw(2);
	cout << difference.min << endl;

	TimeType maxDiff = dynamicTimes();

	cout << setfill('0') << setw(2);
	cout << maxDiff.hour;
	cout << ":";
	cout << setfill('0') << setw(2);
	cout << maxDiff.min << endl;

	return 0;
}
