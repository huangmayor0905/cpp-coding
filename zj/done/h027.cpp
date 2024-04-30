#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int s, t, n, m, r, sumA = 0;
int a[100][100], b[100][100];

int main() {
    cin >> s >> t >> n >> m >> r;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < t; j++) {
            cin >> a[i][j];
            sumA += a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }
    int count = 0;
    int mn_sum = 1e6;
    for (int i = 0; i <= n - s; i++) {
        for (int j = 0; j <= m - t; j++) {
            int diff = 0;
            int sumB = 0;
            for (int k = 0; k < s; k++) {
                for (int f = 0; f < t; f++) {
                    if (a[k][f] != b[i + k][j + f]) diff++;
                    sumB += b[i + k][j + f];
                }
            }
            if (diff <= r) {
                count++;
                mn_sum = min(mn_sum, abs(sumA - sumB));
            }
        }
    }
    cout << count << "\n";
    if (count != 0)
        cout << mn_sum << "\n";
    else
        cout << "-1\n";

    return 0;
}
