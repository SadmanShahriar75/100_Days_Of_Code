// ৭. স্ট্রিংয়ের প্রথম এবং শেষ অক্ষর বদলানো
// বর্ণনা: একটি স্ট্রিং ইনপুট নাও এবং প্রথম ও শেষ অক্ষর বদল কর।
// ইনপুট উদাহরণ: world
// আউটপুট উদাহরণ: dorlw


#include <iostream>
using namespace std;
#include <string>

string firstLast(string s){
    swap(s[0],  s[s.size()-1]);
    return s;
}


int main(){
    string s;
    cin>> s;
    cout << firstLast(s);

}