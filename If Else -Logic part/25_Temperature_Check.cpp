// 25. Temperature Check
// Task: Check if the weather is ideal for a picnic. The temperature should be between 20°C and 30°C, and it should not be raining.

#include<iostream>
using namespace std;

void  temperatureCheck (int temperature, string is_raining){
    
    if(20 <= temperature <= 30 && is_raining == "no"){
        cout << "The weather is perfect for a picnic! " << endl;
    }else{
        cout << "The weather is not suitable for a picnic" << endl;
    }

}

int main(){
    int temperature;
    cout << "Enter the temperature (°C):  ";
    cin >> temperature;
    
     
    string is_raining;
    cout << "Is it raining? (yes/no):   ";
    cin >> is_raining;
    for(auto& c : is_raining){
        c = tolower(c);
    }

    temperatureCheck(temperature, is_raining);
    return 0;  
}