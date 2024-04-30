#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n;

struct p {
    int a;
    int d;
    int ability;
};

bool cmp(p a, p b) {
    return a.ability > b.ability;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    p player[n];
    for (int i = 0; i < n; i++) {
        cin >> player[i].a >> player[i].d;
        player[i].ability = player[i].a * player[i].a + player[i].d * player[i].d;
    }
    sort(player, player + n, cmp);
    cout << player[1].a << " " << player[1].d;

    return 0;
}
