
/*=============================================================================
 File Name   : Date.cpp
 Author      : Raja Umer Saghir
 Description : This program will find the leap year and date. 
 
 Date functions
 
 This application is a “1-3 points task” with three steps, a - c, each step 
 having one point.It is up to you either complete all the three steps or just 
 the first one or two steps. However, the steps must be performed in the order
 a to c, as each subsequent program part is built on the previous one.
 
 Step a)
 Write a program that reads a year, and investigate whether this year is a leap
 year or not. The investigation should be put in a function leapYear(), which
 takes the year (integer) as an argument and returns true or false depending 
 on the outcome. No printing may be done in the function, which is to be called 
 by the main program as follows:
 
 Step b)
 Complement the program in step a) with the function int 
 daysInMonth(int year, int month); which returns the number of days in a given 
 month. Year and month are sent as arguments to the function. The function 
 leapYear() above should be used to find if it’s a leap year or not to compute 
 number of days for the month of February.
 
 Issue c)
 Write a function tomorrow() which, given a date as an integer (via parameter) 
 on the form 20030401, returns the date for tomorrow on the same form. Change
 the main application to get a dialogue according to the test case below.
 
 ============================================================================*/

#include <iostream> // input output
#include <string>   // toupper();
using namespace std;

// Function prototypes -- Declarations
bool leapYear(int year);
int daysInMonth(int year, int month);
int tomorrow(int date);

//Function definition to investigate whether year in the parameter is a leap year and return boolean true or false.
bool leapYear(int year)
{
  if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
    return true;
  else
    return false;
}

//Function definition which take parameters year and month returns the number of days in a given month using leapYear() funcion.
int daysInMonth(int year, int month)
{
  switch (month)
  {
  case 1:
    return 31;
    break;
  case 2:
  {
    if (leapYear(year)) // calling he leapYear() to check if the days in month of February.
      return 29;
    else
      return 28;
  }
  break;
  case 3:
    return 31;
    break;
  case 4:
    return 30;
    break;
  case 5:
    return 31;
    break;
  case 6:
    return 30;
    break;
  case 7:
    return 31;
    break;
  case 8:
    return 31;
    break;
  case 9:
    return 30;
    break;
  case 10:
    return 31;
    break;
  case 11:
    return 30;
    break;
  default:
    return 31;
  }
}
// Function definition to check calculate the next date.
int tomorrow(int date)
{
  int year, month, day;
  year = date / 10000;
  month = date / 100 % 100;
  day = date % 100;

  // In case the day in the date in the input is last day of the month.
  if (day == daysInMonth(year, month))
  {
    day = 1;
    if (month == 12) // in case the date is last is the last day in last month(31/12) of the year.
    {
      month = 1;
      year++;
    }
    else
    {
      month++; // in case the just day in the date is last day of the a month but, month is not last.
    }
  }
  else
    day++; // in case of all the dates in which day is not last day of the month.

  return (year * 10000) + (month * 100) + day; // Return next date after calculation.
}

// Main function.
int main()
{

  // variable declaration.
  char answer;
  int date;

  do
  {

    system("clear"); //To clear the screen
    cout << "Tomorrow Date" << endl;
    cout << "=============" << endl
         << endl;

    cout << "Please enter the date: "; // for User input
    cin >> date;

    cout << "tomorrow date is :" << tomorrow(date); // Output

    cout << endl
         << "One more time (Y/N)? ";
    cin >> answer; // For user choice to restart wihout turing off.

  } while (toupper(answer) == 'Y');

  cout << "\n\n-------------------------Thanks and goodbye----------------------- \n\n";

  return 0;
}
