/*=============================================================================
 File Name   : Encryption.cpp
 Author      : Raja Umer Saghir
 Description : This program will encrypts the text.
 
 Encryption
 
 Write a program that asks for a text and encrypts it by replacing each
 character with the character placed three steps further on in the alphabet.
 Use the English alphabet, which consists of the characters 'a' - 'z'. The
 program should print the encrypted string and the encryption should be done
 in a function according to the following function prototype:
 
 char *encrypt(char *pEncryptedText, const char *pText);
 
 Here pText is the c-string to be encrypted and pEncryptedText is the string
 where the encrypted text is saved. As can be seen from the prototype, the
 original text should be kept unmodified. The return value shall be a pointer to
 the encrypted text.
 
 Guidance:
 • a is replaced with d, and so on until... z, which is
 replaced with c (when the alphabet "ends" – start over from the beginning)
 • It’s not that difficult to handle 'A' - 'Z' in the same way. Encrypt these
 too it if you want to!
 ============================================================================*/

#include <iostream>
using namespace std;

//Prototype
char *encrypt(char *pEncryptedText, const char *pText);
// Precondition: The first parameter is pointer of the text where encrypted text
// will be saved and second is pointer to the text which need to be encrypted.
// Postcondition: The function will return encrypted text.

// Function to encrypt the text
char *encrypt(char *pEncryptedText, const char *pText)
{
  // Loop to iterate throught all the indexes of the user input.
  for (int i = 0; i <= strlen(pText); i++)
  {
    // Encryption in case of last three alphabets or space character in user inout (C-string) the text.
    if ((pText[i]) == 'x')
      pEncryptedText[i] = 'a';
    else if ((pText[i]) == 'y')
      pEncryptedText[i] = 'b';
    else if ((pText[i]) == 'z')
      pEncryptedText[i] = 'c';
    else if ((pText[i]) == 'X')
      pEncryptedText[i] = 'A';
    else if ((pText[i]) == 'Y')
      pEncryptedText[i] = 'B';
    else if ((pText[i]) == 'Z')
      pEncryptedText[i] = 'C';
    else if ((pText[i]) == ' ')
      pEncryptedText[i] = ' ';
    else
      // Encryption in case of any alphabet other than last three alphabets.
      pEncryptedText[i] = char(int(pText[i] + 3));
  }
  // Return the encrypted text.
  return pEncryptedText;
}

// Main function
int main()
{
  // variables declarations
  int size = 1000;
  char input[size];
  const char *pText;
  pText = input;
  char output[size];
  char *pEncryptedText;
  pEncryptedText = output;

  // For the repetition.
  char answer = 'Y';
  cout << "Encryption" << endl;
  cout << "==========\n\nPlease Enter to start: " << endl
       << endl;

  // For the repetition.
  do
  {
    cin.ignore(size, '\n');
    // insert code here...
    cout << "Please enter the input: ";
    cin.getline(input, size);

    //Display the output on the screen
    cout << (encrypt(pEncryptedText, pText));
    cout << endl;
    // For repetition request from user.
    cout << "One more time? (Y/N): ";
    cin.get(answer);

  } while (toupper(answer) == 'Y');

  cout << "\n\n-------------------------Thanks and goodbye----------------------- \n\n";

  return 0;
}
