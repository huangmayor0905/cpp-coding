#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int order(char cr) {
    if (cr == '+' || cr == '-')
        return 1;
    else if (cr == '*' || cr == '/')
        return 2;
    return 0;
}

int main() {
    ouo;
    string str;
    while (getline(cin, str)) {
        stack<char> symbol;
        string ans = "";

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(') {
                symbol.push('(');
            } else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
                if (symbol.empty()) {
                    symbol.push(str[i]);
                } else {
                    while (order(str[i]) <= order(symbol.top())) {
                        ans += symbol.top();
                        symbol.pop();
                        if (symbol.empty()) {
                            break;
                        }
                    }
                    symbol.push(str[i]);
                }
            } else if (str[i] == ')') {
                while (symbol.top() != '(') {
                    ans.push_back(symbol.top());
                    symbol.pop();
                }
                symbol.pop();
            } else if (isalpha(str[i])) {
                ans.push_back(str[i]);
            }
        }
        while (!symbol.empty()) {
            ans.push_back(symbol.top());
            symbol.pop();
        }
        for (int i = 0; i < ans.length(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
