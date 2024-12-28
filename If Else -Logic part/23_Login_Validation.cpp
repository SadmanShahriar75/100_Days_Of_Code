// 23. Login Validation
// Task: Validate a login attempt by checking both username and password.

#include<iostream>
using namespace std;

void   loginValidation  (string username, string password){
    
    if(username == "admin" && password == "pass123"){
        cout << "Login successful! " << endl;
    }else{
        cout << "Invalid username or password." << endl;
    }

}

int main(){
    string username, password;
    cout << "Enter your username:  ";
    cin >> username;

    cout << "Enter your password:  ";
    cin >> password;

    loginValidation (username, password);
    return 0;  
}