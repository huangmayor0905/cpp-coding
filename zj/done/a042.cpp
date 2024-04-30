#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        cout << (n + (n - 1)) + ((n - 1) * (n - 2)) + 1 << "\n";
    }
    return 0;
}
