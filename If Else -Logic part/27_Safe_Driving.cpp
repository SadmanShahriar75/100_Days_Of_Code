// 27. Safe Driving Conditions
// Task: Check if it is safe to drive. The driver must not be tired and not under the influence of alcohol.


#include<iostream>
using namespace std;

void safeDriving(string is_tired, string is_drunk ){
    
    if(is_tired == "no" && is_drunk == "no"){
        cout << "It is safe to drive. " << endl;
    }else{
        cout << "It is not safe to drive. " << endl;
    }

}

int main(){
    string is_tired, is_drunk;
    cout << "Are you tired? (yes/no):   ";
    cin >> is_tired;
    for(auto& c : is_tired){
        c = tolower(c);
    }
     
    cout << "Are you under the influence of alcohol? (yes/no):   ";
    cin >> is_drunk ;
    for(auto& c : is_drunk){
        c = tolower(c);
    }

    safeDriving(is_tired, is_drunk );
    return 0;  
}