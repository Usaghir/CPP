/*=============================================================================
 File Name   : Palindrome.cpp
 Author      : Raja Umer Saghir
 Description : This program will sort the name alphabetically.
 
 Palindrome
 
 Issue
 
 A palindrome is a word or a phrase that may be read the same way in either
 directions.(White space characters are ignored. Upper case and lower case
 characters should be equally considered – i.e. not case sensitive.) Few
 examples of palindromes are:
 
 Redder
 Madam
 Level
 Kayak
 R
 Never odd or even
 Rats live on no evil star
 
 Write a program that reads a word or phrase from the user, examines the
 word/phrase and prints if it is a palindrome or not. The program should be
 able to do multiple tests without restarting.
 ============================================================================*/

// Included for using input output.
#include <iostream>

// Included for std:: prefix.
using namespace std;

// Main function.
int main()
{
    // Required variable declarations.
    const int size = 100;
    char input[size];
    char allUppInput[size];
    char revOfInput[size];
    long lengthStr;
    char sint = 'y';
    
    // Loop for user choice to continue without restart.
    do
    {
        
        // User input
        cout << "Please enter the text: ";
        cin.getline(input, size);
        
        // For ignoring the spaces.
        int j = 0;
        for (int i = 0; i < strlen(input); i++)
        {
            if (!isspace(input[i]))
            {
                allUppInput[j] = toupper(input[i]);
                j++;
            }
        }
        
        lengthStr = strlen(allUppInput);
        
        // Saveing the reverse order of input in another array.
        int l = 0;
        for (long k = lengthStr - 1; k > -1; k--)
        {
            
            revOfInput[l] = allUppInput[k];
            l++;
        }
        
        // Comparing two input
        if (strcmp(allUppInput, revOfInput) == 0)
        {
            cout << "It is a palindrome.\n";
        }
        else
        {
            cout << "It is not a palindrome.\n";
        }
        // Loop for user choice to continue without restart.
        cout << "If you want to do one more time please press (y or Y) otherwise press any other key: ";
        cin.get(sint);
        cin.ignore();
    } while (sint == 'y' || sint == 'Y');
    
    cout << "\n\n-------------------------Thanks and goodbye----------------------- " << endl;
    
    return 0;
}
