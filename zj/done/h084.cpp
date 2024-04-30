#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int fence[n], poster[k];
    int low = 1, high = 0;
    for (int i = 0; i < n; i++) {
        cin >> fence[i];
        high = max(high, fence[i]);
    }
    high++;
    for (int i = 0; i < k; i++) {
        cin >> poster[i];
    }

    while (high - low > 1) {
        int mid = (low + high) / 2;
        int width = 0;
        int poster_idx = 0;
        bool check = false;
        for (int i = 0; i < n; i++) {
            if (fence[i] >= mid) {
                width++;
                if (width >= poster[poster_idx]) {
                    width -= poster[poster_idx];
                    if (poster_idx == (k - 1)) {
                        check = true;
                        break;
                    }
                    poster_idx++;
                }
            } else {
                width = 0;
            }
        }
        if (check) {
            low = mid;
        } else {
            high = mid;
        }
    }
    cout << low;

    return 0;
}
