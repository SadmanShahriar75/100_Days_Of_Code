// ১০. স্ট্রিং অর্ডারিং
// বর্ণনা: একটি স্ট্রিং ইনপুট নাও এবং অক্ষরগুলোকে লেক্সিকোগ্রাফিক অর্ডারে সাজাও।
// ইনপুট উদাহরণ: programming
// আউটপুট উদাহরণ: aggimmnoprr


#include <iostream>
using namespace std;
#include <algorithm> 

string stringOrdering(string s){
    sort(s.begin(), s.end());
    return s;
}


int main(){
    string s;
    cin>> s;
    cout << stringOrdering(s);
}