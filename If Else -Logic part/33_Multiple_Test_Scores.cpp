// 33. Multiple Test Scores
// Task: Check if a student passed two tests. Both test scores must be above 50 to pass.



#include<iostream>
using namespace std;

void multipleTestScores (int test1, int test2 ){
    
    if(test1 > 50 && test2 > 50){
        cout << "You passed both tests!" << endl;
    }else{
        cout << "You did not pass both tests. " << endl;
    }

}

int main(){
    int test1, test2;
    cout << "Enter score for Test 1:  ";
    cin >> test1;
  
     
    cout << "Enter score for Test 2:   ";
    cin >> test2;
   
    multipleTestScores ( test1, test2);
    return 0;  
}