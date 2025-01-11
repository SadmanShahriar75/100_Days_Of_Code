// ৯. স্ট্রিংয়ে সংখ্যা বের করা
// বর্ণনা: একটি স্ট্রিং ইনপুট নাও এবং তাতে কতগুলো সংখ্যা আছে তা বের কর।
// ইনপুট উদাহরণ: abc1234xyz
// আউটপুট উদাহরণ: 4


#include <iostream>
using namespace std;
#include <string>

int countNum(string s){
    int count = 0;
    for(int i=0; i<s.size(); i++){
        char c = s[i];
        if(48<=c && c<=57){
            count++;
        }
    }

    return count;
}


int main(){
    string s;
    cin>> s;
    cout << countNum(s);

}