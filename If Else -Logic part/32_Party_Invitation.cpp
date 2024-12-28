
//32. Party Invitation
// Task: You can attend a party if you are invited and the party is not canceled.



#include<iostream>
using namespace std;

void partyInvitation (string invited, string party_canceled){
    
    if(invited == "yes" && party_canceled == "no"){
        cout << "You can attend the party." << endl;
    }else{
        cout << "You cannot attend the party. " << endl;
    }

}

int main(){
    string invited, party_canceled;
    cout << "Are you invited to the party? (yes/no):  ";
    cin >> invited;
    for(auto& c : invited){
        c = tolower(c);
    }
     
    cout << "Is the party canceled? (yes/no): ";
    cin >> party_canceled;
    for(auto& c : party_canceled){
        c = tolower(c);
    }

    partyInvitation(invited, party_canceled);
    return 0;  
}