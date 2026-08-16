#include <iostream>

using namespace std;
//coverting one datatype to another
int main(){
  float teaPrice =49.99;
  int roundedTeaPrice = (int) teaPrice;

  int teaQuantity = 2;
 double totalPrice = teaPrice * teaQuantity;
  cout << totalPrice << endl;
  return 0;
}