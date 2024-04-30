#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int t = 0; t < n; t++) {
        int a[8], b[8];
        for (int i = 1; i <= 7; i++) cin >> a[i];
        for (int i = 1; i <= 7; i++) cin >> b[i];

        bool check = true;
        if (a[2] == a[4] || a[2] != a[6]) {
            cout << "A";
            check = false;
        } else if (b[2] == b[4] || b[2] != b[6]) {
            cout << "A";
            check = false;
        }
        if (a[7] != 1 || b[7] != 0) {
            cout << "B";
            check = false;
        }
        if (a[2] == b[2] || a[4] == b[4] || a[6] == b[6]) {
            cout << "C";
            check = false;
        }
        if (check) cout << "None";
        cout << "\n";
    }

    return 0;
}
