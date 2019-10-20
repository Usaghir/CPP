//  Task 1.6
//  File: PowerConsumption.cpp
//  Summary: In this program I need to keep count of per month electricity cost.

//  Created by Raja Umer Saghir on 2018-11-18.
//  Copyright © 2018 Linnaeus University. All rights reserved.

// Preprocessor directives
#include <iostream>
#include <iomanip>
using namespace std;

// Main function
int main()
{
    // For repitition
    char answer;
    
    // For repitition
    do
    {
        // Define and initialize and variables and constants.
        double prevMonthReading, currMonthReading, powerConsumption, Totalcost;
        const double ElPrice = 94.93, fixedYerlyCost = 320.00, fixedPerMonthCost = fixedYerlyCost/12.00;
        
        // For user input for the previous month reading.
        cout << "Pleae enter the previous month's reading: kWh ";
        cin >> prevMonthReading;
        
        // For user input for the current month reading.
        cout << "Pleae enter the current month's reading: kWh ";
        cin >> currMonthReading;
        
        // Calculation of the power consumption.
        powerConsumption = currMonthReading - prevMonthReading;
        
        // Calculation of the total cost in SEK.
        Totalcost = fixedPerMonthCost+(powerConsumption * ElPrice)/100.00;
        
        // For formating the numbers with two decimal points.
        cout << fixed << showpoint << setprecision(2);
        cout << "The total electricity used is: kWh "<< powerConsumption <<endl;
        cout << "The total cost of this month is: SEK "<< Totalcost <<endl;

        
        // For repetition request from user.
        cout << "Want to calculate one more time? (Y/N): ";
        cin >> answer;

    }while (answer == 'Y' || answer == 'y');
    
    return 0;
}
