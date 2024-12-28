
// 34. Advanced AND Logic
// Task: Check if a person qualifies for a bank loan.
// Age should be between 25 and 60 and income should be above $40,000.



#include<iostream>
using namespace std;

void  advancedLogic (int age, float income ){
     if(25 <= age <= 60 && income > 40000){
        cout << "You qualify for the loan! " << endl;
    }else{
        cout << "You do not qualify for the loan. " << endl;
    }

}

int main(){
    int age;
    cout << "Enter your age:  ";
    cin >> age;
    
    
    float income;
    cout << "Enter your annual income:  ";
    cin >> income;
   

    advancedLogic (age, income );
    return 0;  
}