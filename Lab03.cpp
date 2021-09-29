//
// Created by Sarah Ogent on 9/27/21.
//
#include <checkingmodule.h>
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    bool run=true;
    float userAccount=0;
    char userInput;
    float userDeposit;
    string getUserInput;
    float withdrawAmount;
    int userCreditRating;
    double userLoanTerm;
    double userInterestRate;
    double userInterestPercent;
    double userLoanPrincipal;
    double userLoan;
    while(run){

        userInput=mainMenu();
        toupper(userInput);

        switch(toupper(userInput)) {

            case 'D':
                userDeposit = getValue(getUserInput);
            deposit(userAccount, userDeposit);
                accountSummary(userAccount);

                break;

            case 'W':
               withdrawAmount= getValue(getUserInput, userAccount);
                calcWithdraw(userAccount, withdrawAmount);
                accountSummary(userAccount);

                break;

            case 'L':
                userCreditRating= getCreditRating();
                userLoanTerm= getLoanMonths();
                userInterestRate= getInterestRate(userCreditRating);
                cout<<"How much would you like to borrow?"<<endl;
                cin>>userLoanPrincipal;
                userLoan =calcLoanAmount(userLoanPrincipal, userInterestRate, userLoanTerm);
                userInterestPercent=userInterestRate*100;
                cout<<setw(30)<<"Loan Options Review"<<endl;
                cout<<"Interest Rate: " <<right<<setw(24)<<setprecision(1)<<userInterestPercent<<"%"<<endl;
                cout<<"Principal: "<<right<<setw(24)<<"$"<<userLoanPrincipal<<endl;
                cout<<"Loan Monthly Term: "<<setw(14)<<userLoanTerm<<" months"<<endl;
                cout<<endl;
                cout<<"Your total loan amount is: "<<setw(3)<<setprecision(2)<<fixed<<"$"<<userLoan<<endl;
                cout<<endl;
                break;
            case 'S':
                accountSummary(userAccount);
                break;
            case 'Q':
                cout<< "Goodbye!"<<endl;
                run=false;
        }
    }











    return 0;
}
