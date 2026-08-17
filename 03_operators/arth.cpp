#include <iostream>

using namespace std;

int main(){
  int cups;
  double pricePerCup , totalPrice, discountedPrice;

  cout <<"enter the number of tea cups?";
  cin >> cups;

  cout <<"enter the price per cup?";
  cin >>pricePerCup;

  totalPrice =  cups*pricePerCup; 
  //apply 5% discount if total price is above 100

  if (totalPrice>100){
discountedPrice = totalPrice-(totalPrice*0.05);
cout << "dicounted price is:" << discountedPrice << endl;
  }else{
    cout << "total price is" << totalPrice <<  endl;

  }

  return 0;
}