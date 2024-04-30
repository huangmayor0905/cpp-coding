#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int n, m;
bool area[201][201];
int dp[201][201];

int main() {
    ouo;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> area[i][j];
        }
    }

    memset(dp, 0, sizeof(dp));
    // dp[1][1] = area[1][1];
    for (int i = 1; i <= n; i++) dp[i][1] += area[i][1] + dp[i - 1][1];
    for (int j = 1; j <= m; j++) dp[1][j] += area[1][j] + dp[1][j - 1];

    int ans = 0;

    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            if (area[i - 1][j - 1] == 1 && area[i][j - 1] == 1 && area[i - 1][j] == 1) {
                dp[i][j] = 
            }
        }
    }

    return 0;
}
