#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n, a, b, ans = 0;
vector<pair<int, int>> vc;
bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second > b.second;
    } else {
        return a.first < b.first;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        vc.push_back(make_pair(a, b));
    }
    sort(vc.begin(), vc.end(), cmp);
    int s = 0, e = 0;
    for (int i = 0; i < n; i++) {
        if (vc[i].first >= e) {
            ans += e - s;
            s = vc[i].first;
            e = vc[i].second;
        } else if (vc[i].second > e) {
            e = vc[i].second;
        }
    }
    ans += e - s;
    cout << ans;
    return 0;
}
