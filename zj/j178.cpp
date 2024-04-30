#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m, a;
    cin >> m >> a;
    int T[m];
    for (int i = 0; i < m; i++) {
        cin >> T[i];
    }
    for (int i = 0; i < m; i++) {
        if (a <= T[i]) break;
        a += T[i];
    }
    cout << a << "\n";

    return 0;
}
