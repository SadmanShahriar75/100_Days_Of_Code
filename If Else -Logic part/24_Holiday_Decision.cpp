// 24. Holiday Decision
// Task: Decide if you can go on vacation. You need both enough money and time off from work.


#include<iostream>
using namespace std;

void  holidayDecision (string has_money, string has_time_off){
    
    if(has_money == "yes" && has_time_off == "yes"){
        cout << "You can go on vacation! " << endl;
    }else{
        cout << "You can't go on vacation. " << endl;
    }

}

int main(){
    string has_money, has_time_off;
    cout << "Do you have enough money? (yes/no):  ";
    cin >> has_money;
    for(auto& c : has_money){
        c = tolower(c);
    }

    cout << "Do you have time off from work? (yes/no):  ";
    cin >> has_time_off;
    for(auto& c : has_time_off){
        c = tolower(c);
    }

    holidayDecision (has_money, has_time_off);
    return 0;  
}