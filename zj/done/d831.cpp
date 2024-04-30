#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int p[1000005];

int find(int a) {
    if (p[a] < 0) return a;
    p[a] = find(p[a]);
    return p[a];
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        for (int i = 0; i < n; i++) {
            p[i] = -1;
        }
        int mx = 1;
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            a = find(a);
            b = find(b);
            if (a != b) {
                p[a] += p[b];
                mx = max(mx, -p[a]);
                p[b] = a;
            }
        }
        cout << mx << "\n";
    }
    return 0;
}
