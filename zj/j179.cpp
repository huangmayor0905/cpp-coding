#include <iostream>
#include <string>
using namespace std;

string solve(string num, int len) {
    int n = stoi(num), a = 0, b = 0;
    switch (len) {
        case 4:
            a = n / 100;
            b = n % 100;
            if (a > 9) a = (a / 10) * (a % 10);
            if (b > 9) b = (b / 10) * (b % 10);
            if (a == 0) return to_string(b);
            num = to_string(a) + to_string(b);
            return num;
        case 3:
            a = (n / 100) * ((n / 10) % 10);
            b = ((n / 10) % 10) * (n % 10);
            num = to_string(a) + to_string(b);
            return num;
        case 2:
            a = n / 10;
            b = n % 10;
            num = to_string(a * b);
            return num;
        default:
            return "0";
    }
    return "0";
}

int main() {
    string num;
    cin >> num;

    while (num.size() != 1) {
        num = solve(num, num.size());
    }
    cout << num;
    return 0;
}
