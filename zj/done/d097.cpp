#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int data[n];
        for (int i = 0; i < n; i++) {
            cin >> data[i];
        }
        int jolly[n - 1];
        for (int i = 0; i < n - 1; i++) {
            jolly[i] = abs(data[i] - data[i + 1]);
        }
        sort(jolly, jolly + n - 1);
        bool check = false;
        for (int i = 1; i < n; i++) {
            if (jolly[i - 1] != i) {
                cout << "Not jolly\n";
                check = true;
                break;
            }
        }
        if (!check) cout << "Jolly\n";
    }
    return 0;
}
