#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n, l, u;
ll ans = 0;
int arr[200005];
// int idx = 0;
void dfs(int sum, int idx) {
    int curr = sum + arr[idx];
    if (ans >= 1000000007) ans %= 1000000007;
    if (idx < n) {
        if (idx == n - 1 && curr == u) {
            ans++;
            return;
        }
        if (curr == u) {
            dfs(0, idx + 1);
        } else if (curr < u) {
            if (idx == n - 1 && curr >= l) {
                ans++;
                return;
            } else if (curr >= l) {
                dfs(curr, idx + 1);
                dfs(0, idx + 1);
            } else if (curr < l) {
                dfs(curr, idx + 1);
            }
        } else {
            return;
        }
    }
}

int main() {
    cin >> n >> l >> u;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    dfs(0, 0);
    cout << ans;
    return 0;
}
