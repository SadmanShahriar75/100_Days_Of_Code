#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cout << "Enter testcase : ";
    cin >> t;
    while(t--){
        int n;
        cout << "Enter the rows : " ;
        cin >> n;
        pattern1(n);
    }
    return 0;
}