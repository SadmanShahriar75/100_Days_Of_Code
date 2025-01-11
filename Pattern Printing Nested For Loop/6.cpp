#include<iostream>
using namespace std;

void pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout << j;
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
        pattern6(n);
    }
    return 0;
}