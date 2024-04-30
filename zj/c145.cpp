#include <cstring>
#include <iostream>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int len = 1;

int area[13][13] = {0};
int pre = 999;
void dfs(int x, int y, int times) {
    area[y][x] = 1;
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 13; j++) {
            cout << area[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "------\n";
    for (int i = 0; i < 4; i++) {
        if (area[y + dy[i]][x + dx[i]] == 0 &&
            ((x + dx[i]) != -1) &&
            ((y + dy[i]) != -1) &&
            pre != i) {
            times++;
            pre = i;
            dfs(x + dx[i], y + dy[i], times);
        }
    }
    if (times > len) len = times + 1;
    // return;
}

int main() {
    memset(area, -1, sizeof(area));
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            area[i][j] = 0;
        }
    }
    dfs(1, 1, 0);
    cout << len << "\n";
    return 0;
}
