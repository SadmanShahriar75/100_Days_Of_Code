// 8. Voting Eligibility
// Task: Check if a person is eligible to vote. The person must be at least 18 years old and a citizen.

#include<iostream>
using namespace std;


void  votingEligibility(int age, string is_citizen){
    
    if( age >= 18 && is_citizen == "yes"){
        cout << "You are eligible to vote." << endl;
    }else{
        cout << "You are not eligible to vote." << endl;
    }

}

int main(){
    int age;
    cout << "Enter your age :";
    cin >> age;

    string is_citizen ;
    cout << "Are you a citizen? (yes/no): ";
    cin >> is_citizen;
    for(auto& c : is_citizen){
        c = tolower(c);
    }
  
    
  
    votingEligibility(age, is_citizen);
    return 0;  
}
