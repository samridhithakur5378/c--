 #include <iostream>
 #include <string>

 using namespace std;

 int main(){
  int teaCups;
  cout << "enter the number of teacups";
  cin >>teaCups;

  // while loop
  while(teaCups>0){
   cout << "serving a cup of tea \n" << teaCups << "remaining" << endl;
   teaCups--;
  }
  cout << " all teaCups are served" << endl;
  return 0;



 }
