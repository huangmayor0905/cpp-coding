#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str1, str2;
    while (cin >> str1 >> str2) {
        ll sz1 = str1.length();
        ll sz2 = str2.length();
        int dp[sz1 + 1][sz2 + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= sz1; i++) {
            for (int j = 1; j <= sz2; j++) {
                if (str1[i - 1] == str2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        cout << dp[sz1][sz2] << "\n";
    }
    return 0;
}
