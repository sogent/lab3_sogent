//
// Created by Sarah Ogent on 9/27/21.
//
#include "checkingmodule.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//main menu function
char mainMenu(){
    char userInput1, userInput;
    bool run=true;
    while(run) {

        cout <<right<<setw(20)<< "Main Menu" << endl;
        cout << "Please enter one of the following: " << endl;
        cout << "(D)eposit, (W)ithdraw, (L)oan, (S)ummary of Account, or (Q)uit: " << endl;

        cin >> userInput1;
        userInput= toupper(userInput1);
        if(userInput=='D'||userInput=='W'||userInput=='L'||userInput=='S'||userInput=='Q'){

            return userInput;
        } else{
            cout<<"Invalid entry, please try again"<<endl;
        }
    }
}

//obtains deposit value from user
float getValue(string userInput) {
    bool run = true;
    float userDeposit = 0;
    while (run) {
        cout << "How much would you like to deposit?" << endl;
        cin >> userDeposit;
        if (userDeposit < 0) {
            cout << "Invalid entry. Amount must be greater than 0. Please try again" << endl;
        } else {
            cout << "You have deposited: $" << setprecision(2) << fixed << userDeposit << endl;
            return userDeposit;
        }
    }
}

//updates user account to reflect any deposits
void deposit(float& userAccount, float userDeposit){
    userAccount=userAccount+userDeposit;
}

//obtains withdraw value from user, limits to within account range
float getValue(string userInput, float& upperLimit){
    float userWithdrawAmt;
    bool run=true;
    while(run)
    {
        cout << "How much would you like to withdraw?" << endl;
        cin >> userWithdrawAmt;
        if(userWithdrawAmt>upperLimit){
            cout <<"Invalid entry, withdraw amount may not exceed your bank account amount"<<endl;
            cout<<"Your current account amount is: $"<<upperLimit<<endl;
            cout <<"Please try again"<<endl;
            cout<<endl;

        } else if(userWithdrawAmt <=0){
            cout <<"Invalid entry, withdraw amount must be greater than 0"<<endl;
            cout <<"Please try again"<<endl;
            cout<<endl;
        } else{
            cout << "You have withdrawn: $"<<userWithdrawAmt<<endl;
            return userWithdrawAmt;
        }
    }
}

//updates user account to reflect any withdraws
void calcWithdraw(float& accountBalance, float WithdrawAmt){
    accountBalance = accountBalance - WithdrawAmt;
}

//obtains credit rating from user
int getCreditRating(){
    int userCreditRating;
    bool run = true;
    while(run){
        cout <<"Please enter your credit rating 300-850 (inclusive): "<<endl;
        cin >> userCreditRating;
        if(userCreditRating<300 || userCreditRating>850){
            cout << "Invalid entry, please try again"<<endl;
        } else{
            return userCreditRating;
        }
    }
}

//returns interest rate based on user credit score
float getInterestRate(int creditScore){
    float interestRate;
    if(creditScore <=500){
        interestRate = 0.05;
        return interestRate;
    } else if(creditScore > 500 && creditScore <=700){
        interestRate=0.03;
        return interestRate;
    } else if(creditScore>700){
        interestRate=0.01;
        return interestRate;
    } else if(creditScore<300){
        cout << "Invalid entry, please try again"<<endl;
    }
}

//returns loan term based on user input
int getLoanMonths(){
    float userLoanMonths;
    bool run=true;
    while(run){
        cout << "Please choose one of the following loan terms: "<<endl;
        cout << "12: 12 month term"<<endl;
        cout <<"24: 24 month term"<<endl;
        cout <<"36: 36 month term"<<endl;
        cout<<"60: 60 month term"<<endl;
        cin >> userLoanMonths;
        if(userLoanMonths==12){
            return userLoanMonths;
        } else if(userLoanMonths==24){
            return userLoanMonths;
        } else if(userLoanMonths==36){
            return userLoanMonths;
        } else if(userLoanMonths==60){
            return userLoanMonths;
        } else{
            cout << "Invalid entry, please try again"<<endl;
        }
    }
}

//calculates loan amount
double calcLoanAmount(double loanPrincipal, double interestRate, double loanTerm){
    double loanAmount;
    double baseNum = (1+interestRate/12);
    double expNum = (loanTerm/12);
    loanAmount=loanPrincipal*pow(baseNum, expNum);
    return loanAmount;
}

//outputs summary of user account
void accountSummary(float& accountAmount){
    cout << "Account Summary: "<<setw(4)<<"$"<<setprecision(2)<<fixed<<accountAmount<<endl;
    cout<<endl;
}