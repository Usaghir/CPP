//============================================================================
// Name        : Test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//
//  main.cpp
//  Task 5
//
//  Created by Raja Umer Saghir on 2019-03-05.
//  Copyright © 2019 Linneaus University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;


const int BUFLEN = 100;             // Max length of reading buffer

void sort(char *friendList[], int n);           // n is the amount of elements
void print(char *friendList[], int n);          // n is the amount of elements
void terminate(char *friendList[], int n);      // n is the amount of elements


const int AMOUNT = 5;

int main() {
    char* friends[AMOUNT];              // Vector with AMOUNT pcs of string pointers
    char buff[BUFLEN] = {""};           // Creates string buffer (null terminated)
    int count = 0;

    cout <<"Friends in Order"<<endl;
    cout <<"================================"<<endl;
    cout <<"Please enter the name of "<<AMOUNT<<" friends."<<endl<<endl;
    while (count < AMOUNT)                   // As long as space available in the vector
    {
        cout << "Name a friend "<<count+1<<": ";
        cin.getline(buff, BUFLEN);      // Temporary reading into string buffer

        // WRITE CODE allocating memory to the string
        friends[count] = new char[BUFLEN];
        if (friends[count] == NULL)
        {
            cout << "Error: Insufficient memory.\n";
        }

        // WRITE CODE that adds loaded name to current location in the vector
        strcpy(friends[count], buff);

        count++;

    }

    cout<<endl;
    sort(friends, count);                   // Sorts the ‘count’ first elements of the vector with string pointers
    print(friends, count);                  // Prints the ‘count’ first names
    terminate(friends, count);
    cout<<endl;

    return 0;
}

//WRITE FUNCTION that sorts the vector strings in alphabetical order!
void sort(char *friendList[], int n)
{

    int i,j;
    char *t= new char[100];
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(toupper(*friendList[i])>toupper(*friendList[j]))
            {
                strcpy(t,friendList[j]);
                strcpy(friendList[j],friendList[i]);
                strcpy(friendList[i],t);
            }
    delete[] t;
}

// WRITE FUNCTION that presents ‘n’ names from the vector on screen!
void print(char *friendList[], int n)
{
    cout<<"The sorted list is: "<<endl<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<"Friend name "<<i+1<<" is now: "<<friendList[i]<<endl;
    }
}

// WRITE FUNCTION that releases all dynamically allocated memory!
void terminate(char *friendList[], int n)
{
    for (int i = 0; i < n; i++)
    {
        delete[] friendList[i];
    };
}

