#include <iostream>
#include<string>

using namespace std;

int add(int x, int y) {
    cout << x + y << endl;
}

double add(double x, double y) {
    cout << x + y << endl;
}

int main() {
    add(5,6);
    add(1.2,6.5);
    return 0;
}
