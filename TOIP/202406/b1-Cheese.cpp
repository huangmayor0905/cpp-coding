#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a % d != 0 || b % d != 0 || c % d != 0) {
        cout << 0 << '\n';
        return 0;
    }
    cout << (a / d) * (b / d) * (c / d) << '\n';
}
