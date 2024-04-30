#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n / 12) * 50) + ((n % 12) * 5);
    return 0;
}
