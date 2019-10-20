//  Task 1.5
//  File: Temperature.cpp
//  Summary: In this program I need to convert temperature from Fohrenheit to Celcious.

//  Created by Raja Umer Saghir on 2018-11-18.
//  Copyright © 2018 Linnaeus University. All rights reserved.

// Preprocessor directives
#include <iostream>
#include <iomanip>
using namespace std;

// Main function
int main()
{
    // For the repetition.
    char answer;
    
    // For the repetition.
    do
    {
        // Define and initialize and variables
        double tempInFarhenheit, tempInCelcius;
        
        // For user input
        cout << "Pleae enter the temperature in Farhenheit: ";
        cin >> tempInFarhenheit;
        
        // For conversion from Fohrenheit to Celcious.
        tempInCelcius = (tempInFarhenheit-32)/1.8;
        
        // For formating the numbers with one decimal points.
        cout << fixed << showpoint << setprecision(1);
        cout << "temperature in Celcious is: "<< tempInCelcius <<endl;
        
        // For repetition request from user.
        cout << "One more time? (Y/N): ";
        cin >> answer;
        
    }while (answer == 'Y' || answer == 'y');
    
    return 0;
}
