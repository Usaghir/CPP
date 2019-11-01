//  14. Interestcalculate
//  File: Interestcalculate.cpp
//  Summary: In this program I need to calculate Wind Chill effective temperature .
//
//  Created by Raja Umer Saghir on 2018-11-18.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double startInvest, invPeryear, total;

const double years = 10;

void CashCalculater();
void CashCalculater2();
void CashCalculater3();

int main()
{
  char answer;
  do
  {

    CashCalculater();
    CashCalculater2();
    CashCalculater3();

    cout << "Want to calculate one more time? (Y/N): ";
    cin >> answer;

  } while (answer == 'Y' || answer == 'y');

  return 0;
}

void CashCalculater()

{

  cout << "Please entet the investment amount: ";
  cin >> startInvest;

  cout << "Please entet the compund interest: ";
  cin >> invPeryear;
}

void CashCalculater2()

{
  total = startInvest * pow((1 + invPeryear / 100), years);
}

void CashCalculater3()

{

  cout << "Total is :  " << total;
}
