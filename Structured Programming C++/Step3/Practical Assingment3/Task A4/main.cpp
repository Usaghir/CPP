/*=============================================================================
 File Name   : main.cpp
 Author      : Raja Umer Saghir
 Description : This program will find the gender by personal number.
 
 Man or woman?
 
 Issue
 
 Write a program that prompts a user to enter a Social Security Number (SSN) in
 the following format: YYMMDD-XXXX, e.g., 820105-1234. The hyphen (-) between
 two parts of the SSN is optional. Thus, the SSN may consist of 10 or 11
 characters. If the SSN does not meet the requirements, an error message should
 be printed and the user should be given the opportunity to enter the social
 security number again. Based on the below described rule, the program should
 be able to determine and print whether the SSN belongs to a man or a woman.
 Rule: If the second last digit in a social security number is even, the SSN
 belongs to a woman, otherwise, it belongs to a man.
 The program should be able to test multiple numbers without restarting.
 ============================================================================*/

// Included for using input output.
#include <iostream>

//  Included for using isDigit(); output.
#include <cctype>

// Included for strings.
#include <string>

//Included for std:: prefix.
using namespace std;

// Function declaration prototype.
bool validityCheck(string pNum);

//Function definations for the checking the validity of input
bool validityCheck(string pNum)

{
  // For checking the hyphen in the
  char hyp = 45;

  //Variable initialized for retruring the value as status of validity.
  bool valid = true;

  // Condition in case the input's length is less than 10.
  if (pNum.length() < 10)
  {
    valid = false;
  }

  // Condition in case the input's length is equal to 10.
  else if (pNum.length() == 10)
  {
    // For checking if every thing in input is digit.
    for (int i = 0; i < pNum.length(); i++)
    {
      if (!isdigit(pNum[i]))
      {
        valid = false;
        break;
      }
      else
      {
        valid = true;
      }
    }
  }
  // Condition in case the input's length is equal to 11.
  else if (pNum.length() == 11)
  {
    // For checking if input contain the hyphen.
    if (pNum[6] == hyp)
    {
      // For checking if first 6 characters are digits.
      for (int i = 0; i < 6; i++)
      {
        if (!isdigit(pNum[i]))
        {
          valid = false;
          break;
        }
        else
        {
          valid = true;
        }
      }
      // For checking if last 4 characters are digits.
      for (int i = 7; i < 11; i++)
      {
        if (!isdigit(pNum[i]))
        {
          valid = false;
          break;
        }
        else
        {
          valid = true;
        }
      }
    }
    else
    {
      valid = false;
    }
  }
  else
  {
    valid = false;
  }

  //Return the status of validity.
  return valid;
}

//Start of main function.
int main()
{

  //String variable for argument/parameter and input.
  string perNum;

  //For user choice to continue with programme without restarting.
  char ans;

  do
  {

    //User input.
    cout << "Please enter the social security number: ";
    cin >> perNum;

    //Calling the function and assigning the return value to isValidInput.
    bool isValidInput = validityCheck(perNum);

    //Invalid input and to prompt user for valid input.
    while (!isValidInput)
    {
      cout << "Invalid number please try again: ";
      cin >> perNum;
      isValidInput = validityCheck(perNum);
    }

    //For output the valid personal number for Women.
    if (((perNum.length() == 10) && (perNum[8] % 2 == 0)) || ((perNum.length() == 11) && (perNum[9] % 2 == 0)))
    {
      cout << "This is personal number of women. " << endl;
    }
    else
    {
      //For output the valid personal number for Men.
      cout << "This is personal number of men. " << endl;
    }

    //For user choice to continue with programme without restarting.
    cout << "If you want to do one more time please press (y or Y) otherwise press any other key: ";
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');

  cout << "\n\n-------------------------Thanks and goodbye----------------------- " << endl;

  return 0;
}
