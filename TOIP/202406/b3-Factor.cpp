#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int mx = 0, num = 0;
    for (int i = x; i <= y; i++) {
        int cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) cnt++;
        }
        if (mx < cnt) {
            mx = cnt;
            num = i;
        }
    }

    cout << num << ' ' << mx;
}
