#include <iostream>
using namespace std;

int main() {
    int n1;
    cin >> n1;

    while (n1--) {
        int n2;
        cin >> n2;
        int data[n2];
        for (int i = 0; i < n2; i++) {
            cin >> data[i];
        }

        int sum = data[0], max_sum = data[0];
        for (int i = 1; i < n2; i++) {
            if (sum < 0) sum = 0;
            sum += data[i];
            if (sum > max_sum) max_sum = sum;
        }

        cout << max_sum << "\n";
    }
    return 0;
}
