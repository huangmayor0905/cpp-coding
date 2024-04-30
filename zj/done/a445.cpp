#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int p[10005];

int find(int a) {
    if (p[a] == a) return a;
    p[a] = find(p[a]);
    return p[a];
}

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    // init
    for (int i = 1; i <= n; i++) {
        p[i] = i;
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        p[find(a)] = find(b);
    }

    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        if (find(a) == find(b)) {
            cout << ":)\n";
        } else {
            cout << ":(\n";
        }
    }
    return 0;
}
