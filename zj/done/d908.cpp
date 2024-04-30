#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

map<char, vector<pair<char, int>>> mp;

int compute(char start, int total) {
    if (!mp.count(start)) return total;
    int mx = 0;
    for (auto p : mp[start]) {
        mx = max(compute(p.first, total + p.second), mx);
    }
    return mx;
}

int main() {
    ouo;
    char start;
    int n;
    // cin >> start >> n;
    while (cin >> start >> n) {
        mp.clear();
        char a, b;
        int num;

        for (int i = 0; i < n; i++) {
            cin >> a >> b >> num;
            mp[a].push_back(make_pair(b, num));
        }
        cout << compute(start, 0) << "\n";
    }

    return 0;
}
