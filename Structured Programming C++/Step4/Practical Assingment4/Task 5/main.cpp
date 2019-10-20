/*=============================================================================
 File Name   : main.cpp
 Author      : Raja Umer Saghir
 Description : This program will calculate the height of child by the height of
 the parents.
 
 Heights
 
 One way to estimate the height of a child is to use the following formula,
 which uses the height of the parents:
 
 Hmale_child = ((Hmother 13/12) + Hfather) / 2
 
 Hfemale_child = ((Hfather 12/13) + Hmother) / 2
 
 Write a function that takes as input parameters the gender of the child,
 height of the mother in inches, and height of the father in
 inches, and outputs the estimated height of the child in inches. Embed
 your function in a program that allows you to test the function
 over and over again until telling the program to exit.
 
 The user should be able to input the heights in feet and inches, and the
 program should output the estimated height of the child in
 feet and inches. Use the integer data type to store the heights.
 
 Created by Raja Umer Saghir on 2019-02-28.
 Copyright © 2019 Linneaus University. All rights reserved.
 ============================================================================*/

#include <iostream>
using namespace std;

// Prototype
int heightCalculator(int, int, char);
// Precondition: The first and second parameters are int heights of mother and father.
// and third parameter is char for the gender of the child.
// Postcondition: The function will return the height of the child.

//Function calculate the height.
int heightCalculator(int Hmother, int Hfather, char gend)
{
    // Condition statement in case of the male or female.
    if (gend == 'm')
        return ((Hmother * 13 / 12) + Hfather) / 2;
    else
        return ((Hfather * 12 / 13) + Hmother) / 2;
}

// Main function
int main()
{
    // variables declarations
    int Hmother_feet, Hmother_inch, Hfather_feet, Hfather_inches, child_height;
    char gender = 'm';
    
    // For the user choice to continue calculating.
    char answer = 'Y';
    cout << "Child Heights calculator" << endl;
    
    do
    {
        // User inputs for the parents heighths and child gender.
        cout << "Please enter the height of the mother in feet: ";
        cin >> Hmother_feet;
        
        cout << "Please enter the height of the mother in inches: ";
        cin >> Hmother_inch;
        
        // conversion of the height all to inches.
        Hmother_inch += (Hmother_feet * 12);
        
        cout << "Please enter the height of the father in feet: ";
        cin >> Hfather_feet;
        
        cout << "Please enter the height of the father in inches: ";
        cin >> Hfather_inches;
        
        // conversion of the height  all to inches.
        Hfather_inches += (Hfather_feet * 12);
        
        cout << "Please enter the gender of the child (m for male and f for female): ";
        cin >> gender;
        
        // Calling the height calculation function.
        child_height = heightCalculator(Hmother_inch, Hfather_inches, gender);
        // Display the output on the screen
        cout << "The height of the child is: " << child_height / 12 << " feet " << child_height % 12 << " inches\n";
        
        // For repetition request from user.
        cout << "One more time? (Y/N): ";
        cin.ignore();
        cin.get(answer);
        
    } while (toupper(answer) == 'Y');
    
    return 0;
}
