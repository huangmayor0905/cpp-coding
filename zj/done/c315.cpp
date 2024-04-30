#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n;

int main() {
    pair<int, int> xy;
    xy.first = 0;
    xy.second = 0;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        if (a == 0) {
            xy.second += b;
        } else if (a == 1) {
            xy.first += b;
        } else if (a == 2) {
            xy.second -= b;
        } else if (a == 3) {
            xy.first -= b;
        }
    }
    cout << xy.first << " " << xy.second << "\n";
    return 0;
}
