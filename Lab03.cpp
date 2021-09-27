//
// Created by Sarah Ogent on 9/27/21.
//
#include <checkingmodule.h>
#include <iostream>
#include <string>
using namespace std;

//FIXME: make sure the function arguments are being correctly passed
int main(){

    bool run=true;
    float currentBalance=0;
    while(run){

        string userChoice;
        userChoice = mainMenu();

        if(userChoice=="D"){
          currentBalance= (userChoice);
          //update user balance


        } else if(userChoice=="W") {
            float currentAmount;
            currentAmount = getValue(userChoice);
            getValue(userChoice, currentAmount);
        }





    }











    return 0;
}
