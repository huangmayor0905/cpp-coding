#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int f, n;
int y[10];
int mora[6] = {5, -1, 0, -1, -1, 2};

int main() {
    cin >> f >> n;
    for (int i = 0; i < n; i++) cin >> y[i];
    for (int i = 0; i < n; i++) {
        if (y[i - 2] == y[i - 1]) {
            f = mora[y[i - 1]];
        } else {
            f = y[i - 1];
        }
    }
    return 0;
}
