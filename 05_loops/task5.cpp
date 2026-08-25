//continue keyword
#include <iostream>
#include <string>

using namespace std;
int main(){

  string teaTypes[3]={ " Orange Tea","Green Tea","lemon Tea","black Tea"};
  for (int i=0; i<3; i++){
    if(teaTypes[i]== "Green Tea"){
      cout << "skipping the  " << teaTypes[i] << endl;
      continue;
    }
cout << "brewing " << teaTypes[i] << '  ...' << endl;

  }
  return 0;
}
//not working properly try again