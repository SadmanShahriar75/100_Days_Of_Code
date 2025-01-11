// ৮. ক্যাপিটাল লেটার কাউন্ট
// বর্ণনা: একটি স্ট্রিং ইনপুট নাও এবং এতে থাকা বড় হাতের অক্ষরের সংখ্যা বের কর।
// ইনপুট উদাহরণ: HeLLoWoRLd
// আউটপুট উদাহরণ: 6



#include <iostream>
using namespace std;
#include <string>

int countCapital(string s){
    int count = 0;
    for(int i=0; i<s.size(); i++){
        char c = s[i];
        if(65<=c && c<=90){
            count++;
        }
    }

    return count;
}


int main(){
    string s;
    cin>> s;
    cout << countCapital(s);

}