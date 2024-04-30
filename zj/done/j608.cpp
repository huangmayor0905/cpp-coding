#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second != b.second)
        return a.second < b.second;
    else
        return a.first > b.first;
}

int main() {
    ouo;
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> work;
    work.resize(n);
    for (int i = 0; i < n; i++) cin >> work[i].first;
    for (int i = 0; i < n; i++) cin >> work[i].second;

    sort(work.begin(), work.end(), cmp);

    int ans = 0;
    int machine[k + 1];
    memset(machine, -1, sizeof(machine));
    for (int i = 0; i < n; i++) {
        int idx = -1;
        int mx = -2;
        for (int j = 1; j <= k; j++) {
            if (machine[j] >= work[i].first) continue;
            if (machine[j] > mx) {
                mx = machine[j];
                idx = j;
            }
        }
        if (idx == -1) continue;
        ans++;
        machine[idx] = work[i].second;
    }
    cout << ans;

    // for (int i = 0; i < n; i++) {
    //     cout << work[i].first << " " << work[i].second << "\n";
    // }

    return 0;
}

/* test
5 1
0 2 1 3 4
2 3 5 4 6

8 2
3 1 4 3 7 2 2 5
5 3 7 4 8 7 4 6

2 1
1 2
2 3
*/

/* print
2

5

1
*/