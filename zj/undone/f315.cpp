#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
// #define F first
// #define S second
using namespace std;

int a;
ll ans = 0;
pair<int, int> arr[100000 + 5];

struct BIT {
    int sz;
    vector<int> data;
    void init(int n) {
        sz = n;
        data.assign(n + 1, 0);
        return;
    }
    void update(pair<int, int> id) {
        data[id.first]++;
        data[id.second]++;
    }
    int sum(id id) {
        int ans = 0;
        for (int i = id; i > 0; i -= i & -i) ans += dat[i];
        return ans;
    }
} bit;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n; i++) {
        cin >> a;
        if (arr[a].first == 0)
            arr[a].first = i;
        else
            arr[a].second = i;
    }
    bit.init(2 * n);
    for (int i = 1; i <= n; i++) {
        ans += bit.sum(arr[i]);
        bit.update(arr[i]);
    }
    cout << ans;
    return 0;
}
