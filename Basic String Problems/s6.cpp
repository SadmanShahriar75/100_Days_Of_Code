// ৬. স্ট্রিং রিপ্লেসমেন্ট
// বর্ণনা: একটি স্ট্রিং ইনপুট নাও এবং তাতে একটি নির্দিষ্ট অক্ষর পরিবর্তন কর।
// ইনপুট উদাহরণ:
// hello  
// l  
// p  
// আউটপুট উদাহরণ: heppo


#include <iostream>
using namespace std;
#include <string>

string replacement(string s, char a, char b){
    for(int i=0; i<s.length(); i++){
        if(s[i]==a){
            s[i]=b;
        }
        
    }
    return s;
}


int main(){
    string s;
    cin>> s;
    char a, b;
    cin>> a >> b;

    cout << replacement(s, a, b);

}