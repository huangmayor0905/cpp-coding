#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int m, dp[33][50];
bool mp[33][33];
string str;
int from, to, n;

int main() {
    while (cin >> m) {
        for (int i = 1; i <= m; i++) {
            cin >> str;
            for (int j = 1; j <= m; j++) {
                mp[i][j] = str[j - 1] - '0';
            }
        }
        cin >> from >> to >> n;

        memset(dp, 0, sizeof(dp));
        dp[from][0] = 1;
        for (int step = 1; step <= n; step++) {
            for (int i = 1; i <= m; i++) {
                for (int j = 1; j <= m; j++) {
                    if (mp[i][j] == 1) {
                        dp[i][step] += dp[j][step - 1];
                    }
                }
            }
        }
        int ans = 0;
        for (int i = 0; i <= n; i++) {
            ans += dp[to][i];
        }
        cout << ans << "\n";
    }

    return 0;
}
