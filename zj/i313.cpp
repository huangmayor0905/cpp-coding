#include <cstring>
#include <iostream>
#include <stack>
using namespace std;

int order(char sy) {
    if (sy == '+' || sy == '-') {
        return 1;
    } else if (sy == '*' || sy == '/') {
        return 2;
    } else {
        return 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    while (cin >> str) {
        stack<char> symbol;
        string postfix = "";
        for (int i = 0; str[i] != '\0'; i++) {
            // 符號
            if (!isdigit(str[i])) {
                if (str[i] == '(') {
                    symbol.push('(');
                } else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
                    if (symbol.empty()) {
                        symbol.push(str[i]);
                    } else {
                        int a = order(symbol.top()), b = order(str[i]);
                        // 若 a 是 *, b 是 -
                        if (a > b) {
                            postfix.push_back(symbol.top());
                            symbol.pop();
                            symbol.push(str[i]);
                        } else {
                            symbol.push(str[i]);
                        }
                    }
                    // 這裡是 ')'
                } else {
                    while (symbol.top() != '(') {
                        postfix.push_back(symbol.top());
                        symbol.pop();
                    }
                    symbol.pop();
                }
                // 數字
            } else {
                postfix.push_back(str[i]);
            }
        }
        // 將未拿出的符號提出
        while (!symbol.empty()) {
            postfix.push_back(symbol.top());
            symbol.pop();
        }
        // 測試後序式是否確
        cout << postfix;
        long long ans = 0;
        stack<int> num;
        for (int i = 0; postfix[i] != '\0'; i++) {
            if (!isdigit(postfix[i])) {
                int a, b;
                b = num.top();
                num.pop();
                a = num.top();
                num.pop();
                if (postfix[i] == '+') {
                    num.push(a + b);
                } else if (postfix[i] == '-') {
                    num.push(a - b);
                } else if (postfix[i] == '*') {
                    num.push(a * b);
                } else if (postfix[i] == '/') {
                    num.push(a / b);
                }
            } else {
                num.push(postfix[i] - '0');
            }
        }
        cout << num.top() << "\n";
        num.pop();
    }

    return 0;
}
