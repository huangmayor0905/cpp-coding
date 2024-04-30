#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n, m;
int G[101][101];
int main() {
    int count = 0;
    while (cin >> n >> m) {
        count++;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> G[i][j];
            }
        }

        // init
        int dp[n][m];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = G[0][0];
        for (int i = 1; i < m; i++) dp[0][i] = G[0][i] + dp[0][i - 1];
        for (int i = 1; i < n; i++) dp[i][0] = G[i][0] + dp[i - 1][0];

        // dp
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (dp[i - 1][j] < dp[i][j - 1]) {
                    dp[i][j] += dp[i - 1][j] + G[i][j];
                } else {
                    dp[i][j] += dp[i][j - 1] + G[i][j];
                }
            }
        }
        printf("Case #%d :\n", count);
        cout << dp[n - 1][m - 1] << "\n";
    }
    return 0;
}
