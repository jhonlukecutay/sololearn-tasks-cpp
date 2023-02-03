#include <iostream>
using namespace std;

int main() {

int a, b;

cout<<"Please enter the number of passengers: ";
cin>>a;

b = 50 -a%50;
cout<<"The bus will have " << b << " seats left empty.";



}
