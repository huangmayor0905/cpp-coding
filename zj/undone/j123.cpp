#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int r, c, n;
struct block {
    char shape;
    int y;
};
block blocks[205];
int high[35] = {0};
int abundom = 0;
int used = 0;
void func() {
    for (int i = 0; i < n; i++) {
        if (blocks[i].shape == 'A') {
            int mx_high = high[blocks[i].y];
            for (int j = 0; j < 4; j++) {
                if (high[blocks[i].y + j] + 1 < r) {
                    mx_high = max(high[blocks[i].y + j] + 1, mx_high);
                }
            }
            for (int j = 0; j < 4; j++) {
                high[blocks[i].y + j] = mx_high;
            }
        } else if (blocks[i].shape == 'B') {
        } else if (blocks[i].shape == 'C') {
        } else if (blocks[i].shape == 'D') {
        } else if (blocks[i].shape == 'E') {
        }
    }
}

int main() {
    cin >> r >> c >> n;
    for (int i = 0; i < n; i++) {
        cin >> blocks[i].shape >> blocks[i].y;
    }
    for (int i = 0; i < n; i++) {
        
    }
    func();

    return 0;
}
