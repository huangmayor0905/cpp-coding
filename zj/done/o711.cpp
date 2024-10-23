#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

int main() {
    int n;
    int w1, w2, h1, h2;
    cin >> n >> w1 >> w2 >> h1 >> h2;
    int container[n];
    for (int i = 0; i < n; i++) cin >> container[i];

    int lower = w1 * w1 * h1, higher = w2 * w2 * h2;

    int current = 0, preHeight = 0, mx_delta = 0;
    for (int i = 0; i < n; i++) {
        current += container[i];

        int currHeight = 0;
        if (current <= lower) {
            currHeight = current / (w1 * w1);
        } else if (current <= lower + higher) {
            currHeight = h1 + (current - lower) / (w2 * w2);
        } else if (current > lower + higher) {
            currHeight = h1 + h2;
            cout << max(mx_delta, currHeight - preHeight);
            return 0;
        }

        mx_delta = max(mx_delta, currHeight - preHeight);

        preHeight = currHeight;
    }

    cout << mx_delta;
}
