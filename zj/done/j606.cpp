#include <iostream>
using namespace std;

int k, q, r;

int main() {
    cin >> k >> q >> r;
    char str[25][25];
    cin >> str[0];

    // ©¹¥k²¾¦V
    for (int i = k; i >= 1; i--) {
        str[0][i] = str[0][i - 1];
    }

    for (int i = 0; i < q; i++) {
        for (int j = 1; j <= k; j++) {
            int index;
            cin >> index;
            str[i + 1][index] = str[i][j];
        }
    }

    // for (int i = 1; i <= r; i++) {
    //     for (int j = 1; j <= q; j++) {
    //         cout << str[j][i];
    //     }
    //     cout << "\n";
    // }

    for (int i = 0; i < q + 1; i++) {
        for (int j = 1; j < k + 1; j++) {
            cout << str[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
