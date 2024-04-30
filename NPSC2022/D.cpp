#include <bits/stdc++.h>
using namespace std;

struct ouo {
    int start;
    int end;
};

int main() {
    int n;
    cin >> n;
    // int start[n], end[n];
    ouo s[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> start[i] >> end[i];
    // }
    for (int i = 0; i < n; i++) {
        cin >> s[i].start >> s[i].end;
    }
    int Max = -1;
    for (int i = 0; i < n; i++) {
        if (s[i].end > Max) Max = s[i].end;
        if (s[i].start > Max) Max = s[i].start;
    }
    int energy[Max] = {0}, ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = s[i].start; j < s[i].end; j++) {
            if (energy[j] > 0) {
                ans += energy[j];
            }
            energy[j]++;
        }
    }

    cout << ans << "\n";
    return 0;
}
