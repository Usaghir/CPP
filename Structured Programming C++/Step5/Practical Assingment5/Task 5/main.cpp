/*=============================================================================
 File Name   : main.cpp
 Author      : Raja Umer Saghir
 Description : This program will sort the name alphabetically. 
 
 Friends in order

 Issue

 The program below asks the user to name a number of friends, then sorts the 
 names alphabetically and finally prints all the names in sorted order.
 Complete the program below, according to the instructions that are commented 
 in the code.You shall make 
 
 a 1)sort function for strings and 
 a 2)print function presenting the friend-list on screen. For correct memory 
 management, also write. 
 a 3)terminating function, which ensures that all allocated memory is returned 
 to the system. For the program solution, following requirements should be 
 applied: Memory space is to be dynamically allocated for loaded names. The 
 strings (that is, char pointers) must be stored in a vector, which is passed 
 as arameter to each function. A constant shall be defined, which specifies the
 AMOUNT of names the vector can hold. Note that no existing code may be changed
 ,only additions may be done!
 ============================================================================*/

#include <iostream> // for input and output
#include <cstring>  // for strncpy();
using namespace std;

const int BUFLEN = 100; // Max length of reading buffer

void sort(char *friendList[], int n);
// Precondition: The n is a amount of element and is integer value.
// Postcondition: The function will sort char array alphabetically.

void print(char *friendList[], int n);
// Precondition: The n is a amount of element and is integer value.
// Postcondition: The function will sort char array alphabetically.

void terminate(char *friendList[], int n);
// Precondition: The n is a amount of element and is integer value.
// Postcondition: The function will return the memory to the system.

// FUNCTION that sorts the vector strings in alphabetical order!
void sort(char *friendList[], int n)
{

  int i, j;

  //Temporary dynamic array.
  char *t = new char[100];

  for (i = 1; i < n; i++)
  {
    for (j = 0; j <= n - 1 - i; j++)
    {
      if ((strcmp((friendList[j]), (friendList[j + 1])) > 0))

      {
        strcpy(t, friendList[j]);
        strcpy(friendList[j], friendList[j + 1]);
        strcpy(friendList[j + 1], t);
      }
    }
  }
  delete[] t; //Free memory
}

//FUNCTION that present ‘n’ names from the vector on screen!
void print(char *friendList[], int n)
{
  cout << "The sorted list is: " << endl;
  cout << "===================================" << endl;
  cout << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Friend name " << i + 1 << " is now: " << friendList[i] << endl;
  }
}

// FUNCTION that releases all dynamically allocated memory!
void terminate(char *friendList[], int n)
{
  for (int i = 0; i < n; i++)
  {
    delete[] friendList[i];
  };
}

// For total number of friends need to sort the name.
const int AMOUNT = 5;

int main()
{
  char *friends[AMOUNT]; // Vector with AMOUNT pcs of string pointers
  char *Uppfriends[AMOUNT];
  char buff[BUFLEN] = {""}; // Creates string buffer (null terminated)
  int count = 0;
  cout << "===================================" << endl;
  cout << "       Friends in Order" << endl;
  cout << "===================================" << endl;
  cout << "Please enter the name of " << AMOUNT << " friends." << endl;
  cout << "===================================" << endl;
  cout << endl;

  while (count < AMOUNT) // As long as space available in the vector
  {
    cout << "Name a friend " << count + 1 << ": ";
    cin.getline(buff, BUFLEN); // Temporary reading into string buffer

    // CODE allocating memory to the string
    friends[count] = new char[BUFLEN];
    Uppfriends[count] = new char[BUFLEN];
    if (friends[count] == NULL)
    {
      cout << "Error: Insufficient memory.\n";
    }
      
    // CODE that adds loaded name to current location in the vector
    strcpy(friends[count], buff);
   
    count++;
  }
  cout << "===================================" << endl;
  sort(friends, count);      // Sorts the ‘count’ first elements of the vector with string pointers.
  print(friends, count);     // Prints the ‘count’ first names.
  terminate(friends, count); // To free the memory space.
  cout << "===================================" << endl;
  cout << endl;

  return 0;
}
