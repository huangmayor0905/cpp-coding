#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int m, n, k;
int amount = 0;

int main() {
    cin >> m >> n >> k;

    string arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    int p_x = m - 1, p_y = 0;

    bool alpha[2][26] = {false};
    for (int t = 0; t < k; t++) {
        int d = -1;
        cin >> d;
        int d_x = 0, d_y = 0;
        switch (d) {
            case 0:
                d_x -= 1;
                break;
            case 1:
                d_y += 1;
                break;
            case 2:
                d_x += 1;
                d_y += 1;
                break;
            case 3:
                d_x += 1;
                break;
            case 4:
                d_y -= 1;
                break;
            case 5:
                d_x -= 1;
                d_y -= 1;
                break;
            default:
                break;
        }
        if (p_x + d_x < m && p_x + d_x >= 0 && p_y + d_y < n && p_y + d_y >= 0) {
            p_x += d_x;
            p_y += d_y;
        }
        cout << arr[p_x][p_y];

        if (arr[p_x][p_y] >= 'a' && arr[p_x][p_y] <= 'z') {
            alpha[0][arr[p_x][p_y] - 'a'] = true;
        } else if (arr[p_x][p_y] >= 'A' && arr[p_x][p_y] <= 'Z') {
            alpha[1][arr[p_x][p_y] - 'A'] = true;
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 26; j++) {
            if (alpha[i][j] == true) amount++;
        }
    }
    cout << "\n"
         << amount;
    return 0;
}
