// ৫. স্ট্রিংয়ে ভাওয়েল কাউন্ট
// বর্ণনা: একটি স্ট্রিং ইনপুট নাও এবং কতগুলো ভাওয়েল আছে তা গুনে বের কর।
// ইনপুট উদাহরণ: education
// আউটপুট উদাহরণ: 5

#include <iostream>
using namespace std;
#include <string>

int vowelCount(string s){
    int len = 0;
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c=='a'||c=='e'||c=='i' || c=='o' || c=='u'){
            len++;
        }
    }
    return len;
}


int main(){
    string s;
    cin>> s;

    cout << vowelCount(s);

}