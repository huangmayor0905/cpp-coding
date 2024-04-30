#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int n, m;
int parent[100000];

struct side {
    int a, b;
    int cost;
};

bool cmp(side a, side b) {
    return a.cost < b.cost;
}

int findParent(int a) {
    if (parent[a] == a) {
        return a;
    } else {
        parent[a] = findParent(parent[a]);
        return parent[a];
    }
}

int main() {
    ouo;
    while (cin >> n >> m) {
        side edge[m];
        int todo = n - 1;
        for (int i = 0; i < m; i++) {
            cin >> edge[i].a >> edge[i].b >> edge[i].cost;
        }

        for (int i = 0; i < n; i++) parent[i] = i;

        sort(edge, edge + m, cmp);

        ll ans = 0;
        for (int i = 0; i < m; i++) {
            int from, to;
            from = findParent(edge[i].a);
            to = findParent(edge[i].b);

            if (from != to) {
                parent[from] = to;
                todo--;
                ans += edge[i].cost;
            }
        }
        if (todo == 0)
            cout << ans << "\n";
        else
            cout << "-1\n";
    }
    return 0;
}
