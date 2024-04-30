#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b;
    vector<pair<int, int>> depositary;
    while (cin >> a) {
        if (a == -1) break;
        cin >> b;
        depositary.push_back(make_pair(a, b));
    }
    // vector<int> ans;
    for (int i = 0; i < depositary.size(); i++) {
        // ans.push_back(0);
        int ans = 0;
        int food = depositary[i].first * depositary[i].second;
        while (food != 0) {
            food -= depositary[i].first;
            ans++;
            while (food <= (depositary[i].first - 1) * depositary[i].second) {
                depositary[i].first--;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
