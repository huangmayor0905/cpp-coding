#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n, m;
int s;
vector<int> adj[105];
int d[105];  // distance

void bfs(int s) {
    bool visit[n] = {false};
    queue<int> Q;
    Q.push(s);
    visit[s] = true, d[s] = 0;
    int cnt = 0, totald = 0;
    while (!Q.empty()) {
        int v = Q.front();
        Q.pop();
        for (auto u : adj[v]) {
            if (!visit[u]) {
                d[u] = d[v] + 1;
                visit[u] = true;
                Q.push(u);
                cnt++;
                totald += d[u];
            }
        }
    }
    cout << cnt << "\n"
         << totald << "\n";
}

int main() {
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++) {
        int from, to;
        cin >> from >> to;
        adj[from].push_back(to);
    }
    bfs(s);
    return 0;
}
