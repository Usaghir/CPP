//  Task 1.12
//  File: EffectiveTemperature.cpp
//  Summary: In this program I need to calculate Wind Chill effective temperature .

//  Created by Raja Umer Saghir on 2018-11-18.
//  Copyright © 2018 Linnaeus University. All rights reserved.
//

// Preprocessor directives
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Prototype
void EffTemp();

// Main fucntion
int main()
{
    // for repetition.
    char answer;
    do
    {
        // Function call.
        EffTemp();
        
        // For repetition request from user.
        cout << "Want to calculate one more time? (Y/N): ";
        cin >> answer;
        
        
    }while (answer == 'Y' || answer == 'y');
    
    return 0;
}


// A seperate function for the calculation.
void EffTemp()

{
    // Define variables.
    int temp, windSpeed;
    double effTemp;
    
    // For user input as temerature.
    cout << "Pleas enter the temperature :  ";
    cin >> temp;
    
    // For user input as wind speed.
    cout << "Pleas enter the wind speed :  ";
    cin >> windSpeed;
    
    // For calculation.
    effTemp = 13.126667 + 0.6215*temp-13.924748*pow(windSpeed, 0.16)+0.4875195*temp*pow(windSpeed, 0.16);
    
    // to display the output.
    cout << "The effective tempurature is: " <<round(effTemp) <<endl;
    
}

