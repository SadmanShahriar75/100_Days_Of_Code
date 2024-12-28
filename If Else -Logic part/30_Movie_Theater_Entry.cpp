
// 30. Movie Theater Entry
// Task: Allow entry to a movie only if the person is older than 18 and has a ticket.



#include<iostream>
using namespace std;

void  movieTheaterEntry  (int age, string has_ticket ){
    
    if(age > 18 && has_ticket == "yes"){
        cout << "You can enter the movie theater." << endl;
    }else{
        cout << "You cannot enter the movie theater." << endl;
    }

}

int main(){
    int age;
    cout << "Enter your age:   ";
    cin >> age;
    
    string has_ticket;
    cout << "Do you have a ticket? (yes/no):  ";
    cin >> has_ticket;
    for(auto& c : has_ticket){
        c = tolower(c);
    }

    movieTheaterEntry (age, has_ticket);
    return 0;  
}