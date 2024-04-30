#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int dp[n][m], ans = 0x80000000;
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < m; i++) {
        dp[0][i] = a[0] * b[i];
        ans = ans = max(ans, dp[0][i]);
    }
    for (int i = 0; i < n; i++) {
        dp[i][0] = a[i] * b[0];
        ans = ans = max(ans, dp[0][i]);
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            dp[i][j] = max(a[i] * b[j] + dp[i - 1][j - 1], a[i] * b[j]);
            ans = max(ans, dp[i][j]);
        }
    }

    // cout << "\n\ndp:\n";
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    reverse(b, b + m);
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < m; i++) {
        dp[0][i] = a[0] * b[i];
        ans = ans = max(ans, dp[0][i]);
    }
    for (int i = 0; i < n; i++) {
        dp[i][0] = a[i] * b[0];
        ans = ans = max(ans, dp[0][i]);
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            dp[i][j] = max(a[i] * b[j] + dp[i - 1][j - 1], a[i] * b[j]);
            ans = max(ans, dp[i][j]);
        }
    }
    // cout << "\n\ndp:\n";
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    cout << ans;

    return 0;
}
