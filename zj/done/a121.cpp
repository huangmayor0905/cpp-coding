// File Name: a121.CPP
// Created on: 2024-10-25 22:06
#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

bool isPrime(int n) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if (n == 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        int cnt = 0;
        for (int i = n; i <= m; i++) {
            if (isPrime(i)) cnt++;
        }
        cout << cnt << '\n';
    }
}
