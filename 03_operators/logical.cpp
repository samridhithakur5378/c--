#include <iostream>

using namespace std;
 int main(){
bool isstudent;
cout << "are you a student(1 for yes and 0 for no)";
cin >> isstudent;
int teaCups;
cout << "how many cups have you purchased ";
cin  >> teaCups;
if(isstudent || teaCups >15){
  cout << "you are eligible for a discount" << endl;
}else{
  cout << "you are not eligible for a discount" << endl;
}
  return 0;
 }
 ///solve chalelnegs on github during revision