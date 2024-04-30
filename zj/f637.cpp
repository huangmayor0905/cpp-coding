#include <iostream>
using namespace std;

int index = 0, sum = 0, l;
string s;

void cmp() {
    for (int i = 0; i < 4; i++) {
        if (s[index] == '2') {
            ++index;
            l /= 2;
            cmp();
        } else if (s[index] == '1') {
            sum += l * l;
            ++index;
        } else {
            ++index;
        }
    }
    l *= 2;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    cin >> s >> l;
    cmp();
    cout << sum << "\n";
    return 0;
}
