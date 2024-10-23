#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

int G[105][105];
int d[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int state = 0;

int main() {
    // init
    int M, N;
    cin >> M >> N;
    int k, r, c;
    cin >> k >> r >> c;
    r++, c++;
    memset(G, -1, sizeof(G));
    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= N; j++) cin >> G[i][j];
    }

    int gem = 0, score = 0;
    while (G[r][c] != 0) {
        // do if bot at this cell
        score += G[r][c];
        gem++;
        G[r][c]--;

        // if score is divisible by k
        if (score % k == 0) state = (state + 1) % 4;

        // determine next cell
        int nx = r + d[state][0];
        int ny = c + d[state][1];
        while (G[nx][ny] == -1) {
            state = (state + 1) % 4;
            nx = r + d[state][0];
            ny = c + d[state][1];
        }

        r = nx, c = ny;
    }
    cout << gem;
}
