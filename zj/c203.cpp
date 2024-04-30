#include <cmath>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    while (n) {
        int number;
        cin >> number;

        int sum = 0;
        for (int i = 1; i < sqrt(number); i++) {
            if (number % i == 0) {
                if (i == 1) {
                    sum += 1;
                } else {
                    sum += (number / i) + i;
                }
            }
        }
        if (sum == number) {
            cout << "perfect\n";
        } else if (sum < number) {
            cout << "deficient\n";
        } else {
            cout << "abundant\n";
        }

        n--;
    }
    return 0;
}
