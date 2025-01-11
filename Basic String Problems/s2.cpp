// ২. স্ট্রিং প্যালিনড্রোম চেক
// বর্ণনা: ইনপুট স্ট্রিংটি প্যালিনড্রোম কিনা তা নির্ধারণ কর।
// ইনপুট উদাহরণ: madam
// আউটপুট উদাহরণ: YES

#include <iostream>
using namespace std;

string reverse(string s){
    string su = "";
    for(int i=s.size(); i>=0; i--){
        su+=s[i];
    }
    return su;
}


int main(){
    string s;
    cin >> s;

    cout << reverse(s);

}