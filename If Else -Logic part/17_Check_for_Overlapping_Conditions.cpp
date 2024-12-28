// 7. Check for Overlapping Conditions
// Task: Check if a number is both even and divisible by 5.


#include<iostream>
using namespace std;


void overlappingConditions(int number){
    
    if(number % 2 == 0 && number % 5 == 0){
        cout << "The number is even and divisible by 5." << endl;
    }else{
        cout << "The number does not meet both conditions." << endl;
    }

}

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
  
    overlappingConditions(number);
    return 0;  
}
