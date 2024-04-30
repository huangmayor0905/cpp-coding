#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> sk;
    while (n--) {
        int action;
        cin >> action;
        switch (action) {
            case 1:
                int num;
                cin >> num;
                sk.push(num);
                break;
            case 2:
                if (sk.empty()) {
                    cout << -1 << '\n';
                    break;
                }
                cout << sk.top() << "\n";
                break;
            case 3:
                if (sk.empty()) break;
                sk.pop();
                break;
            default:
                break;
        }
    }
    return 0;
}
