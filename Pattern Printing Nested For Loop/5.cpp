#include<iostream>
using namespace std;

void pattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<n+1-i; j++){
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
        pattern5(n);
    }
    return 0;
}