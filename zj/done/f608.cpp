#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        vec.push_back(make_pair(a - 1, b - 1));
    }

    sort(vec.begin(), vec.end());

    vector<int> tmp;
    for (auto i : vec) {
        if (tmp.empty() || tmp.back() <= i.second)
            tmp.push_back(i.second);
        else
            tmp[upper_bound(tmp.begin(), tmp.end(), i.second) - tmp.begin()] = i.second;
    }
    cout << tmp.size() << "\n";

    return 0;
}
