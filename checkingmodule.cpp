//
// Created by Sarah Ogent on 9/27/21.
//
#include "checkingmodule.h"
#include <iostream>
using namespace std;

void deposit(float& userAccount, float userDeposit){
    //userAccount=userAccount+userDeposit;
    bool run =true;
    while(run) {
        cout << "How much would you like to deposit?" << endl;
        cin >> userDeposit;
        if(userDeposit < 0){
            cout << "Invalid entry. Amount must be greater than 0. Please try again"<<endl;
        } else{
            cout << "You have deposited: $" << userDeposit<<endl;
            userAccount=userAccount+userDeposit;

            break;
        }
    }
}

char mainMenu(){
    char userInput;
    bool run = true;

    while(run){
    cout << "Main Menu"<<endl;
    cout << "Please enter one of the following: "<<endl;
    cout << "(D)eposit, (W)ithdraw, (L)oan, or (Q)uit: "<<endl;
    cin >> userInput;

    if(userInput=='D'){
        return userInput;
    } else if(userInput=='W'){
        return userInput;
    } else if(userInput=='L'){
        return userInput;
    } else if(userInput=='Q'){
        run=false;
    } else{
        cout <<"Invalid entry, please try again"<<endl;
    }

    }
}

float getValue(string userInput){
    bool run =true;
    float userAmount=0;

    while(run) {
        cout << "How much would you like to deposit?" << endl;
        cin >> userAmount;
        if(userAmount < 0){
            cout << "Invalid entry. Amount must be greater than 0. Please try again"<<endl;
        } else{
            cout << "You have deposited: $" << userAmount<<endl;
            return userAmount;
        }
    }
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
            cout << "You have withdrawn: $"<<userWithdrawAmt;
            return userWithdrawAmt;
        }
    }
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

void calcWithdraw(float& accountBalance, float WithdrawAmt){
    accountBalance = accountBalance - WithdrawAmt;
}

int getLoanMonths(){
    int userLoanMonths;
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

float calcLoanAmount(float loanPrincipal, float interestRate, int loanTerm){
    float loanAmount;

    loanAmount=((loanPrincipal*(1+interestRate/12)), (loanTerm/12));

    return loanAmount;
}

void outputAccount(float& accountAmount){
    cout << "Account Summary: "<<endl;
    cout << "$"<<accountAmount<<endl;

}






