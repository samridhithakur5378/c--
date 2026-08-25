//do while first deos work then checks condition
#include <iostream>
#include <string>

using namespace std;

int main(){
  string response;
 do{
 cout << "do you want more tea? (yes/no) :";
 getline(cin, response);
 }while(response != "no" && response != "No");


  return 0;
}
//revise agin didnt quite understood