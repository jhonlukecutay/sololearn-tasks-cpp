#include<iostream>
using namespace std;

int main() {
    cout << "TICKET DISCOUNT" << endl;
    int ages[5];
    cout << "please enter the following ages for a discount: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Age: ";
        cin >> ages[i];
    }
    int temp = ages[5];
    for (int i = 0; i < 5; ++i) {
        if (ages[i] < temp) {
            temp = ages[i];
        }
    }
    double div = (double) temp / 100;
    double multi = (double) 50 * div;
    double total = 50 - multi;
    cout << "The discounted ticket price is " << total;


    return 0;
}
