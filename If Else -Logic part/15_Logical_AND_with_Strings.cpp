// 5. Logical AND with Strings
// Task: Check if both strings are non-empty.

#include<iostream>
using namespace std;
#include<string>

void nameADD(string name1, string name2){
    
    if(!name1.empty() && !name2.empty()){
        cout << "Hello, " << name1  << " " << name2 << endl;
    }else{
        cout << "Please provide both your first and last names." << endl;
    }

}

int main(){
    string name1, name2;
    cout << "Enter your first name : ";
    getline(cin, name1); 

    cout << "Enter your last name : ";
    getline(cin, name2); 
    
    nameADD(name1, name2);
    return 0;  
}


