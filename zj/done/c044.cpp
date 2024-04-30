#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

struct mymp {
    char c;
    int num;
};

bool cmp(mymp a, mymp b) {
    if (a.num != b.num) return a.num > b.num;
    return a.c < b.c;
}

int main() {
    ouo;

    int n;
    // map<char, int> mp;
    mymp mp[26];
    for (int i = 0; i < 26; i++) mp[i].num = 0;

    cin >> n;
    for (int t = 0; t < n + 1; t++) {
        string str;
        getline(cin, str);
        for (int i = 0; i < str.length(); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                mp[str[i] - 'A'].num++;
                mp[str[i] - 'A'].c = str[i];
            } else if (str[i] >= 'a' && str[i] <= 'z') {
                mp[str[i] - 'a'].num++;
                mp[str[i] - 'a'].c = str[i] - 'a' + 'A';
            }
        }
        cin.clear();
    }
    sort(mp, mp + 26, cmp);
    for (int i = 0; mp[i].num != 0; i++) {
        cout << mp[i].c << " " << mp[i].num << "\n";
    }
    return 0;
}
