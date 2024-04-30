#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long data[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> data[i][j];
        }
    }

    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < n; j += 2) {
            long long n1 = max(data[i][j], data[i][j + 1]);
            long long n2 = max(data[i + 1][j], data[i + 1][j + 1]);
            cout << max(n1, n2) << " ";
        }
        cout << "\n";
    }

    return 0;
}
