#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

unordered_map<char, int> mp = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}};

unordered_map<int, char> re_mp = {
    {1, 'I'},
    {5, 'V'},
    {10, 'X'},
    {50, 'L'},
    {100, 'C'},
    {500, 'D'},
    {1000, 'M'}};

int int_mp[7] = {1, 5, 10, 50, 100, 500, 1000};

string s1, s2;

int solve(string s) {
    int n = mp[s[0]];
    for (int i = 1; i < s.length(); i++) {
        n += mp[s[i]];
        if (mp[s[i]] > mp[s[i - 1]]) {
            n -= mp[s[i - 1]] * 2;
        }
    }
    return n;
}

int main() {
    ouo;

    while (cin >> s1) {
        if (s1 == "#") break;
        cin >> s2;

        int n1 = solve(s1);
        int n2 = solve(s2);
        int n3 = abs(n1 - n2);
        if (n3 == 0) {
            cout << "ZERO\n";
            continue;
        }

        // cout << n1 << " " << n2 << " " << n3 << "\n";
        deque<char> ans;
        int power = 0;
        while (n3 != 0) {
            int tmp = (n3 % 10) * pow(10, power);
            int tmp_2 = (n3 % 10);

            switch (tmp) {
                case 4:
                    ans.push_front(re_mp[tmp + 1]);
                    ans.push_front(re_mp[1]);
                    break;
                case 9:
                    ans.push_front(re_mp[tmp + 1]);
                    ans.push_front(re_mp[1]);
                    break;
                case 40:
                    ans.push_front(re_mp[tmp + 10]);
                    ans.push_front(re_mp[10]);
                    break;
                case 90:
                    ans.push_front(re_mp[tmp + 10]);
                    ans.push_front(re_mp[10]);
                    break;
                case 400:
                    ans.push_front(re_mp[tmp + 100]);
                    ans.push_front(re_mp[100]);
                    break;
                case 900:
                    ans.push_front(re_mp[tmp + 100]);
                    ans.push_front(re_mp[100]);
                    break;
                default:
                    deque<char> str_tmp;
                    for (int i = 6; i >= 0; i--) {
                        while (tmp / int_mp[i] > 0) {
                            str_tmp.push_back(re_mp[int_mp[i]]);
                            tmp -= int_mp[i];
                        }
                    }
                    for (int i = str_tmp.size() - 1; i >= 0; i--) {
                        ans.push_front(str_tmp[i]);
                    }
                    break;
            }

            power++;
            n3 /= 10;
            // cout << tmp << " ";
        }
        for (auto i : ans) {
            cout << i;
        }
        cout << "\n";
    }

    return 0;
}
