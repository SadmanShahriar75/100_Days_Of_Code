#include<iostream>
using namespace std;

int oddEven(int x){
    if(x%2==0){
        return true;
    }
    return false;
}

int main(){
    int num1, num2;
    cout << "Enter the number : ";
    cin >> num1;

    if (cin.fail()) {
        cout << "Invalid input" << endl;
        return 1; 
    }

    int ans = oddEven(num1);
    if(ans){
        cout << "even" << endl;
    }else{
        cout << "odd" << endl;
    }
    return 0;
    
}





