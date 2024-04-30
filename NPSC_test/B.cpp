#include <iostream>
using namespace std;

int main() {
    int a, b, x;
    cin >> x;
    if (x == 0) {
        cout << 0 << " " << 0 << "\n";
        return 0;
    }
    if (x % 2 == 0) {
        a = x / 2;
        b = a;
        cout << a << " " << b << "\n";
    } else {
        a = x / 2;
        b = a + 1;
        cout << a << " " << b << "\n";
    }
    return 0;
}
