#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n;

int main() {
    // I/O 纔て墓
    ouo;
    // init
    cin >> n;
    vector<pair<int, int>> a;
    ll sum[n + 1] = {0};
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        a.push_back(make_pair(num, i));
        sum[i] = sum[i - 1] + num;
    }
    // –Ω琩高常穦琌程
    // ┮逼絬┦穓碝т程 index
    sort(a.begin(), a.end());

    // idx = 0; 眖┮Τ计程秨﹍
    int idx = 0;
    int mn_idx = a[idx].second;
    int l = 1, r = n;
    while (l < r) {
        // –Ω罽絛瞅碞絬┦穓碝┕程т
        while (mn_idx < l || mn_idx > r) {
            idx++;
            mn_idx = a[idx].second;
        }
        // ゑ耕オ跋丁
        // 罽絛瞅
        if (sum[mn_idx - 1] - sum[l - 1] > sum[r] - sum[mn_idx]) {
            r = mn_idx - 1;
        } else {
            l = mn_idx + 1;
        }
    }
    cout << sum[l] - sum[l - 1];

    return 0;
}
