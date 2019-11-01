/*=============================================================================
 File Name   : TextFile.cpp
 Author      : Raja Umer Saghir
 Description : Is this Task We need to Write the data to text file.
=============================================================================*/

#include <iostream> // for input and output stream
#include <fstream>  // for file input and output stream

using namespace std;

//Proto type.
bool check_no(string str);

bool check_no(string str)
{
  for (int i = 0; i < str.size(); ++i)
  {
    if (str[i] == '-')
    {
      continue;
    }
    if (str[i] >= '0' && str[i] <= '9')
    {
      continue;
    }
    return 0;
  }
  return 1;
}

// main function
int main(int args, char **argv)
{
  if (args != 2)
  {
    cout << "Wrong argument number!";
    return -2;
  }
  string path = argv[1];
  path = path + ".csv";
  ofstream output(path);
  if (!output.good())
  {
    cout << "File write error!\n";
    return -1;
  }

  while (1)
  {
    string str;
    cout << "Name (input empty line now to quit):\n";
    getline(cin, str);
    if (str.size() == 0)
    {
      break;
    }
    output << str << ",";
    str = "";
    cout << "Surname:\n";
    while (str.size() == 0)
    {
      getline(cin, str);
    }
    output << str << ",";
    number
        str = "";
    cout << "Phone number:\n";
    while (str.size() == 0)
    {
      getline(cin, str);
      if (check_no(str) == 0)
      {
        str = "";
      }
      else
      {
        number
                cout
            << "Input a valid number\n";
      }
    }
    output << str << endl;
  }
  cout << "Exiting...";
  output.close();
  cout << " File saved at " << path << "\n";
}