#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int n;
int h;
vector<pair<int, int>> fac;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}

int main() {
    ouo;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        fac.push_back(make_pair(a, b));
    }
    cin >> h;

    int ans = 0;
    sort(fac.begin(), fac.end(), cmp);
    // for (int i = 0; i < n; i++) {
    //     cout << fac[i].first << " " << fac[i].second << "\n";
    // }
    for (int i = 0; i < n; i++) {
        if (h > fac[i].second) {
            h -= fac[i].second;
            ans++;
        } else {
            ans++;
            break;
        }
    }
    cout << ans;
    return 0;
}
