#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) return 0;
        int data[n];
        for (int i = 0; i < n; i++) {
            cin >> data[i];
        }
        sort(data, data + n);
        for (int i = 0; i < n; i++) {
            cout << data[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
