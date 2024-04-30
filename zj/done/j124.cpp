#include <iostream>
using namespace std;

long long ans = 0;

int dfs() {
    int n;
    cin >> n;
    if (n == 0) {
        return 0;
    } else if (n % 2 == 0) {
        int l = dfs(), r = dfs();
        if (l != 0) ans += abs(n - l);
        if (r != 0) ans += abs(n - r);
    } else {
        int l = dfs(), m = dfs(), r = dfs();
        if (l != 0) ans += abs(n - l);
        if (m != 0) ans += abs(n - m);
        if (r != 0) ans += abs(n - r);
    }
    return n;
}

int main() {
    int tmp = dfs();
    cout << ans;
    return 0;
}
