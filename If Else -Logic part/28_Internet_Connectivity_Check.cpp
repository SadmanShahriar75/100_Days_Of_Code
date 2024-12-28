// 28. Internet Connectivity Check
// Task: Check if a user has both Wi-Fi and mobile data available for internet access.



#include<iostream>
using namespace std;

void internetConnectivity (string wifi, string mobile_data ){
    
    if(wifi == "yes" && mobile_data == "yes"){
        cout << "You have internet access via both Wi-Fi and mobile data." << endl;
    }else{
        cout << "You are not connected to both networks " << endl;
    }

}

int main(){
    string wifi, mobile_data;
    cout << "Is Wi-Fi connected? (yes/no):  ";
    cin >> wifi;
    for(auto& c : wifi){
        c = tolower(c);
    }
     
    cout << "Is mobile data turned on? (yes/no):  ";
    cin >> mobile_data;
    for(auto& c : mobile_data){
        c = tolower(c);
    }

    internetConnectivity (wifi, mobile_data );
    return 0;  
}