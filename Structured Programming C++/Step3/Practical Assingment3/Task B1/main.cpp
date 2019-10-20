/*=============================================================================
 File Name   : main.cpp
 Author      : Raja Umer Saghir
 Description : This program print the input string in reverse order.
 
 Backwards
 
 Issue
 
 The data company Games & Fun will introduce a new kids game on the market.
 They will use a technique that presents and reads text backwards. To test
 this technology they need a program that reads a string, saves it backwards
 in another string and prints the reversed string. The task will then be: Read
 a c-string, store it in reversed form within another string and print
 the reversed string. In order to take full advantage of the potential of
 c-strings, use pointer increment during the copy.
 The program should be able to test multiple texts without restarting.
 ============================================================================*/

// Included for using input output.
#include <iostream>

// Included for std:: prefix.
using namespace std;

// Main fuction

char symbol;

int main()
{
    // Variable declarations.
    int size = 100;
    char oldText[size];
    char newText[size];
    char ans;
    
    // Pointer declaration.
    char *pntr;
    
    do
    {
        cout << "Write the Text: ";
        cin.getline(oldText, size);
        
        //Assigned the pointer to point at the old text.
        pntr = oldText;
        
        // To save the text in the reverse order in the newText.
        cout << "The text backwards is: ";
        for (long i = strlen(oldText) - 1; i >= 0; i--)
        {
            newText[i] = *pntr;
            pntr++;
        }
        
        // Display the reverse text.
        cout << newText << endl;
        
        // Loop for user choice to continue without restart.
        cout << "If you want to do one more time please press (y or Y) otherwise press any other key: ";
        cin.get(ans);
        cin.ignore();
    } while (ans == 'y' || ans == 'Y');
    
    cout << "\n\n-------------------------Thanks and goodbye----------------------- " << endl;
    
    return 0;
}
