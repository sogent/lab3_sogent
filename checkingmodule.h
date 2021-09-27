//
// Created by Sarah Ogent on 9/27/21.
//
#include <string>
#include <iostream>
using namespace std;

#ifndef LAB3_SOGENT_CHECKINGMODULE_H
#define LAB3_SOGENT_CHECKINGMODULE_H


#endif //LAB3_SOGENT_CHECKINGMODULE_H
void deposit(float& userAccount, float userDeposit);
char mainMenu();
float getValue(string userInput);
float getValue(string userInput, float& upperLimit);
float getInterestRate(int creditScore);
void calcWithdraw(float& accountBalance, float WithdrawAmt);
int getLoanMonths();
int getCreditRating();
float calcLoanAmount(float loanPrincipal, float interestRate, int loanTerm);
void outputAccount(float& accountAmount);

