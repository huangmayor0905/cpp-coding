#include <iostream>
using namespace std;

void solve(int *data, int n, int qq) {
    int left = 0;
    int right = n;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (data[mid] < qq) {
            left = mid + 1;
        } else if (data[mid] > qq) {
            right = mid - 1;
        } else {
            cout << mid + 1 << "\n";
            return;
        }
    }
    cout << 0 << "\n";
    return;
}

int main() {
    int n, k;
    cin >> n >> k;
    int data[n], q[k];
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> q[i];
    }
    for (int i = 0; i < k; i++) {
        solve(data, n, q[i]);
    }
    return 0;
}
