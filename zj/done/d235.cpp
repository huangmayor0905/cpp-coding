// File Name: d235.cpp
// Created on: 2024-10-24 13:49
#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        if (s == "0") break;

        bool control = 0;
        int a = 0, b = 0;
        for (int i = 0; i < s.size(); i++, control = !control) {
            if (control)
                a += s[i] - '0';
            else
                b += s[i] - '0';
        }
        // cout << a << ' ' << b;
        if (abs(a - b) % 11 == 0) {
            cout << s << " is a multiple of 11.\n";
        } else {
            cout << s << " is not a multiple of 11.\n";
        }
    }
}
