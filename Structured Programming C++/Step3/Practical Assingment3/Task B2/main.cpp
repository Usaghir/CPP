/*=============================================================================
 File Name   : main.cpp
 Author      : Raja Umer Saghir
 Description : This program will remove all other than 1st alphabets from the
 first name. 
 
 Name abbreviation
 
 Issue
 
 A large number of names are stored in a database. These names are saved in the
 format Firstname Lastname of type c-strings. The names occupy too much space in
 the database. An efficient algorithm needs to be evolved in order to delete all
 characters in the first name, except the first letter.
 Write a program that reads a string from user and deletes the letters as
 described above. The program should be able to test several names without
 restarting.
 NOTE - Extra help strings may not be used.
 ============================================================================*/

// Included for using input output.
#include <iostream>

// Included for std:: prefix.
using namespace std;

// Main function
int main()

{
    // variable declarations.
    typedef char *charPtr;
    charPtr firstName, lastName, fName;
    int size = 100;
    
    // Dynamic variables.
    firstName = new char[size];
    lastName = new char[size];
    fName = new char[1];
    char ans = ' ';
    
    do
    {
        
        // User input
        cout << "Please enter the name: ";
        // For input of first characters of the First name
        cin >> firstName;
        // To ignore any remaining space characters in buffer.
        cin.ignore(size, ' ');
        // For the last name input
        cin >> lastName;
        
        // Coping just first elemet in a new array.
        fName[0] = firstName[0];
        
        // Output the names as required.
        cout << "Treated name: " << fName << " " << lastName << endl;
        
        // To clear the buffer.
        cin.ignore(size, '\n');
        
        // Loop for user choice to continue without restart.
        cout << "If you want to do one more time please press (y or Y) otherwise press any other key: ";
        cin.get(ans);
    } while (ans == 'y' || ans == 'Y');
    
    // Deleting the dynamic variables to free the memory.
    delete [] lastName;
    delete [] fName;
    delete [] firstName;
    
    cout << "\n\n-------------------------Thanks and goodbye----------------------- \n\n";
    
    return 0;
}
