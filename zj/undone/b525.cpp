#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

// NA + TLE

int m, f, k;

int func(int m, int f, int k) {
    if (k != 0) {
        return func(f, m + f, k - 1);
    }
    return m + f;
}

int main() {
    ouo;
    // cin >> m >> f >> k;
    while (cin >> m >> f >> k) {
        cout << func(m, f, k) % 1000000007 << "\n";
    }

    return 0;
}
