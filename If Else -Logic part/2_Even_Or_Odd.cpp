// 2. Even or Odd
// Task: Check if a number is even or odd.
// Hint:
// Use the modulo operator %.

#include<iostream>
using namespace std;

void evenOdd(int number){
    if(number % 2 == 0){
        cout << "The number is even." << endl;
    }else{
        cout << "The number is odd." << endl;
    }
}

int main(){
    int number;
    cout << "Enter your number : " ;
    cin >> number;

    evenOdd(number);

    
}
