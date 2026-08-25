//nested loop
#include <iostream>
#include <string>

using namespace std;
int main(){
string teaTypes[5] = {"Oolong tea","Orange tea","Green tea","Brown tea","Black tea"};

for(int i=0;i<5;i++){
  cout << "brewing"<< teaTypes[i] <<"....." << endl;
  for(int j=1; j<3; j++){
    cout << "Brewing " << j << "cup of " << teaTypes[i] << endl;
  }
 
}

  return 0;
}