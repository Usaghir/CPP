//  Task 1.11
//  File: TreeDigit.cpp
//  Summary: In this program I need to calculate three digit in the number composed of.

//  Created by Raja Umer Saghir on 2018-11-18.
//  Copyright © 2018 Linnaeus University. All rights reserved.

// Preprocessor directives
#include <iostream>
#include <iomanip>
using namespace std;

// Prototype
void ThreeDigitNumber();

//Main function
int main()
{
    // For repitition
    char answer;
    do
    {
        // A function call.
        ThreeDigitNumber();
        
        // For repetition request from user.
        cout << "Want to calculate one more time? (Y/N): ";
        cin >> answer;
        
        
    }while (answer == 'Y' || answer == 'y');
    
    return 0;
}

// A seprate function for the sum calculation of three digit number.
void ThreeDigitNumber()
{
    // Define variables.
    int numb3dig, numb1, numb2, numb3, sum;
    
    // For user input
    cout << "Pleas enter the numb number:  ";
    cin >> numb3dig;
    
    // For finding three numbers.
    numb1 = numb3dig/100;
    numb2 = (numb3dig%100)/10;
    numb3 = (numb3dig%100)%10;
    
    // For displaying all three numbers.
    cout << "First number is: " << numb1 <<endl;
    cout << "2nd number is: " << numb2 <<endl;
    cout << "3rd number is: " << numb3 <<endl;
    
    // For calculating the sum three numbers.
    sum =numb1 + numb2 + numb3;
    
    // For displaying the sum of three numbers.
    cout << "The sum of numbers is " <<sum <<endl;
}

