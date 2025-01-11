// ১. স্ট্রিং রিভার্স
// বর্ণনা: একটি স্ট্রিং ইনপুট হিসেবে নাও এবং সেটি উল্টিয়ে আউটপুট কর।
// ইনপুট উদাহরণ: hello
// আউটপুট উদাহরণ: olleh

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