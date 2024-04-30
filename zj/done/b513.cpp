#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n;

int main() {
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        bool flag = true;
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                flag = false;
            }
        }
        if (flag)
            cout << "Y\n";
        else
            cout << "N\n";
    }
    return 0;
}
