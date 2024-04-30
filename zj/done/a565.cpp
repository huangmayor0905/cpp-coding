#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int t;

int main() {
    ouo;

    cin >> t;

    string str;
    while (t--) {
        int ans = 0;
        stack<char> stc;
        cin >> str;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == 'p') {
                stc.push('p');
            } else if (str[i] == 'q') {
                if (!stc.empty()) {
                    stc.pop();
                    ans++;
                }
            } else {
                continue;
            }
        }
        cout << ans << "\n";
    }
}
