#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        int a, b, tmp = 0;
        char c;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] >= '0' && str[i] <= '9') {
                tmp = tmp * 10 + (str[i] - '0');
            } else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%') {
                c = str[i];
                a = tmp;
                tmp = 0;
            }
        }
        b = tmp;
        switch (c) {
            case '+':
                cout << a + b << "\n";
                break;
            case '-':
                cout << a - b << "\n";
                break;
            case '*':
                cout << a * b << "\n";
                break;
            case '/':
                cout << a / b << "\n";
                break;
            case '%':
                cout << a % b << "\n";
                break;
            default:
                break;
        }
    }
    return 0;
}
