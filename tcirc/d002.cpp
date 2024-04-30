#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int eval() {
    int x, y, z;
    char token[5];
    cin >> token;
    if (token[0] == 'f') {
        x = eval();
        return 2 * x - 3;
    } else if (token[0] == 'g') {
        x = eval();
        y = eval();
        return 2 * x + y - 7;
    } else if (token[0] == 'h') {
        x = eval();
        y = eval();
        z = eval();
        return 3 * x - 2 * y + z;
    } else {
        return atoi(token);
    }
}

int main() {
    cout << eval() << "\n";
    return 0;
}
