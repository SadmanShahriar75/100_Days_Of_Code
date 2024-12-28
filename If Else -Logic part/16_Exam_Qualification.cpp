// 6. Exam Qualification
// Task: Check if a student qualifies for the next level.
// The student must score at least 50 in both math and science.

#include<iostream>
using namespace std;


void  examQualification(int math_score, int science_score){
    
    if(math_score >= 50 && science_score >= 50){
        cout << "You qualify for the next level!" << endl;
    }else{
        cout << "You need to improve your scores." << endl;
    }

}

int main(){
    int math_score, science_score;
    cout << "Enter math score: ";
    cin >> math_score;
    
    cout << "Enter science score: ";
    cin >> science_score;
    
    examQualification(math_score, science_score);
    return 0;  
}
