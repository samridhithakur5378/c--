#include <iostream>

using namespace std;

int main(){
string teaOrder;
cout << "enter your tea order";
getline(cin,teaOrder);

if (teaOrder == "Green tea"){
cout << "You ordered Green tea." << endl;
}
  return 0;
}

