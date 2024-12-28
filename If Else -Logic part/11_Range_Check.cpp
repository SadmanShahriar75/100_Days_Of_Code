// 1. Range Check
// Task: Check if a number is within a specific range (e.g., between 10 and 20).

#include<iostream>
using namespace std;


void rangeCheck(int num){
    
    if(num >= 10 && num <=20){
        cout << "The number is within the range of 10 to 20." << endl;
    }else{
        cout << "The number is outside the range." << endl;
    }

}

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    rangeCheck(num);
    return 0;  
}
