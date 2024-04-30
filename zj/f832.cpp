#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    long long rock[n], robot[m];
    for (int i = 0; i < n; i++) cin >> rock[i];
    for (int i = 0; i < m; i++) cin >> robot[i];
    sort(rock, rock + n);
    sort(robot, robot + m);

    long long sum = 0;
    int index_bot = m - 1;
    for (int i = n - 1; i >= 0 && index_bot >= 0; i--) {
        if (robot[index_bot] >= rock[i]) {
            sum += rock[i];
            index_bot--;
        }
    }
    cout << sum << "\n";
    return 0;
}
