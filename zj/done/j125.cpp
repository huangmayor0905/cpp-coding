#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n;
int high = -1, low = 0;
int g[305][305];
int viewed[305][305];
queue<pair<pair<int, int>, int>> todo;
int dir[4][2] = {
    {0, 1},
    {0, -1},
    {1, 0},
    {-1, 0}};

int bin_s(int m) {
    todo.push({{0, 0}, 0});
    viewed[0][0] = 1;
    while (!todo.empty()) {
        int x = todo.front().first.first;
        int y = todo.front().first.second;
        int cnt = todo.front().second;
        viewed[x][y] = 1;
        todo.pop();
        if (x == n - 1 && y == n - 1) {
            return cnt;
        }
        for (int i = 0; i < 4; i++) {
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if (nx >= 0 && nx <= n - 1 && ny >= 0 && ny <= n - 1 && viewed[nx][ny] == 0) {
                int h = abs(g[x][y] - g[nx][ny]);
                if (h <= m) {
                    viewed[nx][ny] = 1;
                    todo.push({{nx, ny}, cnt + 1});
                }
            }
        }
    }
    return -1;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
            high = max(g[i][j], high);
        }
    }

    // find h
    while (high - low > 1) {
        // queue.clear()
        while (!todo.empty()) todo.pop();
        // viewed init
        memset(viewed, 0, sizeof(viewed));

        int m = low + (high - low) / 2;
        int check = bin_s(m);
        if (check == -1) {
            low = m;
        } else {
            high = m;
        }
    }
    cout << high << "\n";

    // print step
    // queue.clear()
    while (!todo.empty()) todo.pop();
    // viewed init
    memset(viewed, 0, sizeof(viewed));
    cout << bin_s(high);

    return 0;
}

/*
4
9 4 3 2
5 9 8 10
3 3 2 8
6 3 3 4
*/
