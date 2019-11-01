//  4. Table
//  File: Table.cpp
//  Summary: In this program create a table.

//
//  Created by Raja Umer Saghir on 2018-11-25.

// Preprocessor directives
#include <iostream>
#include <iomanip>
using namespace std;

// Main function
int main()
{
  // For table headings.
  cout << "multiplication Table " << endl;
  cout << "======================" << endl;

  // For creating columns.
  cout << setw(5) << "n" << setw(10) << "10*n" << setw(10) << "100*n" << setw(10) << "1000*n" << endl;
  cout << "------------------------------------" << endl;

  // To perform the task according to instructions.
  for (int n = 1; n <= 15; n++)
  {
    cout << setw(5) << n << setw(10) << 10 * n << setw(10) << 100 * n << setw(10) << 1000 * n << endl;
  }
  cout << "------------------------------------" << endl;
  return 0;
}
