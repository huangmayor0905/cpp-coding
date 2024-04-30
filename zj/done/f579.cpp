#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int main() {
    int a, b;
    int n;
    int ans = 0;
    cin >> a >> b >> n;
    for (int i = 0; i < n; i++) {
        int input;
        int a_in = 0, b_in = 0;
        while (true) {
            cin >> input;
            if (input == 0) break;
            if (input == a)
                a_in++;
            else if (input == b)
                b_in++;
            else if (input == -a)
                a_in--;
            else if (input == -b)
                b_in--;
        }
        if (a_in > 0 && b_in > 0) ans++;
    }
    cout << ans << "\n";
    return 0;
}
