#include <iostream>
#include <string>

using namespace std;
void pourChai(int cups){
  cups = cups + 5;
  cout << " Poured cups:" << cups << endl;
}
int main(){
  int cups = 2;
  pourChai(cups);
  cout << "total cups are  " << cups << endl;

}

//read concept of 
//call by value 
//call by reference