#include <iostream>

using namespace std;

int main (){
int choice;
double price;
cout << "select your tea \n";
cout << "1. green tea \n";
cout << "2. black tea \n";
cout << "3. white tea \n";
cout << "enter your choice in number \n";
 cin >> choice;
switch (choice){
  case 1:
    price = 2.0;
    cout << "you selected green tea.price:"<< price << endl;
    break;
  case 2:
    price = 3.0;
    cout << "you selected black tea.price:"<< price << endl;
    break;
  case 3:
    price = 4.0;
    cout << "you selected white tea.price:"<< price << endl;
    break;
  default:
    cout << "invalid choice" << endl;
    break;
  }
  return 0;
}
//waterfall model
//still wrong again do its not working properly