#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int data[n][3], ac = 0;
    for (int i = 0; i < n; i++) {
        cin >> data[i][0] >> data[i][1] >> data[i][2];
        int amount = 0;
        for (int j = 0; j < 3; j++) {
            if (data[i][j] == 1) amount++;
        }
        if (amount >= 2) {
            ac++;
        }
    }
    cout << ac << "\n";
    return 0;
}
