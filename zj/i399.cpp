#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int data[3];
    cin >> data[0] >> data[1] >> data[2];
    set<int> myset(data, data + 3);

    cout << 4 - myset.size();
    for (auto it = myset.rbegin(); it != myset.rend(); ++it) {
        cout << " " << *it;
    }
    return 0;
}
