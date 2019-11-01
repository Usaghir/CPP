/*=============================================================================
 File Name   : ReadFromTextFile.cpp
 Author      : Raja Umer Saghir
 Description : Is this Task We need to read the data from text file.
=============================================================================*/

#include <iostream> // for input and output stream
#include <fstream>  // for writting and reading file

using namespace std;

// main function
int main()
{
  ifstream input("integers.txt");
  if (!input.good())
  {
    cout << "Failed to open the file integers.txt\n";
    return -1;
  }
  int n = 0, max_t = 0;
  int sum = 0;
  while (!input.eof())
  {
    int x;
    input >> x;
    max_t = max(max_t, x);
    sum += x;
    n++;
  }

  input.close();
  cout << "Sum: " << sum << endl;
  cout << "Mean value: " << double(sum) / n << endl;
  cout << "Max: " << max_t << endl;
}