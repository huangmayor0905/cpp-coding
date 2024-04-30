#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define MN_const 1000001
using namespace std;

int n, m;
int x = 0, y = 0;
int G[105][105];
bool visit[105][105] = {false};
int mn = MN_const;
int ans = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> G[i][j];
            if (G[i][j] < mn) {
                x = i;
                y = j;
                mn = G[i][j];
            }
        }
    }

    // set boundary
    for (int i = 0; i <= n; i++) visit[i][0] = visit[i][m + 1] = true;
    for (int i = 0; i <= m; i++) visit[0][i] = visit[n + 1][i] = true;

    while (true) {
        int nx, ny;
        int d_mn = MN_const;
        ans += G[x][y];
        visit[x][y] = true;
        for (int i = 0; i < 4; i++) {
            int ix = x + dx[i], iy = y + dy[i];
            if (G[ix][iy] < d_mn && visit[ix][iy] == false) {
                nx = ix;
                ny = iy;
                d_mn = G[ix][iy];
            }
        }
        if (d_mn == MN_const) break;
        x = nx;
        y = ny;
    }
    cout << ans << "\n";

    return 0;
}
