#include <iostream>
using namespace std;

// 1 = right
// 2 = down
// 3 = left
// 4 = up

int main() {
    int n;
    cin >> n;
    int glass[n][2], d[n];
    for (int i = 0; i < n; i++) {
        cin >> glass[i][0] >> glass[i][1] >> d[i];
    }

    int x = 0, y = 0;
    int direction = 1;
    int times = 0;
    bool check = false;
    int close;
    int index_x, index_y, change_d;
    while (true) {
        switch (direction) {
            case 1:
                close = 30001;
                for (int i = 0; i < n; i++) {
                    if (glass[i][0] > x && glass[i][1] == y && glass[i][0] < close) {
                        index_x = glass[i][0];
                        close = index_x;
                        change_d = d[i];
                        // cout << index_x << "\n";
                    }
                }
                if (close == 30001) {
                    check = true;
                    break;
                }
                times++;
                x = index_x;
                if (change_d == 0) {
                    direction = 4;
                } else {
                    direction = 2;
                }
                break;
            case 2:
                close = -30001;
                for (int i = 0; i < n; i++) {
                    if (glass[i][1] < y && glass[i][0] == x && glass[i][1] > close) {
                        index_y = glass[i][1];
                        close = index_y;
                        change_d = d[i];
                    }
                }
                if (close == -30001) {
                    check = true;
                    break;
                }
                times++;
                y = index_y;
                if (change_d == 0) {
                    direction = 3;
                } else {
                    direction = 1;
                }
                break;
            case 3:
                close = 0;
                for (int i = 0; i < n; i++) {
                    if (1 <= glass[i][0] && glass[i][0] < x && glass[i][1] == y && glass[i][0] > close) {
                        index_x = glass[i][0];
                        close = index_x;
                        change_d = d[i];
                    }
                }
                if (close == 0) {
                    check = true;
                    break;
                }
                times++;
                x = index_x;
                if (change_d == 0) {
                    direction = 2;
                } else {
                    direction = 4;
                }
                break;
            case 4:
                close = 30001;
                for (int i = 0; i < n; i++) {
                    if (glass[i][1] > y && glass[i][0] == x && glass[i][1] < close) {
                        index_y = glass[i][1];
                        close = index_y;
                        change_d = d[i];
                    }
                }
                if (close == 30001) {
                    check = true;
                    break;
                }
                times++;
                y = index_y;
                if (change_d == 0) {
                    direction = 1;
                } else {
                    direction = 3;
                }
                break;
        }
        // cout << "(" << x << ", " << y << ")\n";
        if (check) {
            cout << times;
            break;
        }
    }
    return 0;
}
