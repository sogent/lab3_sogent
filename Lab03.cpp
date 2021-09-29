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
    float userAccount=0;
    char userInput;
    float userDeposit;
    string getUserInput;
    float withdrawAmount;
    while(run){

        userInput=mainMenu();
        cout << userInput;

        switch (userInput) {

            case 'D':
                userDeposit = getValue(getUserInput);
            deposit(userAccount, userDeposit);
            cout<<userAccount<<endl;

                break;

            case 'W':
               withdrawAmount= getValue(getUserInput, userAccount);
                calcWithdraw(userAccount, withdrawAmount);
                cout <<userAccount<<endl;


                break;

            case 'L':
                break;

            case 'Q':
                cout<< "Goodbye!"<<endl;
                run=false;

        }




    }











    return 0;
}
