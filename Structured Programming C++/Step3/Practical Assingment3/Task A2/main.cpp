/*=============================================================================
 File Name   : main.cpp
 Author      : Raja Umer Saghir
 Description : This program will find the difference and print in reverse.
 
 Array exercise
 Issue
 Write a simple program as specified below:
 1. The program starts by asking a user to enter a number N (integer).
 2. The program then prompts the user N number of times to enter numbers, here
 N is the number entered by a user as specified in the step 1. The numbers
 entered in this step should be saved in an integer array of size equal to N
 3. The program then asks a user to enter another number to compare with N.
 4. The program compares numbers entered in step 2 with the number entered in
 step 3 and display how many numbers entered in step 2 are lower than the number
 entered in step 3.
 5. The program comes to end by printing the numbers entered at step 2 in the
 reverse order, i.e., last number first and the first number last.
 See the test case below, as an example program run, to understand the above
 specified
 ============================================================================*/

// Including input and output Library.
#include <iostream>

// Included for flexible addition of prefix.
using namespace std;

// Start of main function.
int main()

{
    // For first number to decide how many numbers need t add.
    int number1;
    cout << "Please enter a number: ";
    cin >> number1;
    
    // For adding numbers previously entered (N) number of times.
    int arr[number1];
    
    for (int i = 0; i < number1; i++)
    {
        cout << "number: " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    //  Adding another number to compare with previously added numbers.
    int number2;
    cout << "Please enter another number to compare with N: ";
    cin >> number2;
    
    // Comparison of the number added later with the numbers added earlier.
    int count = 0;
    for (int i = 0; i < number1; i++)
    {
        
        if (arr[i] < number2)
        {
            // To count how many numbers are lower than the number entered later.
            count++;
        }
    }
    
    // To display the comparison result.
    cout << "There are " << count << " numbers that are lower than " << number2 << endl;
    
    // For displaying the input numbers in reverse order.
    for (int j = number1; j > 0; j--)
    {
        cout << arr[j - 1] << endl;
    }
    
    cout << "\n\n-------------------------Thanks and goodbye----------------------- " << endl;
    
    return 0;
}
