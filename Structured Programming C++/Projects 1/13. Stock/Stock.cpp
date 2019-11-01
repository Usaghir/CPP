//  13. Stock
//  File: Stock.cpp
//  Summary: In this program I need to calculat Stock.

//  Created by Raja Umer Saghir on 2018-11-18.
//

// Preprocessor directives
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Proto type
void CashCalculater();

main function int main()
{
  //for repitition
  char answer;
  do
  {
    //function call
    CashCalculater();

    // For repetition.
    cout << "Want to calculate one more time? (Y/N): ";
    cin >> answer;

  } while (answer == 'Y' || answer == 'y');

  return 0;
}

// Seperate fucntion for calculatioin
void CashCalculater()

{
  // variable define
  double startInvest, invPeryear, total = 0;

  //User input
  cout << "Please entet the investment amount: ";
  cin >> startInvest;

  // for all four years percentage.
  for (int i = 1; i <= 4; i++)
  {
    cout << "Please entet the percentage change for year: " << i;
    cin >> invPeryear;
    startInvest += startInvest * (invPeryear / 100);
  }

  // For result display.
  cout << "Total is :  " << startInvest;
}
