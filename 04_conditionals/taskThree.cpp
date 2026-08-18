#include <iostream>

using namespace std;

int main(){
  int teaCups;
   double pricePerCup = 2.5 , totalPrice, discount;
cout <<"enter the number of tea cups";
cin >> teaCups;
totalPrice =pricePerCup * teaCups;
if(teaCups > 20){
  discount = 0.20;
}else if(teaCups >= 10 && teaCups <= 20){
  discount = 0.10;
}else{
  discount= 0;
}
totalPrice -= (totalPrice * discount);
cout << "total price after discout is " << totalPrice << endl;
  return 0;
}