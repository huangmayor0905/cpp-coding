#include <iostream>
#include <map>
#define ll long long
using namespace std;

ll N, R, cx, cy, ans;
map<pair<ll, ll>, ll> m;

int main() {
    cin >> N >> R;
    while (N--) {
        cin >> cx >> cy;
        for (ll x = cx - R; x <= cx + R; x++) {
            for (ll y = cy - R; y <= cy + R; y++) {
                if ((x - cx) * (x - cx) + (y - cy) * (y - cy) <= R * R) {
                    m[make_pair(x, y)]++;
                }
            }
        }
    }
    for (auto t : m) {
        if (t.second % 2 == 1) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
