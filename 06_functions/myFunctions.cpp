
//basic structure of a function //here parameters are optional
//returnType functionName(parameters){
  //body
//}
//void function 

#include <iostream>
#include <string>

using namespace std;



int checkTemperature(int temperature){
  return temperature;
}
//declaration of function
//void function
void serveChai(int cups);

void makeChai(){
  cout <<"boiling water,adding tea leaves ,straining....";
}

//function overloading same function differnet parameters
void serveChai(string teaType = "  Masala Tea"){//here masala tea is a default parameter if no value is assigned then it will be given as an output when the functon is run
int cups = 4;
  cout <<"serving" << teaType << endl;
}


int main(){
 int temp = checkTemperature(50);
// cout << temp ;
// makeChai();//calling a function
 //serveChai(3);
 serveChai();
return 0;
  
}
void serveChai(int cups){
  cout << "  Serving  " << cups <<"  of chai  ";
}