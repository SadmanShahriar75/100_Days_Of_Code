// Task: Write a program that checks if the user has entered the correct password.
// Hint:
// Compare the input to a predefined password.


#include<iostream>
using namespace std;

void passValidator(string password, string mypass){
    if(mypass == password){
        cout << "Access granted!" <<endl;
    }else{
        cout << "Access denied!" << endl;
    }

}

int main(){
    string password = "secure123"; 

    string mypass; 
    cout << "Enter your password = ";
    cin >>  mypass; 

    passValidator(password, mypass);
    return 0;
}

