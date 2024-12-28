// 21. Login Attempt with Multiple Conditions
// Task: Only allow login if the user enters the correct username and the account is active.



#include<iostream>
using namespace std;


void loginAttempt (string username, string is_active){
    
    if( username == "user123" && is_active == "yes"){
        cout << "Login successful!" << endl;
    }else{
        cout << "Login failed." << endl;
    }

}

int main(){
    string username, is_active;
    cout << "Enter your username:  ";
    cin >> username;

    cout << "Is your account active? (yes/no):  ";
    cin >> is_active;
    for(auto& c : is_active){
        c = tolower(c);
    }
  

  
    loginAttempt (username, is_active);
    return 0;  
}