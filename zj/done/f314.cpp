#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int data[n + 2][m + 2];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> data[i][j];
        }
    }
    int dp[n + 2][m + 2];
    int l[10005], r[10005];
    memset(l, 0, sizeof(l));
    memset(r, 0, sizeof(r));
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j == 1) {
                l[j] = dp[i - 1][j] + data[i][j];
            } else {
                l[j] = max(dp[i - 1][j], l[j - 1]) + data[i][j];
            }
        }
        for (int j = m; j >= 1; j--) {
            if (j == m) {
                r[j] = dp[i - 1][j] + data[i][j];
            } else {
                r[j] = max(dp[i - 1][j], r[j + 1]) + data[i][j];
            }
            dp[i][j] = max(l[j], r[j]);
        }
    }
    int ans = -1e9;
    for (int j = 1; j <= m; j++) {
        ans = max(dp[n][j], ans);
    }
    cout << ans << "\n";
    return 0;
}
