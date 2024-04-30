#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n, a, b, ans = 0;
vector<pair<int, int>> vc;
bool cmp(pair<int, int> a, pair<int, int> b) {
    // if (a.second != b.second) {
    //     return a.first < b.first;
    // }
    // return a.second < b.second;
    return a.second < b.second;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        vc.push_back(make_pair(a, b));
    }
    sort(vc.begin(), vc.end());

    // debug
    // for (auto i : vc) {
    //     cout << i.first << " " << i.second << "\n";
    // }

    for (int i = 0; i < n; i++) {
        if ()
    }

    return 0;
}
