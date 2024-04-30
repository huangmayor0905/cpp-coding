#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

string str = "";

bool cmp(pair<char, int> a, pair<char, int> b) {
    return a.second > b.second;
}

int main() {
    cin >> str;
    vector<pair<char, int>> vc;
    for (int i = 0; i < str.length(); i++) {
        bool check = false;
        for (auto j : vc) {
            if (str[i] == j.first) {
                j.second++;
                check = true;
                cout << j.first;
                break;
            }
        }
        if (vc.empty() || !check) {
            vc.push_back(make_pair(str[i], 1));
        }
    }
    sort(vc.begin(), vc.end(), cmp);
    for (auto i : vc) {
        cout << i.first << " " << i.second;
    }
    return 0;
}
