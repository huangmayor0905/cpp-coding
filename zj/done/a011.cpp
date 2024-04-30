#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        int num = 0;
        bool isNew = false;
        for (int i = 0; str[i] != '\0'; i++) {
            if (isalpha(str[i])) isNew = true;
            else {
                if (isNew) {
                    num++;
                    isNew = false;
                }
            }
        }
        cout << num + isNew << "\n";
    }
    return 0;
}
