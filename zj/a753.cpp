#include <iostream>
#include <queue>
using namespace std;

struct side {
    int y;
    int x;
};

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int data[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> data[i][j];
        }
    }

    int q;
    cin >> q;
    int qs;
    while (q > 0) {
        cin >> qs;
        int max = 0;
        queue<side> do_next;
        side next;
        int tmp_data[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                tmp_data[i][j] = data[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int count = 0;
                if (data[i][j] == qs) {
                    tmp_data[i][j] = 0;
                    do_next.push({i, j});
                    while (!do_next.empty()) {
                        next = do_next.front();
                        do_next.pop();
                        for (int t = 0; t < 4; t++) {
                            if (next.x + dx[t] >= 0 &&
                                next.x + dx[t] < m &&
                                next.y + dy[t] >= 0 &&
                                next.y + dy[t] < n &&
                                data[next.y + dy[t]][next.x + dx[t]] == qs) {
                                do_next.push({next.y + dy[t], next.x + dx[t]});
                                data[next.y + dy[t]][next.x + dx[t]] = 0;
                                count++;
                            }
                        }
                    }
                    if (count > max) max = count;
                }
            }
        }
        if (max > 1)
            cout << max << "\n";
        else
            cout << 0 << "\n";
        q--;
    }

    return 0;
}
