// 7. Rock-Paper-Scissors
// Task: Simulate a single round of the Rock-Paper-Scissors game.
// Hint:
// Use if-else statements to determine the winner.

#include <iostream>
using namespace std;

void rockPaperScissors(string player1, string player2){
    
    if(player1==player2){
        cout<< "It's a tie!" << endl;
    }
    else if(player1 == "rock" && player2 == "scissors"  || 
            player1 == "scissors" && player2 == "paper" ||
            player1 == "paper" && player2 == "rock"){
            cout << "Player 1 wins!" << endl;
    }else{
        cout << "Player 2 wins!" << endl;
    }
}


int main() {
  string player1, player2;

  cout << "Enter plater 1 : ";
  cin >> player1;
  for(auto& c : player1){
    c = tolower(c);
  }
  
  cout << "Enter plater 2 : ";
  cin >> player2;
  for(auto& c : player2){
    c = tolower(c);
  }

  rockPaperScissors(player1, player2);
  
  return 0;
}