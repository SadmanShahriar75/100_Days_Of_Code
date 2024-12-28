#include<iostream>
using namespace std;

float divTwoNum(float x, float y){
    return x / y;
}

int main(){
    int num1, num2;
    cout << "Enter number one : ";
    cin >> num1;
    if (cin.fail()) {
        cout << "Invalid input" << endl;
        return 1; 
    }
    
    cout << "Enter number two : ";
    cin >> num2;
    if (cin.fail()) {
        cout << "Invalid input" << endl;
        return 1; 
    }

    cout <<  divTwoNum(num1, num2);
    return 0;

}