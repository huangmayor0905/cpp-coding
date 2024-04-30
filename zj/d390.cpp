#include <iostream>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // ����
    int times;
    cin >> times;
    while (times--) {
        // ����Ӽ�
        int amount;
        cin >> amount;
        // ������ȡB�p���`�M
        int coco[amount];
        int sum = 0;
        for (int i = 0; i < amount; i++) {
            cin >> coco[i];
            sum += coco[i];
        }

        /* DP */
        int dp_size = sum / 2 + 1;
        bool dp[dp_size];
        for (int i = 1; i < dp_size; i++) dp[i] = 0;
        dp[0] = 1;

        for (int i = 0; i < amount; i++) {
            for (int j = sum / 2 - 1; j >= 0; j--) {
                if (dp[j] && (j + coco[i] < dp_size)) {
                    dp[j + coco[i]] = 1;
                }
            }
        }

        for (int i = dp_size - 1; i >= 0; i--) {
            if (dp[i]) {
                cout << sum - i * 2 << "\n";
                break;
            }
        }
    }
    return 0;
}