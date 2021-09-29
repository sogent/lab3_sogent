//
// Created by Sarah Ogent on 9/27/21.
//
#include <checkingmodule.h>
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

//FIXME: make sure the function arguments are being correctly passed
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
    double userLoanPrincipal;
    double userLoan;
    while(run){

        userInput=mainMenu();

        switch(userInput) {

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
                cout<<userCreditRating;
                userLoanTerm= getLoanMonths();
                userInterestRate= getInterestRate(userCreditRating);
                cout<<"How much would you like to borrow?"<<endl;
                cin>>userLoanPrincipal;
                userLoan =calcLoanAmount(userLoanPrincipal, userInterestRate, userLoanTerm);
                cout<<"Loan Options Review:"<<endl;
                cout<<"Interest Rate: " <<userInterestRate<<endl;
                cout<<"Principal: "<<userLoanPrincipal<<endl;
                cout<<"Loan Monthly Term: "<<userLoanTerm<<endl;
                cout<<"Your total loan amount is: $"<<setprecision(2)<<fixed<<userLoan<<endl;
                break;

            case 'Q':
                cout<< "Goodbye!"<<endl;
                run=false;
        }
    }











    return 0;
}
