//  Task 1.8
//  File: ExchangeMoney.cpp
//  Summary: In this program I need to find the effitient exchange money notes for the cusotmer.

//  Created by Raja Umer Saghir on 2018-11-18.
//  Copyright © 2018 Linnaeus University. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

// Prototype
void CashCalculater();

// Main function.
int main()
{
    // For repitition
    char answer;
    do
    {
        // Function call.
        CashCalculater();
        
         // For repetition request from user.
        cout << "Want to calculate one more time? (Y/N): ";
        cin >> answer;
        
        
    }while (answer == 'Y' || answer == 'y');
    
    return 0;
}

// A seperate function for the cash notes calculations.
void CashCalculater()
{
    // Define variables.
    double totalamount, costOfGoods;
    int retAmount,SEK1000, SEK500, SEK100, SEK50, SEK20, SEK10, SEK5, SEK1;
    
    // For total amount the customer pays with decimal pints as ore.
    cout << "Pleae enter the total amount: SEK ";
    cin >> totalamount;
    
    // For total purchase with decimal as ore.
    cout << "Pleae enter the cost of the purcahsed Goods: SEK ";
    cin >> costOfGoods;
    
    // For calculation of total return amount without ore.
    retAmount = totalamount-costOfGoods;
    
    // For displaying the return amount to the cusotmer.
     cout << "The total amount the customer will get back: SEK "<<retAmount<<endl;
    
    // For the calculation of the notes.
    SEK1000=retAmount/1000;
    retAmount=retAmount%1000;
    SEK500=retAmount/500;
    retAmount=retAmount%500;
    SEK100=retAmount/100;
    retAmount=retAmount%100;
    SEK50=retAmount/50;
    retAmount=retAmount%50;
    SEK20=retAmount/20;
    retAmount=retAmount%20;
    SEK10=retAmount/10;
    retAmount=retAmount%10;
    SEK5=retAmount/5;
    retAmount=retAmount%5;
    SEK1=retAmount;
    
    
    // Outpur information of the all notes the customer should get.
    cout << "The customer will receive" <<endl;
    cout << "SEK 1000: " << SEK1000 <<endl;
    cout << "SEK 500: " << SEK500 <<endl;
    cout << "SEK 100: " << SEK100 <<endl;
    cout << "SEK 50: " << SEK50 <<endl;
    cout << "SEK 20: " << SEK20 <<endl;
    cout << "SEK 10: " << SEK10 <<endl;
    cout << "SEK 5: " << SEK5 <<endl;
    cout << "SEK 1: " << SEK1 <<endl;
}

