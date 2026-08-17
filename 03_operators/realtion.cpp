#include <iostream>

using namespace std;

int main(){
int teaCups;
cout <<"enter your cups of tea";
cin  >> teaCups;

if ( teaCups>20){
  cout << "YOU WILL GET A GOLD BADGE";
 
}else if (teaCups>=10 && teaCups<=20){
cout << "YOU WILL GET A SILVER BADGE";
}else{
cout << "NO BADGE FOR YOU";
}

return 0;

}