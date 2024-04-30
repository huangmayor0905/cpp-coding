#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n, m, a, x = 0, y = 0;
    cin >> n >> m >> a;
    if (n % a != 0) {
        x = n / a + 1;
    } else {
        x = n / a;
    }

    if (m % a != 0) {
        y = m / a + 1;
    } else {
        y = m / a;
    }

    cout << x * y << "\n";

    // if ((n * m) % (a * a) != 0) {
    //     cout << (n * m) / (a * a) + 1 << "\n";
    // } else {
    //     cout << (n * m) / (a * a) << '\n';
    // }
    return 0;
}
