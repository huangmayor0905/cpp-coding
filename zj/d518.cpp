#include <iostream>
#include <unordered_map>

using namespace std;

// 看標籤去查的 unordered_map (雜湊表 QwQ)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n) {
        int new_s = 0;
        unordered_map<string, int> hash;

        for (int i = 0, amount = 1; i < n; i++) {
            string input_str;
            cin >> input_str;
            if (hash.count(input_str)) {
                cout << "Old! " << hash[input_str] << "\n";
            } else {
                cout << "New! " << amount << "\n";
                hash[input_str] = amount;
                amount++;
            }
        }
    }
    return 0;
}
