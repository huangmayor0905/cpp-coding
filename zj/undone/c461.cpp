#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;

    if (((a == 0) || (b == 0)) == !c) {
        cout << "AND\n";
        flag = true;
    }
    if (((a == 0) && (b == 0)) == !c) {
        cout << "OR\n";
        flag = true;
    }
    if (((a == 0) && (b == 0)) - ((a == 0) || (b == 0)) == c) {
        cout << "XOR\n";
        flag = true;
    }
    if (!flag) {
        cout << "IMPOSSIBLE\n";
    }
    return 0;
}
