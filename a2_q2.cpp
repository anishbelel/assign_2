#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the value of variable a: ";
    cin >> a;

    cout << "Enter the value of variable b: ";
    cin >> b;

    if (a < 50 && a < b) {
        cout << "0" << endl;
    } else {
        cout << "1" << endl;
    }

    return 0;
}
