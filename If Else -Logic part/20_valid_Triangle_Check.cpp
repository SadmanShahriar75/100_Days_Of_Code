// 20. Valid Triangle Check
// Task: Check if three sides form a valid triangle.
// The sum of any two sides must be greater than the third side.




#include<iostream>
using namespace std;


void  validTriangleCheck(int a, int b, int c){
    
    if(a + b > c && a + c > b && b + c > a){
        cout << "The sides form a valid triangle." << endl;
    }else{
        cout << "The sides do not form a valid triangle." << endl;
    }

}

int main(){
    int a, b , c;
    cout << "Enter the length of the first side: ";
    cin >> a;

    cout << "Enter the length of the second side: ";
    cin >> b;

    cout << "Enter the length of the third side: ";
    cin >> c;
    
  
    validTriangleCheck(a, b, c);
    return 0;  
}