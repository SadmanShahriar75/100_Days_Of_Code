// ৪. শব্দ গোনা
// বর্ণনা: একটি বাক্য ইনপুট নাও এবং কতটি শব্দ আছে তা বের কর।
// ইনপুট উদাহরণ: I love programming
// আউটপুট উদাহরণ: 3

#include <iostream>
using namespace std;
#include <string>

int  wordCount(string s){
    int len = 1;
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c==' '){
            len++;
        }
    }
    return len;
}


int main(){
    string s;
   getline(cin, s);

    cout << wordCount(s);

}