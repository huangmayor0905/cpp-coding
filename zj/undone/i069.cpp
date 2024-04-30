#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int min_num = 1001, max_num = -1;
    int data[n];
    for (int i = 0; i < n; i++) {
        cin >> data[i];
        if (min_num > data[i]) min_num = min(min_num, data[i]);
        if (max_num < data[i]) max_num = max(max_num, data[i]);
    }
    return 0;
}
