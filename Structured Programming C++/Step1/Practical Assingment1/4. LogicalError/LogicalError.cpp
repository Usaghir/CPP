//  4. LogicalError
//  File: LogicalError.cpp
//  Summary: In this program I need to find and correct the Logical errors.

//  Created by Raja Umer Saghir on 2018-11-18.

//-----------------------------------------------------------------------
// Object: This program has logical errors. Find and correct them.
// There are miscalculations and the program can't be stopped with 'N'.
// Document your changes with comments or in log.
//-----------------------------------------------------------------------

// Preprocessor directives

#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes
void priceCalculation();

int main()
{
  char answer;
  do
  {
    priceCalculation();
    cout << "One more time? (Y/N): ";
    cin >> answer;

    // Change 1: There should == instead of = in the first condition which is replaced.

  } while (answer == 'Y' || answer == 'y');

  return 0;
}
//-----------------------------------------------------------------
// void priceCalculation()
//
// Summary: Reads price and number of articles from user. Calculates and prints
// quantity, vat and price with vat
// Returns: -
//-----------------------------------------------------------------
void priceCalculation()
{
  // Define and initialize constants and variables
  const int RATE = 25; // tax rate in percent

  double price = 0;      // price per piece
  int nrOfArticles = 0;  // number of articles
  double rateSEK = 0;    // tax rate in SEK
  double totalPrice = 0; // price incl. tax rate

  /* Change 2: For calculation of the tax properly better approach is to calculate the rate as percentage and net price of the article so two variables more double variables are rateInPercent and netPrice are introduced. */

  double rateInPercent = RATE / 100.0;
  double netPrice = 0;

  // Read price and number of articles
  cout << "Enter the price excl. the tax rate (swedish moms): kr. "; // Change3: kr. added.
  cin >> price;
  cout << "Enter the number of articles: ";
  cin >> nrOfArticles;

  // Calculate total price and tax rate
  netPrice = nrOfArticles * price; // Change4: The netPrice should also be calculated first.

  /* Change 5: RateSEK is 25% of net price (or 20% of total price) so old previous statement is replaced with new statement (rateSEK = totalPrice * RATE;) also total statement was not even calculated yet.*/

  rateSEK = netPrice * rateInPercent;

  //totalPrice = nrOfArticles * price *(1 + RATE);
  totalPrice = netPrice + rateSEK;

  // Display result with 2 decimals
  cout << fixed << showpoint << setprecision(2);
  cout << nrOfArticles << " number of articles cost " << totalPrice << " kr. "
       << endl
       << "Of this " << rateSEK << " kr is the tax." << endl; //Change 6: rate should be removed from the end of sentence.
}
