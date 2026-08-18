#include <iostream>

using namespace std;

int main(){
  int hour;
  cout << "enter the hour in 24 hour format";
  cin >> hour;

  if(hour>= 8 && hour <=18){
    cout << "tea shop is open" << endl; 

  }else{
    cout << "tea shop is closed" << endl;
  }
}