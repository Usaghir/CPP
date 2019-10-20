//  Task 2.9
//  File: sumDigit.cpp
//  Summary: In this program I need calculate the sum of digits of a number.
//
//  Created by Raja Umer Saghir on 2018-11-25.
//  Copyright © 2018 Linneaus University. All rights reserved.
//

// Preprocessor directives
#include <iostream>
#include <iomanip>
using namespace std;

// Prototype
void sumDigits();

//Main function
int main()
{
    // For repitition
    char answer;
    do
    {
        // A function call.
        sumDigits();
        
        // For repetition request from user.
        cout << "Want to calculate one more time? (Y/N): ";
        cin >> answer;
        
        
    }while (answer == 'Y' || answer == 'y');
    
    return 0;
}

// A seprate function for the sum calculation of digits of number.
void sumDigits()
{
    
    // Variable initialization
    int num;
    
    // For validity of input due to int range.
    double maxInt;
    int sum = 0;
    
    // For user input
    cout << " Enter a number : ";
    cin >> maxInt;
    
    // For input validity of int limit.
    while ((maxInt > INT_MAX) || (maxInt <= 0) )
    {
    cout << " Enter a number valid number with in int limit: ";
    cin >> maxInt;
    }
    num=maxInt;
    while ( num > 0 )
    {
        sum += num % 10;
        num /= 10;
    }
    
    // For couting the sum. 
    cout << "sum = " << sum <<endl;
}

