/*=============================================================================
 File Name   : main.cpp
 Author      : Raja Umer Saghir
 Description : This program will calculate and print the volume of the cube.
 
 Cubic problem
 
 Issue
 
 The small program below calculates and presents the volume of a cube with a
 certain side length. Your task is to rewrite the program so that (at least)
 three functions are used instead. The following are the requirements for the
 functions:
 
 § A function for loading data – note that it shall be without
 return value. void getSide(parameter);
 
 § A function to calculate and return the calculation result: double
 cubeVolume(parameter);
 
 § A function for printing the result. The above calculation function should be
 called from within this function: void printVolume(parameter);
 ============================================================================*/

// For input from the keyboard and output on console.
#include <iostream>

// To use the toupper of char.
#include <cctype>
using namespace std;

// Protypes
void getSide(double &);
// Precondition: The parameter is a double value of one side of cube.
// Postcondition: The function will get the side input from user and save it.

double cubeVolume(double);
// Precondition: The parameter is a double value of one side of cube.
// Postcondition: The function will return the valume of the cube.

void printVolume(double);
// Precondition: The parameter is a double value of one side of cube.
// Postcondition: The function will print the result on screen.

// A function for loading data
void getSide(double &side)
{
    cout << "Enter the side length of the cube to be computed: ";
    cin >> side;
}

// A function to calculate and return the calculation result.
double cubeVolume(double side)
{
    return side * side * side;
    ;
}

// A function for printing the result after calling the above volume calculating function.
void printVolume(double side)
{
    // Declaring and initializing the variable.
    double volume = 0.0;
    
    // Calculate volume
    volume = cubeVolume(side);
    cout << "Volume of cube is: " << volume << " volume units" << endl;
}

int main()
{
    // Declaring and initializing the variables.
    double side = 0.0;
    char answer = 'Y';
    cout << "Cubes" << endl;
    cout << "=====" << endl
    << endl;
    do
    {
        // Get side
        getSide(side);
        
        // Print volume
        printVolume(side);
        
        // For user input to continue the program without resatring.
        cout << endl
        << "One more time (Y/N)? ";
        cin >> answer;
        
    } while (toupper(answer) == 'Y');
    return 0;
}
