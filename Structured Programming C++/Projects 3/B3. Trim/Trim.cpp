/*=============================================================================
 File Name   : Trim.cpp
 Author      : Raja Umer Saghir
 Description : This program will clear extra spaces from a text.
 
 Trim
 
 Issue
 
 We have a problem with people frequently pressing the space key when they fill
 in information on the screen. The user sometimes begins the input with one or
 more space haracters and also ends with multiple space characters.
 We need a routine to clear these characters from a loaded string. Write a
 program that reads a string and clears it from leading and trailing spaces
 before reprinting. Use pointers and strcpy() to clear in the beginning of the
 string. Replace with ’\0’ at the end.The program should be able to test
 multiple texts without restarting.
 ============================================================================*/

// Included for using input output.
#include <iostream>

// Included for std:: prefix.
using namespace std;

// Main function.
int main()
{
  // Variables declaration.
  int size = 100;

  char inputStr[size];
  char *inputPtr;
  inputPtr = inputStr;

  char corrStr[size];
  char *corrPtr;
  corrPtr = corrStr;

  char ans;

  do
  {
    // User Input
    cout << "Please enter the text : ";
    cin.getline(inputStr, size);

    // For counting how many spaces are there in start of the string.
    int count = 0;
    for (int i = 0; inputStr[i] == ' '; i++)
    {
      count++;
    }

    // moveing the string backword by covering the spaces.
    for (int j = 0; inputStr[j] != '\0'; j++)
    {
      inputStr[j] = inputStr[j + count];
    }

    // For counting how many spaces are there at the end of the string.
    int count2 = 0;
    for (long k = strlen(inputStr); inputStr[k - 1] == ' '; k--)
    {
      count2++;
    }

    // Coping the content of the string with spaces in the end to correct string without the extra spaces in the end.
    for (long l = 0; l < (strlen(inputStr) - count2); l++)
    {
      corrStr[l] = inputStr[l];
    }

    // displaying the corret output.
    cout << "The cleared text is:" << corrStr << ".\n";

    // Loop for user choice to continue without restart.
    cout << "If you want to do one more time please press (y or Y) otherwise press any other key: ";
    cin.get(ans);
    cin.ignore();
  } while (ans == 'y' || ans == 'Y');

  cout << "\n\n-------------------------Thanks and goodbye----------------------- \n\n";

  return 0;
}
