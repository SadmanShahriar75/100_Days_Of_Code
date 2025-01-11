// ৩. স্ট্রিংয়ের দৈর্ঘ্য নির্ণয়
// বর্ণনা: একটি স্ট্রিং ইনপুট নাও এবং তার দৈর্ঘ্য আউটপুট কর।
// ইনপুট উদাহরণ: programming
// আউটপুট উদাহরণ: 11

#include <iostream>
using namespace std;

int  length(string s){
    int len =0;
    for(int i=0; i<s[i]!='\0'; i++){
        len++;
    }
    return len;
}


int main(){
    string s;
    cin >> s;

    cout << length(s);

}