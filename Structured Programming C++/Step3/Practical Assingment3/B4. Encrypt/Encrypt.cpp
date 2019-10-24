/*=============================================================================
 File Name   : Encrypt.cpp
 Author      : Raja Umer Saghir
 Description : This program will generate mitray code.
 
 Military language
 
 Issue
 
 The military services often create abbreviations of various terms. As it could
 be hard to remember how to create good abbreviations, your task is to write a
 program that prompts user to enter a word and prints an abbreviation for the
 word according to below described
 
 rules:
 
 1. The abbreviation should be created by keeping only the consonants in the
 word.
 2. Double consonants should be treated as a single consonant (e.g. kk ->k).
 3. For words having more that 5 consonants, create an abbreviation by keeping
 the first three and the last two consonants.
 4. If a word contains 5 or less than 5 consonants, use all the consonants
 contained in the ord. The program should be able to do multiple tests without
 restarting.
 ============================================================================*/
#include <iostream>
using namespace std;

// Functions declaration prototypes
bool isConson(char);
char *removeDuplicate(char, long);

// Function to check if the alphabets are consonats.
bool isConson(char Alphabet)
{
  switch (Alphabet)
  {
    {

    case 'b':
    case 'B':
    case 'c':
    case 'C':
    case 'd':
    case 'D':
    case 'f':
    case 'F':
    case 'g':
    case 'G':
    case 'h':
    case 'H':
    case 'j':
    case 'J':
    case 'k':
    case 'K':
    case 'l':
    case 'L':
    case 'm':
    case 'M':
    case 'n':
    case 'N':
    case 'p':
    case 'P':
    case 'q':
    case 'Q':
    case 'r':
    case 'R':
    case 's':
    case 'S':
    case 't':
    case 'T':
    case 'V':
    case 'v':
    case 'w':
    case 'W':
    case 'x':
    case 'X':
    case 'Z':
    case 'z':

      return true;
      break;
    }
  default:
  {
    return false;
    break;
  }
  }
}

// Function to remove any duplicates from the input.
char *removeDuplicate(char cons[], long siz)
{
  // Dynamic array to remove the duplicates.
  char *remDupArr = new char[siz];

  // Used as index in string after removing double.
  int index = 0;

  for (int i = 0; i < siz; i++)
  {
    if (cons[i] != cons[i + 1])
    {
      remDupArr[index] = cons[i];
      index++;
    }
  }
  return remDupArr;
}

// Main function
int main()
{

  // variable declaration.
  long size = 100;
  char userInput[size];
  char ConsNoDuplic[size];

  typedef char *d;
  char ans;
  char abbMorfive1[size];
  char abbMorfive2[size];

  do
  {
    d Conson;
    // Dynamic variable declaration.
    Conson = new char[size];

    // For user input.
    cout << "Please enter the terms: ";
    cin >> userInput;

    int j = 0;

    // Filtering for consonants.
    for (int i = 0; i < strlen(userInput); i++)
    {
      if (isConson(userInput[i]))
      {
        Conson[j] = userInput[i];
        j++;
      }
    }

    // Copying String without consonants and without double characters in new string.
    strcpy(ConsNoDuplic, removeDuplicate(Conson, size));

    // Print complete string in case the input is five or less
    if (strlen(ConsNoDuplic) <= 5)
    {
      cout << "The abbreviation of the input term is: " << ConsNoDuplic << endl;
    }

    // Print in case the string more than five charaters.
    else
    {
      // For printing first three letters.
      for (int k = 0; k < 3; k++)
      {
        abbMorfive1[k] = ConsNoDuplic[k];
      }

      long o = strlen(ConsNoDuplic);
      // For printing last two letters.
      for (long m = 0; m < 2; m++)
      {
        abbMorfive2[m] = ConsNoDuplic[o - 2 + m];
      }

      // Output in the first three and last two letters.
      cout << "The abbreviation of the input term is: " << abbMorfive1 << abbMorfive2 << "\n";
    }
    // clearing any buffer of characters.
    cin.ignore(size, '\n');

    // Loop for user choice to continue without restart.
    cout << "If you want to do one more time please press (y or Y) otherwise press any other key: ";
    cin.get(ans);

  } while (ans == 'y' || ans == 'Y');

  // Good bye message.
  cout << "\n\n-------------------------Thanks and goodbye----------------------- \n\n";
  return 0;
}
