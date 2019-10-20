//============================================================================
// Name        : Task.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>     //for input and output
#include <iomanip>   // for setfill()and setw(2)
#include <vector>     // for using vectors
#include <ctime>     // for using time();
#include <cstdlib>     // for using srand() and rand();
#include <string>
using namespace std;

enum RSP
{
    Stone, Scissor, Paper
};



string choice(RSP comp);

int main() {


    int ComputerChoice, UserChoice, userCount=0, comCount=0;
    string  winner;
    char answer;

    RSP user, comp;
    srand((int)time(NULL));


    cout <<"STONE SCISSORS PAPPER"<<endl;
    cout <<"====================="<<endl;
    do{

        do
        {
            cout<<"Your choice (Stone=0/Scissors=1/Paper=2): ";
            cin>>UserChoice;
            user=RSP(UserChoice);
            cout<<"You choose: "<<choice(user)<<endl;
            ComputerChoice = rand()%3;
            comp=RSP(ComputerChoice);
            cout<<"Computer choose: "<<choice(comp)<<endl;

                if (user<comp)
                {
                    comCount++;
                }
                else if (user>comp)
                {
                    userCount++;
                }
                cout<<"Score (you - computer) : "<<userCount<<"-"<< comCount<<endl;
        }while((userCount<10)||(comCount<10));

        if(userCount>comCount)
            cout<<"You won with "<<userCount<<"-"<<comCount<<endl;
        else
            cout<<"Computer won with "<<userCount<<"-"<<comCount<<endl;


        // For repetition request from user.
        cout << "/nOne more time? (Y/N): ";
        cin.ignore();
        cin.get(answer);

    } while (toupper(answer) == 'Y');

    return 0;
}

string choice(RSP compuser)
{
    switch (compuser)
        case Stone:
            return "Stone";
        case Scissor:
            return "Scissor";
        case Paper:
            return "Paper";

}

