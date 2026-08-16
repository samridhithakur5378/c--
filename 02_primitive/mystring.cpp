#include <iostream>
#include <string>//string ki capabilities ko use kar skate ahin

using namespace std;

int main(){
string userTea;
int teaQuantity;

cout <<"which tea would you like to order?\n";
getline(cin,userTea);

//ask for quantity
cout << "how many cups of"<< userTea << "would you like to have?";
cin >> teaQuantity;
cout << teaQuantity;
cout <<userTea;
  return 0;
}