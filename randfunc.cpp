#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(0);
    int range;
    cout << "type the range number to generate a 4-digit PIN: ";
    cin >> range;

    cout <<"The pseudo-random number generated is ";
    for (int i = 0; i < 4; ++i) {
        cout <<(rand() % range + 1);
    }
    }
