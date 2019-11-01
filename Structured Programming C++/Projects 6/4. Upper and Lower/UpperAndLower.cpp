/*=============================================================================
 File Name   : UpperAndLower.cpp
 Author      : Raja Umer Saghir
 Description : Is this Task We need convert letter between upper and lower case
 using data from binary file.
=============================================================================*/

#include <iostream>
#include <fstream>

using namespace std;

//Proto type
bool big(char c);

//checks if the char is uppercase
bool big(char c)
{
  if (c <= 'Z' && c >= 'A')
  {
    return 1;
  }
  return 0;
}
//check if the char is lowercase
bool small(char c)
{
  if (c <= 'z' && c >= 'a')
  {
    return 1;
  }
  return 0;
}

int main()
{
  ifstream input("abcfile.dat", ios::binary); //open the file in binary mode
  if (!input.good())
  { //check if file is correct
    cout << "Error opening file abcfile.dat\n";
    return -1;
  }
  ofstream o_u("upper.txt"), o_l("lower.txt"); //stream to the upper and lowercase text files
  while (!input.eof())
  {
    string str;
    getline(input, str);
    for (int i = 0; i < str.size(); ++i)
    {
      if (big(str[i]))
      {
        o_u << str[i];
      }
      if (small(str[i]))
      {
        o_l << str[i];
      }
    }
  }
  o_l.close();
  input.close();
  o_u.close();
}