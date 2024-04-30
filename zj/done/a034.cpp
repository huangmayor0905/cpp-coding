#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int main() {
    int n;
    // cin >> n;
    while (cin >> n) {
        vector<int> ans;
        while (n / 2 != 0) {
            ans.push_back(n % 2);
            n /= 2;
        }
        ans.push_back(n % 2);
        for (auto it = ans.rbegin(); it != ans.rend(); it++) {
            cout << *it;
        }
        cout << "\n";
    }
    return 0;
}
