// 31. Job Application
// Task: A person qualifies for a job if they have a degree and at least 2 years of experience.



#include<iostream>
using namespace std;

void jobApplication (string has_degree, int experience ){
    
    if(has_degree == "yes" && experience >= 2){
        cout << "You qualify for the job." << endl;
    }else{
        cout << "You do not qualify for the job." << endl;
    }

}

int main(){
    string has_degree;
    cout << "Do you have a degree? (yes/no): ";
    cin >> has_degree;
    for(auto& c : has_degree){
        c = tolower(c);
    }
    
    int experience;
    cout << "Enter your years of experience:  ";
    cin >> experience;
  
    jobApplication (has_degree, experience);
    return 0;  
}