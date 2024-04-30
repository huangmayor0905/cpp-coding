#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

// zj k397

int main() {
    ouo;
    int n, m;
    int arr[10001] = {0};
    int d;
    cin >> n >> m;
    for (int i = 0; i < n + m; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = a; j < b; j++) {
            arr[j]++;
        }
    }
    cin >> d;

    for (int i = 1; i < 10000 - d; i++) {
        int tmp = i;
        while (arr[tmp] == 2) {
            tmp++;
        }
        if (tmp >= i + d) {
            cout << i << " " << i + d;
            return 0;
        }
    }
    cout << "-1\n";
}
