//  Task 2.7
//  File: avgScores.cpp
//  Summary: In this program need to find the average score.
//
//  Created by Raja Umer Saghir on 2018-11-25.
//  Copyright © 2018 Linneaus University. All rights reserved.
//

// Preprocessor directives
#include <iostream>
#include <iomanip>
using namespace std;

// Prototype
void primeNumb();

// Main function
int main()
{
    // For the repetition.
    char answer;
    do
    {
        //function call
        primeNumb();
        cout << "\n Want to calculate ond more time (Y/N)? " << endl;
        cin >> answer;
    } while (answer == 'Y' || answer == 'y');
    return 0;
}

// A seperate function for the score calculation.
void primeNumb()
{
    // Variabels initialization
    double score, largest=0, smalest=10, average, sum=0, numOfScore=7;
    
    // A loop for score calculation.
    for (int j=1;j<=9; j++)
    {
        // For user input
        cout << "please enter the score:"<<j<<setw(5)<<" ";
        cin >>score;
        
        // For finding largest score.
        if (score > largest)
        {
            largest = score;
        }
        
        // For finding the smalest score.
        if (score < smalest)
        {
            smalest = score;
        }
        
        // For total sum of the scores.
        sum+=score;
    }
    // For calculating average after excluding the smallest and largest number.
    average=(sum-largest-smalest)/numOfScore;
    
    // For one decimal precesion.
    cout << fixed << showpoint << setprecision(1);
    cout <<"The Average is" <<average <<endl;
}
