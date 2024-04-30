#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int main() {
    string str;
    for (int i = 0; i < 9; i++) {
        cin >> str;
        int sum = 0;
        for (int j = 0; j < 9; j++) {
            sum += (str[j] - '0');
        }
        cout << 45 - sum << "\n";
    }
    return 0;
}
