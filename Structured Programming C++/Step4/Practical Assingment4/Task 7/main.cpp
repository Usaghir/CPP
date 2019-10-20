/*=============================================================================
 File Name   : main.cpp
 Author      : Raja Umer Saghir
 Description : This program work as calculator.
 
 A lot of fractions
 
 Issue
 
 You will make a small ”calculator” application, that can handle the four basic
 arithmetic operations for fractions. The user shall enter the values for two
 fractions, and then get the four arithmetic operations (addition, subtraction,
 multiplication, and division) presented on the screen. A menu for choice of
 arithmetic operations should be presented to choose among the arithmetic
 operations and the user can make repeated choices.
 
 The program should have at-least four functions – one for each arithmetic
 operation, and use a structure to represent each fraction (numerator and
 denominator). The program should be able to do multiple calculations without
 restarting, and result of the arithmetic operations should be presented by
 reducing fractions to lowest terms, for example 9/6 should be reduced to 3/2,
 18/4 should be reduced to 9/2.
 ============================================================================*/

// Including libraries.

#include <iostream> // input output
#include <string>   //for upper case
#include <cstdlib>  // for using abs() function.

using namespace std;

struct Fractions //Holds data for Fractions input and output.
{
    // variable declarations
    int num1;
    int num2;
    int den1;
    int den2;
    int outNum;
    int outDen;
};

//Proto Types Declaration.
void menu(Fractions &frac);
void add(Fractions &frac);
void subtract(Fractions &frac);
void multiply(Fractions &frac);
void devide(Fractions &frac);
void fracLowTerm(Fractions &frac);

// Function to display menu for using choice regaring the arithmatic operation.
void menu(Fractions &frac)
{
    
    // In case of invalid choice.
    int choice;
    do
    {
        cout << "For adding please press: 1" << endl;
        cout << "For subtracting please press: 2" << endl;
        cout << "For multiplying please press: 3" << endl;
        cout << "For deviding please press: 4" << endl;
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                add(frac);
                break;
            case 2:
                subtract(frac);
                break;
            case 3:
                multiply(frac);
                break;
            case 4:
                devide(frac);
                break;
            default:
                cout << "Please enter the valid choice (1-4) and try again.\n";
                choice = 5;
                break;
        }
        
    } while (choice == 5);
}

// Function for addition.
void add(Fractions &frac)
{
    frac.outNum = (frac.num1 * frac.den2) + (frac.num2 * frac.den1);
    frac.outDen = frac.den1 * frac.den2;
}

// Function for subtraction.
void subtract(Fractions &frac)
{
    frac.outNum = (frac.num1 * frac.den2) - (frac.num2 * frac.den1);
    frac.outDen = frac.den1 * frac.den2;
}

//Function for multiply.
void multiply(Fractions &frac)
{
    frac.outNum = frac.num1 * frac.num2;
    frac.outDen = frac.den1 * frac.den2;
}

// Function for divide.
void devide(Fractions &frac)
{
    frac.outNum = frac.num1 * frac.den2;
    frac.outDen = frac.den1 * frac.num2;
}

//Function for reducing the fraction to lower terms.
void fracLowTerm(Fractions &frac)

{
    //For calculation of greatest commmon divisor.
    int gcd = 0;
    
    for (int i = 1; i <= abs(frac.outNum) && i <= abs(frac.outDen); i++)
    {
        
        if (frac.outNum % i == 0 && frac.outDen % i == 0)
            gcd = i;
    }
    
    //For calculating the lower numerator and denominator;
    frac.outNum /= gcd;
    frac.outDen /= gcd;
}

// Main function.
int main()
{
    
    // For repetition request from user.
    char answer;
    Fractions frac;
    do
    {
        system("clear");
        cout << "Discount" << endl;
        cout << "======" << endl
        << endl;
        
        cout << "Please enter the numerator1: ";
        cin >> frac.num1;
        cout << "Please enter the denominator1: ";
        cin >> frac.den1;
        cout << "Please enter the numerator2: ";
        cin >> frac.num2;
        cout << "Please enter the denominator2: ";
        cin >> frac.den2;
        
        menu(frac);
        
        fracLowTerm(frac);
        
        //To set the values in case of negative values of both numerator and denominator or just denominator is with minus sign.
        if (frac.outNum < 0 && frac.outDen < 0)
        {
            frac.outNum *= -1;
            frac.outDen *= -1;
        }
        else if (frac.outNum > 0 && frac.outDen < 0)
        {
            frac.outNum *= -1;
            frac.outDen *= -1;
        }
        
        //Output
        cout << frac.outNum << "/" << frac.outDen;
        
        cout << endl
        << "One more time (Y/N)? ";
        cin >> answer;
        
    } while (toupper(answer) == 'Y');
    
    cout << "\n\n-------------------------Thanks and goodbye----------------------- \n\n";
    
    return 0;
}
