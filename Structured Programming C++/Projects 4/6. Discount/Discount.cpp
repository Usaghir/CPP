/*=============================================================================
 File Name   : Discount.cpp
 Author      : Raja Umer Saghir
 Description : This program will calculate the discount.
 
 Discount
 
 The following program calculates what a customer will pay, depending on
 different discount rates. The input will be the amount paid by the customer.
 The output will be how big discount the customer will get (in SEK) and the
 remaining amount the customer shall pay – when the discount is drawn off.
 All output data should be rounded off to the nearest krona. Complete the
 program with what’s missing according to the comments in the code. You should
 understand what is expected to happen in the program, by analyzing the
 existing code (which must not be changed!). The different discount rates will
 be found in the table below. Amounts on the boundaries are given the higher
 discount rate.
 
 ============================================================================*/

#include <iostream> //For input and output
#include <string>   // For toupper();
#include <cmath>    // For round();
#include <iomanip>
using namespace std;

//Prototype declaration.
void load(double &sum);
// Precondition: The sum is double amount.
// Postcondition: The function load the double amount.

double discount(double sum);
// Precondition: The sum is double amount.
// Postcondition: The function calculate the discount as double percentage.

void print(double sum, double discountKr);
// Precondition: The sum is double amount and discount as well.
// Postcondition: The function print the discount as required.

// Function to load the input.
void load(double &sum)
{
    cout << "Please enter the amount paid by the customer: ";
    cin >> sum;
}

//Function to calculate the discount.
double discount(double sum)
{
    if (sum < 500)
    {
        return 0;
    }
    else if (sum >= 500 && sum < 1000)
    {
        return 5;
    }
    else if (sum >= 1000 && sum < 5000)
    {
        return 10;
    }
    else
    {
        return 15;
    }
}

// Function to display the discount and net amount.
void print(double sum, double dKr)
{
    
    cout << fixed << showpoint << setprecision(2);
    cout << "--------------------------------------\n";
    cout << "Discount         :   ....." << round(dKr) << " kr\n";
    cout << "Net sum          :   ....." << round(sum) << " kr\n";
    cout << "--------------------------------------\n";
    // Write code for the output! The result should look like run example below,
    // that is, with fixed number notation, right alignment and some padding character.
    // ( Note: with manipulators – that shall be reset to default after use! )
}

int main()
{
    double sum = 0.0, discountKr = 0.0;
    char answer;
    
    do
    {
        
        system("clear");
        cout << "Discount" << endl;
        cout << "======" << endl
        << endl;
        load(sum);
        
        // To read the input sum from user – complete this function call,
        // by writing the necessary function definition!
        
        discountKr = sum * discount(sum) / 100;
        // To calculate the discount – complete the function call ("discount(sum)")
        
        // with a function definition
        sum = sum - discountKr;
        print(sum, discountKr);
        cout << endl
        << "One more time (Y/N)? ";
        cin >> answer;
        
    } while (toupper(answer) == 'Y');
    
    return 0;
}
