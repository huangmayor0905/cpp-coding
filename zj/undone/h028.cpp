#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n, l, ans = 0, mx_high = 0;
int farm[10005];
set<pair<int, int>> tree;

int main() {
    ouo;
    cin >> n >> l;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        tree.insert(make_pair(a[i], b[i]));
    }
    tree.insert({0, INT_MAX});
    tree.insert({l, INT_MAX});
    while (true) {
        // cout << "hi\n";
        bool check = true;
        for (auto it = tree.begin(); it != tree.end();) {
            if (it->first == 0 || it->first == l) {
                it++;
                continue;
            }
            // cout << it->first << " " << it->second << "\n";
            auto r = it;
            r++;
            auto l = it;
            l--;

            // ¦³­Ë
            if (it->first - it->second >= l->first || it->first + it->second <= r->first) {
                check = false;
                ans++;
                mx_high = max(mx_high, it->second);
                it = tree.erase(it);
            } else {  // ¨S­Ë
                it++;
            }
        }
        if (check) break;
    }
    cout << ans << "\n"
         << mx_high << "\n";
    return 0;
}
