// 29. Product Purchase Validation
// Task: A customer can purchase a product if they have a valid membership and sufficient balance.




#include<iostream>
using namespace std;

void productPurchaseValidation (string membership, float balance ){
    
    if(membership == "yes" && balance >= 50){
        cout << "You can purchase the product." << endl;
    }else{
        cout << "You cannot purchase the product. " << endl;
    }

}

int main(){
    string membership;
    cout << "Do you have a valid membership? (yes/no):  ";
    cin >> membership;
    for(auto& c : membership){
        c = tolower(c);
    }
     
    float balance;
    cout << "Enter your account balance:   ";
    cin >> balance;
    

    productPurchaseValidation (membership, balance );
    return 0;  
}