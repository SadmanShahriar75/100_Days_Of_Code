// 19. Weekend Plan
// Task: Decide if you can go on a trip.
// You can only go if the weather is sunny and you have money for the trip.


#include<iostream>
using namespace std;


void weekendPlan(string weather, int money){
    
    if(weather == "yes" and money >= 50){
        cout << "You can go on the trip!" << endl;
    }else{
        cout << "You can't go on the trip." << endl;
    }

}

int main(){
    string weather;
    cout << "Is the weather sunny? (yes/no): ";
    cin >> weather;
    for(auto& c : weather){
        c = tolower(c);
    }
  

    float money ;
    cout << "How much money do you have? ";
    cin >> money;
    
  
    weekendPlan(weather, money);
    return 0;  
}
