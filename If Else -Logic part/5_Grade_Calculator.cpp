// 5. Grade Calculator
// Task: Convert a percentage to a letter grade (A, B, C, D, F).
// Hint:
// Use a range of conditions.


#include<iostream>
using namespace std;

void gradeCalculator(int score){
    
    if(score >= 90){
        cout << "Grade A" << endl;
    }

    else if(score >= 80){
        cout << "Grade B" << endl;
    }
    
    else if(score >=70) {
        cout << "Grade C" << endl;
    }

    else if(score >=60) {
        cout << "Grade D" << endl;
    }

    else{
        cout << "Grade F" << endl;
    }
}

int main(){
    int score;
    cout << "Enter your score : " ;
    cin >> score;

    gradeCalculator(score);
    return 0;
}