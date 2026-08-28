#include <iostream>
#include <string>

using namespace std;

int main(){
  int chaiSales[3][7] = {
    {50,60,55,70,78,90,86},//shop 1 sales for 7 days
    {78,98,69,54,20,92,80},//shop 2 sales for 7 days
    {70,56,69,87,70,92,80}//shop 3 sales for 7 days
  };

for (int i=0; i<3; i++){
  cout<<"i am at shop 1" << i+1 << "\n";
  for (int j= 0; j < 7l; j++){
    cout << chaiSales[i][j] <<  "cups  -  ";
  }
}
}
//revise again
//weak topic
