// 26. Student Scholarship Eligibility
// Task: A student is eligible for a scholarship if their GPA is above 3.5 and they are involved in extracurricular activities.


#include<iostream>
using namespace std;

void studentScholarshipEligibility (int gpa, string extracurricular ){
    
    if(gpa > 3.5 && extracurricular == "yes"){
        cout << "You are eligible for the scholarship! " << endl;
    }else{
        cout << "You are not eligible for the scholarship." << endl;
    }

}

int main(){
    float gpa;
    cout << "Enter your GPA:  ";
    cin >> gpa;
    
     
    string extracurricular ;
    cout << "Are you involved in extracurricular activities? (yes/no):   ";
    cin >> extracurricular ;
    for(auto& c : extracurricular ){
        c = tolower(c);
    }

    studentScholarshipEligibility(gpa, extracurricular );
    return 0;  
}