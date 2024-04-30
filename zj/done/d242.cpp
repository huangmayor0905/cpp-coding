#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int main() {
    int num;
    vector<int> a;
    while (cin >> num) a.push_back(num);
    int N = a.size();

    vector<int> v;
    v.push_back(a[0]);
    int dp[N + 1];
    dp[0] = 1;
    int L = 1;

    for (int i = 1; i < N; i++) {
        if (a[i] > v.back()) {
            v.push_back(a[i]);
            L++;
            dp[i] = L;
        } else {
            auto it = lower_bound(v.begin(), v.end(), a[i]);
            *it = a[i];
            dp[i] = (int)(it - v.begin() + 1);
        }
    }

    cout << L << "\n-\n";

    vector<int> ans;
    for (int i = N - 1; i >= 0; i--) {
        if (dp[i] == L) {
            ans.push_back(a[i]);
            L--;
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto i : ans) {
        cout << i << '\n';
    }
    return 0;
}
