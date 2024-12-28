// 3. Multiple Conditions
// Task: Check if a person qualifies for a loan.
// The person must have a good credit score and a steady income.

#include<iostream>
using namespace std;


void multipleConditions(int credit_score, string has_income){
    
    if(credit_score >= 700 &&  has_income == "yes"){
        cout << "You qualify for the loan!" << endl;
    }else{
        cout << "You do not qualify for the loan." << endl;
    }

}

int main(){
    int credit_score;
    cout << "Enter your credit score:   ";
    cin >> credit_score;
    
    string has_income;
    cout << "Do you have a steady income? (yes/no):  ";
    cin >> has_income;
    for(auto& c : has_income){
        c = tolower(c);
    }
  
    
    multipleConditions(credit_score, has_income);
    return 0;  
}