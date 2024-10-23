#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = n * 3, basic = 299, pro = 699;
    int mn = m;
    if (m > 299) {
        basic += (n > 300) ? (n - 300) * 3 : 0;
        mn = min(m, basic);
    }
    if (m > 699) {
        pro += (n > 750) ? (n - 750) * 3 : 0;
        mn = min(mn, pro);
    }
    cout << mn;
}
