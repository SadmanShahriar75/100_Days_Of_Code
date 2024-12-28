// 2. Password and Username Validation
// Task: Check if both the username and password are correct.

#include<iostream>
using namespace std;


void passUserValidation(string usernamae, string password){
    
    if(usernamae == "admin" && password == "secure123"){
        cout << "Access granted!." << endl;
    }else{
        cout << "Invalid username or password." << endl;
    }

}

int main(){
    string username, password;
    cout << "Enter username:  ";
    cin >> username;
    
    cout << "Enter password: ";
    cin >> password;
    
    passUserValidation(username, password);
    return 0;  
}