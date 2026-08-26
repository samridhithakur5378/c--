//lambda functions
#include <iostream>
#include <string>

using namespace std;

int helloChai(){

}

int main(){

  //lambda//used in frameworks and libraries
   auto preparedChai = [](int cups){
    cout << " Preparing " << cups <<" cups of tea " << endl;

  };
  preparedChai(4);

  return 0;
}