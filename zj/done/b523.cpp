#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int main() {
    string str;
    unordered_map<string, bool> mp;
    while (getline(cin, str)) {
        if (mp.find(str) == mp.end()) {
            mp[str] = true;
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
