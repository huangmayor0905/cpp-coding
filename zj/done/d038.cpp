#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n;

int main() {
    while (cin >> n) {
        if (n == 0) break;
        ll dp[n + 2];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        cout << dp[n] << "\n";
    }
    return 0;
}
