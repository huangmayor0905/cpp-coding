#include <iostream>
using namespace std;

int reco[100], arr[100];

void rec(int n, int m, int curr, int step) {
    if (step == m) {
        for (int i = 0; i < m; i++) cout << reco[i] << " ";
        cout << endl;
        return;
    }
    for (int i = curr; i < n; ++i) {
        reco[step] = arr[i];
        rec(n, m, i + 1, step + 1);
    }
}

int main() {
    int n;
    while (cin >> n) {
        if (n == 0)
            break;
        int m;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (arr[j] < arr[i])
                    swap(arr[j], arr[i]);
        rec(n, m, 0, 0);
    }
    return 0;
}