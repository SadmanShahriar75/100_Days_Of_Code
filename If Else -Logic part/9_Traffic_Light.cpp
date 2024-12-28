// 9. Traffic Light
// Task: Simulate a traffic light system where a color (red, yellow, green) is entered, and the program outputs the appropriate action (stop, slow down, go).


#include <iostream>
using namespace std;

void trafficLight(string light){
  if(light == "red"){
    cout << "Stop!" << endl;
  }
  else if(light == "yellow"){
    cout << " slow dwon!" << endl;
  }
  else if(light == "green"){
    cout << "Go!" << endl;
  }
  else{
    cout << " invalid color" << endl;
  }

  
}


int main() {
  string light;
  cout << "Enter the traffic light color (red, yellow, green): ";
  cin >> light;

  trafficLight(light);
  return 0;
}