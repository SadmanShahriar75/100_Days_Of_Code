// 22. Age Range Check
// Task: Check if a person is a teenager (age between 13 and 19).

#include<iostream>
using namespace std;


void ageRangeCheck (int age){
    
    if(age >= 13 && age <= 19){
        cout << "You are a teenager." << endl;
    }else{
        cout << "You are not a teenager." << endl;
    }

}

int main(){
    int age;
    cout << "Enter your age:   ";
    cin >> age;

    ageRangeCheck (age);
    return 0;  
}