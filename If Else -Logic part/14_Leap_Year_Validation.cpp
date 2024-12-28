// 14. Leap Year Validation
// Task: Check if a year is divisible by 4 and not divisible by 100, unless divisible by 400.

#include <iostream>
using namespace std;

void leapYearValidation(int year){
  if(year%4==0 && year%100 !=0 || year%400==0){
    cout<< "It's a leap year." << endl;
  }else{
    cout<< "It's not a leap year."<< endl;
  }
}

int main() {
  int year;
  cout << "Enter a year : ";
  cin >> year;

  leapYearValidation(year);
  return 0;
}