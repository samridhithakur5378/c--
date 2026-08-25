#include <iostream>
#include <string>

using namespace std;
int main(){

  int teaCups = 5;

  for (int i = 1 ; i <= teaCups; i++){
    cout << "brewing cup" << i << "of tea...." << endl;

  }

  cout << "outside of loop";


  return 0;
}