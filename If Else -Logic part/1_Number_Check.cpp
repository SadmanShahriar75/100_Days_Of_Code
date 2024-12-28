// 1. Number Check
// Task: Write a program that checks if a number entered by the user is positive, negative, or zero.
// Hint: Use if, elif (or else if), and else statements.

#include<iostream>
using namespace std;

void numCheck(int number){

    if(number > 0){
        cout << "The number is positive." << endl;
    }
    else if(number <0){
        cout << "The number is negative." << endl;
    }
    else{
        cout << "The number is zero." << endl;
    }
}

int main(){
    int number;
    cout << "Enter your number : " ;
    cin >> number;

    numCheck(number);
    return 0;
}
