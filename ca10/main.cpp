//
//  main.cpp
//  ca10
//
//  Created by Andrea d Cazares on 9/15/24.
//

#include <iostream>
#include <cmath>
using namespace std;
float commissionCalc(float userInput);
int main(){
    
    float userInput;

    cout << "Please enter the amount you sold in order to calculate commission \n";
    cin >> userInput;
    float commission = commissionCalc(userInput);
    cout << "Your commission is: " << commission << endl;

    return 0;
}

float commissionCalc(float userInput){

    if (userInput < 10000){
       return userInput * .10;
    }
    else if (userInput >= 10000 && userInput < 15000){
        return userInput * .15;
    }
    else
    return userInput * .20;
}
