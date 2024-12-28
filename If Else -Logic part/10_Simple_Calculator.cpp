// 10. Simple Calculator
// Task: Perform basic arithmetic based on user input.
// Ask for two numbers and an operation (+, -, *, /).

#include <iostream>
using namespace std;

void simpleCalculator(float num1, float num2, string operation){

  if(operation == "+"){
    cout << num1+num2 << endl;
  }

  else if(operation == "-"){
    cout << num1-num2 << endl;
  }

  else if(operation== "*"){
    cout << num1*num2 << endl;
  }

  else if(operation == "/"){
    if(num2 !=0){
        cout << num1/num2 << endl;
    }else{
        cout << "Error: Division by zero." << endl;
    }
  }

  else{
    cout << "Invalid operation." << endl;
  }

  
}


int main() {
  float num1, num2;
  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  string operation;
  cout << "Choose operation (+, -, *, /): ";
  cin >>  operation;

  simpleCalculator(num1, num2, operation);

  return 0;
}