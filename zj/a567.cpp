#include <algorithm>
#include <iostream>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n) {
        pair<int, int> deadlineAndProfit[n];
        bool check[n] = {false};
        int max_n = -1;
        for (int i = 0; i < n; i++) {
            cin >> deadlineAndProfit[i].first >> deadlineAndProfit[i].second;
            if (max_n < deadlineAndProfit[i].first) {
                max_n = deadlineAndProfit[i].first;
            }
        }
        sort(deadlineAndProfit, deadlineAndProfit + n);
        int sum = 0, times = 0;
        for (int i = max_n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                if (deadlineAndProfit[j].first == i && check[j] == false) {
                    sum += deadlineAndProfit[j].second;
                    deadlineAndProfit[j].second = 0;
                    deadlineAndProfit[j].first = 0;
                    check[j] = true;
                    // cout << sum << " hi\n";
                    times++;
                    break;
                }
            }
        }
        // cout << times << endl;
        sort(deadlineAndProfit, deadlineAndProfit + n, cmp);
        for (int i = n - 1; i >= 0 && times != max_n; i--, times++) {
            sum += deadlineAndProfit[i].second;
            // cout << deadlineAndProfit[i].first << " " << deadlineAndProfit[i].second << "\n";
        }
        cout << sum << "\n";
    }
    return 0;
}
