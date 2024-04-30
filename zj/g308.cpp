#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int go[n], brownie[n];
    for (int i = 0; i < n; i++) {
        cin >> go[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> brownie[i];
    }

    int sum = 0;
    while (brownie[t] != -1) {
        if (brownie[t] == 1) {
            sum++;
        }
        brownie[t] = -1;
        t = go[t];
    }

    cout << sum << "\n";
    return 0;
}
