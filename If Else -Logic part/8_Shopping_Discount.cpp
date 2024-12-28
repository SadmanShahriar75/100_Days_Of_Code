// 8. Shopping Discount
// Task: Calculate the final price after applying a discount based on the total amount.
// If total >= $100, apply a 20% discount.
// If total >= $50, apply a 10% discount.
// Otherwise, no discount.


#include <iostream>
using namespace std;

void shoppingDis(float total){
  if(total >=100){
    float discount = total * 0.2;
    float final_price = total - discount;
    cout << "20% discount applied. Final price: " << final_price <<endl;
  }
  else if(total >=50){
    float discount = total * 0.1;
    float final_price = total - discount;
    cout << "10% discount applied. Final price: " << final_price <<endl;
  }
  else{
     cout << "No discount. Final price: " << total <<endl;

  }
}


int main() {
  float total;
  cout << "Enter the total price : ";
  cin >> total;

  shoppingDis(total);
  return 0;
}