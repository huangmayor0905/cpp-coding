#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int main() {
    int n1, n2;
    while (cin >> n1 >> n2) {
        if (n1 == -1 || n2 == -1) break;
        if (abs(n1 - n2) > 50) {
            cout << 100 - abs(n1 - n2) << "\n";
        } else {
            cout << abs(n1 - n2) << "\n";
        }
    }
    return 0;
}
