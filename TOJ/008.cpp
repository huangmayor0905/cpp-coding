#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    getline(cin, s);

    string ans = "";
    for (int i = 0; i < n; i++) {
        int tmp = i;
        while (tmp < s.length()) {
            ans.push_back(s[tmp]);
            tmp += 4;
        }
    }
    cout << ans;
    return 0;
}
