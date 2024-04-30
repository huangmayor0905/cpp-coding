#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int eval() {
    int val, x, y;
    char token[5];
    cin >> token;
    if (token[0] == 'f') {
        x = eval();
        return 2 * x - 1;
    } else if (token[0] == 'g') {
        x = eval();
        y = eval();
        return x + 2 * y - 3;
    } else {
        return atoi(token);
    }
}

int main() {
    int ans = eval();
    cout << ans << "\n";
    return 0;
}
