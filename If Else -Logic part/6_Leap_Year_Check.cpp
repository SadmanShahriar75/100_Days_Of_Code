// 6. Leap Year Check
// Task: Check if a year is a leap year or not.
// Hint:
// A year is a leap year if it is divisible by 4, but not divisible by 100, unless it is also divisible by 400.


#include <iostream>
using namespace std;

void leapYearCheck(int year){
  if(year%4==0 && year%100 !=0 || year%400==0){
    cout<< "Leap year" << endl;
  }else{
    cout<< "Not a leap year"<< endl;
  }
}

int main() {
  int year;
  cout << "Enter a year : ";
  cin >> year;

  leapYearCheck(year);
  return 0;
}