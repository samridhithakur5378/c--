#include <iostream>
#include <string>

using namespace std;
void pourChai(int &cups){//to make call by reference we add & sign
  cups = cups + 5;
  cout << " Poured cups:" << cups << endl;
}
int main(){

  int cups = 2;
  pourChai(cups);
  cout << "total cups are  " << cups << endl;

}

// scope {} scope ke andar declare kiya hua uske bahar use nahin ho skta
//global avriable jos cope ke bahar hai usko koi bhi use kar sakta ahi