#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string id, ans = "";
    cin >> id;

    int total = 0;
    for (int i = 0, times = 8; i < id.length() - 1; i++, times--) {
        total += (id[i] - '0') * times;
    }

    int data[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21,
                    22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

    for (int i = 0; i < 26; i++) {
        int x = data[i] / 10, y = data[i] % 10;
        int check = 10 - (x + y * 9 + total) % 10;
        if (check == 10) {
            check = 0;
        }
        if (check == id[8] - '0') {
            ans.push_back('A' + i);
        }
    }

    cout << ans;
    return 0;
}
