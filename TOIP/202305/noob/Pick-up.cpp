#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

string str;
vector<pair<char, int>> vc;

int main() {
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (vc.empty()) {
            vc.push_back({str[i], i});
        } else {
            for (int j = 0; j < vc.size(); j++) {
                if (vc[j].first == str[i]) {
                    vc[j].second = i;
                    break;
                } else if (i == vc.size() - 1 && vc[j].first != str[i]) {
                    vc.push_back({str[i], i});
                }
            }
        }
    }
    for (auto i : vc) {
        cout << i.second;
    }
    return 0;
}
