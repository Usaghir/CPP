//  Task 2.5
//  File: pattern.cpp
//  Summary: In this program I need to make required pattern.

//  Created by Raja Umer Saghir on 2018-11-25.
//  Copyright © 2018 Linneaus University. All rights reserved.
//

// Preprocessor directives
#include <iostream>
using namespace std;

// Main function
int main()
{
    //For making the pattern columns
    for (int j=1;j<=8; j++)
    {
        //For making the pattern rows
        for (int i=1; i<=8; i++)
        {
            cout << "* ";
            cout << " ";
        }
    cout << endl;
        
        // For putting a space for even number of rows.
        if(j%2)
        {
        cout << " ";
        }
    
    }
    return 0;
}
