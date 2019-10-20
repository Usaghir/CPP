//============================================================================
// Name        : Task.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>     // for input and output
#include <iomanip>      // for setfill()and setw(2)
#include <vector>       // for using vectors
#include <ctime>        // for using time();
#include <cstdlib>      // for using srand() and rand();
#include <string>       // for using toupper();
using namespace std;

int main()
{
    int count =0;
    int *pntr =nullptr;
    int *tempntr;
    int a=0;
    
    cout <<"Please enter the numebr and press esc for finish";
    cin>>*pntr;
    while (a<10)
    {
        tempntr = new int[count+2];
        *tempntr = *pntr;
         delete pntr;
        pntr=tempntr;
        tempntr[count]=*pntr;
        count++;
        cin >> *pntr ;
        cout<< *pntr ;
        a++;
    }

    return 0;
}





