//
// Created by Sarah Ogent on 9/27/21.
//
#include "checkingmodule.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

char mainMenu(){
    char userInput;
    bool run=true;
    while(run) {
        cout << "Main Menu" << endl;
        cout << "Please enter one of the following: " << endl;
        cout << "(D)eposit, (W)ithdraw, (L)oan, or (Q)uit: " << endl;
        cin >> userInput;
        if(userInput=='D'||userInput=='W'||userInput=='L'||userInput=='Q'){
            return userInput;
        } else{
            cout<<"Invalid entry, please try again"<<endl;
        }

    }
}

float getValue(string userInput){
    bool run =true;
    float userDeposit;
    while(run) {
        cout << "How much would you like to deposit?" << endl;
        cin >> userDeposit;
        if(userDeposit < 0){
            cout << "Invalid entry. Amount must be greater than 0. Please try again"<<endl;
        } else{
            cout << "You have deposited: $" << userDeposit<<endl;
            cout <<endl;
            return userDeposit;
        }
    }
}

void deposit(float& userAccount, float userDeposit){
    userAccount=userAccount+userDeposit;
}

float getValue(string userInput, float& upperLimit){
    float userWithdrawAmt;
    bool run=true;
    while(run)
    {
        cout << "How much would you like to withdraw?" << endl;
        cin >> userWithdrawAmt;
        if(userWithdrawAmt>upperLimit){
            cout <<"Invalid entry. Withdraw amount may not exceed your bank account amount."<<endl;
            cout <<"Please try again"<<endl;
        } else if(userWithdrawAmt <=0){
            cout <<"Invalid entry. Withdraw amount must be greater than 0."<<endl;
            cout <<"Please try again"<<endl;
        } else{
            cout << "You have withdrawn: $"<<userWithdrawAmt<<endl;
            return userWithdrawAmt;
        }
    }
}

void calcWithdraw(float& accountBalance, float WithdrawAmt){
    accountBalance = accountBalance - WithdrawAmt;
}

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

int getCreditRating(){
    int userCreditRating;
    bool run = true;
    while(run){
        cout <<"Please enter your credit rating (300-850): "<<endl;
        cin >> userCreditRating;
        if(userCreditRating<300 || userCreditRating>850){
            cout << "Invalid entry, please try again"<<endl;
        } else{
            return userCreditRating;
        }
    }
}

double calcLoanAmount(double loanPrincipal, double interestRate, double loanTerm){
    double loanAmount;
    double baseNum = (1+interestRate/12);
    double expNum = (loanTerm/12);
    loanAmount=loanPrincipal*pow(baseNum, expNum);
    return loanAmount;
}

void accountSummary(float& accountAmount){
    cout << "Account Summary: "<<endl;
    cout << "$"<<setprecision(2)<<fixed<<accountAmount<<endl;
    cout<<endl;
}






