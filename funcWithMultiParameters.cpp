#include<iostream>
using namespace std;


int max (int num1, int num2) {
if (num1 < num2) {
    return num2;
}
else {
    return num1;
}
}

int main() {
    int first;
    cout<< "enter the first number: ";
    cin >> first;
    int second;
    cout<< "enter the second number: ";
    cin >> second;

    int result = max(first, second);
    cout << "the highest number is ";
    cout << result;

    return 0;

}
