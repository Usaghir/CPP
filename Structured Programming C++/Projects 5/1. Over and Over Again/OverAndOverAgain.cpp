/*============================================================================
// Name        : OverAndOverAgain.cpp
// Author      : Raja Umer Saghir
// Description : Hello World in C++, Ansi-style

Issue
Write a program that reads an arbitrary number of integers from user, until 
he/she choose to stop the input by pressing “esc” key. The numbers should be
stored in a vector1 which is dynamically allocated (ie. a pointer to a vector 
space). The program shall read and handle each number in a loop, and then 
allocate new space for it, by increasing the vector one element at a time. 
The program should end by printing all the entered integers as shown below 
in the test run example. (Pay attention to the Tips below!) Take use of the 
following simplified algorithm:

initialize counter to 0
set a pointer to an integer vector to nullptr. 
read number
while numbers can be read
  reserve memory for a temporary vector, which is an element larger than the 
  old one
  copy all data from the old to the new vector – no special cases are needed 
  for the first value 
  release memory space that the old pointer was pointing to
  assign pointer (vector), the address value for the new vector
  save the number in the new larger vector
  increase counter
  read number
end
print the numbers
deallocate the vector and reset it all to 0's

Test Run
Enter integer numbers to store (Stop with ”Esc” key): 5 10 3 5 23 89 ^[2 You entered: 5 10 3 5 23 89
Tips
Normally, dynamically allocated space is not extended with only one element, but more often with a certain %-value. However, we do it in this task, only to learn the principles. You can immerse yourself of this concept in the Depth material of Step 5. There is also an example using a (relatively advanced) function for the purpose, which however should not be used in this task!
When using char or string type as stop-value – take advantage from behavior of cin-object, when performing reading-operations. For instance look at this example, where nr is an int:
while (cin >> nr) // As long as 'cin' reads numeric values, the read-operation will result in 'true'. If non-numeric
{ // value is input (for instance "Stop" or 'Q') 'cin' will fail with return value 'false', and the loop will break! // After this you could need to restore the faulty status of 'cin'-object – for tips on solving this, read course page // "Tips and tools" -> "5. Error handling" (that is, one of the quick manuals found in the right hand list)
NOTE! Don’t create any memory space until it is needed. Start with an "empty" pointer and each time a number is read from user, you create space for the value and save it.

//============================================================================*/

#include <iostream> // for input and output
#include <iomanip>  // for setfill()and setw(2)
#include <vector>   // for using vectors
#include <ctime>    // for using time();
#include <cstdlib>  // for using srand() and rand();
#include <string>   // for using toupper();
using namespace std;

int main()
{
  int count = 0;
  int *pntr = nullptr;
  int *tempntr;
  int a = 0;

  cout << "Please enter the numebr and press esc for finish";
  cin >> *pntr;
  while (a < 10)
  {
    tempntr = new int[count + 2];
    *tempntr = *pntr;
    delete pntr;
    pntr = tempntr;
    tempntr[count] = *pntr;
    count++;
    cin >> *pntr;
    cout << *pntr;
    a++;
  }

  return 0;
}
