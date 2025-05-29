#include <iostream>
using namespace std;

int g(int x) {
    if (x > 12 ) {
        x = 3 * x;
    } else if (x > 8 ) {
        x = 2 * x;
	} else if (0 < x && x <= 8) {
        x = x - 5;
    } else {
        x = x * x;
    }
    return x;
}

int main() {
    int x;
    cout << "Indique el valor de x: ";
    cin >> x;
    x = g(x);
    cout << x;
    return 0;
}

