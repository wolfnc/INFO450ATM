//
//  main.cpp
//  Assignment 1
//
//  Created by Noah Wolf on 9/19/19.
//  Copyright © 2019 Noah Wolf. All rights reserved.
//
#include <iostream>

// std namespace makes it so we don't have to write std::cout and std:endl.
using namespace std;
//declare the function so it displays in the main function
void suntrustWelcome();

int main()
{
    //calls function
    suntrustWelcome();
    
    int amountToWithdraw = 0;
    int fiftiesDue, twentiesDue, tensDue, fivesDue, onesDue;
    char answer = 'a';
    
    //Do... While loop
    do {
        
        cout << "Please enter the dollar amount of money you would like to withdraw." << endl;
        cin >> amountToWithdraw;
        
        while (amountToWithdraw <= 0 || amountToWithdraw > 300){
            cout << "Please enter a valid amount between $1 and $300" << endl;
            break;
        }
        
        if (amountToWithdraw > 0 && amountToWithdraw <= 300) {
            
            
            cout << "Your withdraw amount is $" << amountToWithdraw << endl;
            
            // This code runs if more than $50 needs to be withdrawn
            if (amountToWithdraw >= 50) {
                
                //Divide remainder by 50 to get the total amount of 50 dollar bills to be dispensed
                fiftiesDue = (amountToWithdraw / 50);
                
                cout << "You get " << fiftiesDue << " $50 bills." << endl;
                
                //Figures out remaining amount to be withdrawn after taking out the 50 dollar bills
                amountToWithdraw %= 50;
                
            }
            
            // This code runs if more than $20 needs to be withdrawn
            if (amountToWithdraw >= 20) {
                
                //Divide remainder by 20 to get the total amount of 20 dollar bills to be dispensed
                twentiesDue = (amountToWithdraw / 20);
                
                cout << "You get " << twentiesDue << " $20 bills." << endl;
                
               //Figures out remaining amount to be withdrawn after taking out the 20 dollar bills
                amountToWithdraw %= 20;
                
            }
            
            // This code runs if more than $10 needs to be withdrawn
            if (amountToWithdraw >= 10) {
                
             //Divide remainder by 10 to get the total amount of 10 dollar bills to be dispensed
                tensDue = (amountToWithdraw / 10);
                
                cout << "You get " << tensDue << " $10 bills." << endl;
                
                //Figures out remaining amount to be withdrawn after taking out the 10 dollar bills
                amountToWithdraw %= 10;
                
            }
            
            // This code runs if more than $5 needs to be withdrawn
            if (amountToWithdraw >= 5) {
                
                //Divide remainder by 5 to get the total amount of 5 dollar bills to be dispensed
                fivesDue = (amountToWithdraw / 5);
                
                cout << "You get " << fivesDue << " $5 bills." << endl;
                
                 //Figures out remaining amount to be withdrawn after taking out the 5 dollar bills
                amountToWithdraw %= 5;
                
            }
            

            // This code runs if more than $1 needs to be withdrawn
            if (amountToWithdraw >= 1) {
                
                onesDue = amountToWithdraw;
                
                cout << "You get " << onesDue << " $1 bills." << endl;
                
                // Sets amountToWithdraw to 0
                amountToWithdraw %= onesDue;
                
            }
            
            
            // This last if statement is just to wrap things up and check to see if
            if (amountToWithdraw == 0) {
                
                cout << "Thank you for banking with Suntrust! You have $" << amountToWithdraw << " left to withdraw." << endl;
                
                cout << "Would you like to make another withdrawal?" << endl;
                
                cout << "Enter Y if so, or enter any other value to exit." << endl;
                
                cin >> answer;
                
            }
            
            else {
                cout << "Something went wrong. Please contact customer support" << endl;
                }
            }
        
        else {
            cout << "Enter Y to try again." << endl;
            cin >> answer;
            }
        
        //checks for both uppercase and lowercase characters
        } while ((answer == 'Y') || (answer == 'y'));
    
    
    return 0;
    }

void suntrustWelcome() {
    
    cout << "Welcome to Suntrust Banking!" << endl;
    
}
