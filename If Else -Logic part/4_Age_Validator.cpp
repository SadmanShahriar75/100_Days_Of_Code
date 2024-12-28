// 4. Age Validator
// Task: Determine if someone is old enough to drive, vote, or both.
// Hint:
// Use comparison operators and nested if-else.


#include<iostream>
using namespace std;

void ageValidator(int age){
    
    if(age >= 18){
        cout << "You can vote and drive." << endl;
    }

    else if(age >= 16){
        cout << "You can drive but not vote.." << endl;
    }
    
    else{
        cout << "You're too young to vote or drive." << endl;
    }
}

int main(){
    int age;
    cout << "Enter your age : " ;
    cin >> age;

    ageValidator(age);
    return 0;

}