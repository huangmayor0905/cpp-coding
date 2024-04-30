#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool check = false;
    for (int i = n; i <= m; i++) {
        int tmp = i;
        int sum = 0;
        int numlen = 0;
        while (tmp != 0) {
            numlen++;
            tmp /= 10;
        }
        tmp = i;
        while (tmp != 0) {
            sum += pow((tmp % 10), numlen);
            tmp /= 10;
        }
        if (sum == i) {
            check = true;
            cout << i << " ";
        }
    }
    if (!check) cout << "none\n";
    return 0;
}
