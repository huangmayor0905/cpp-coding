#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int problem;
    cin >> problem;

    while (problem--) {
        int train_len, s, tmp;
        cin >> train_len >> s;

        unordered_set<int> train;

        train.clear();

        for (int i = 0; i < train_len; i++) {
            cin >> tmp;
            train.insert(tmp);
        }

        for (auto &i : train) {
            cout << i << " ";
        }

        // unordered_map<int, vector<int>> judge;

        // judge.clear();

        while (s--) {
            int a, b;
            cin >> a >> b;

            auto search_a = train.find(a);
            if (search_a != train.end()) {
                // bool found = false;
                // for (; search_a != train.end(); ++search_a) {
                //     if (*search_a == b) {
                //         cout << "YES\n";
                //         found = true;
                //         break;
                //     }
                // }
                // if (!found) {
                //     cout << "NO\n";
                // }
                auto search_b = train.find(b);
                if (search_b != train.end()) {
                    bool found = false;
                    for (; search_a != train.end(); ++search_a) {
                        if (search_a == search_b) {
                            cout << "YES\n";
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "NO\n";
                    }
                } else {
                    cout << "NO\n";
                }
            } else {
                cout << "cannot find\n";
            }
        }
    }
    return 0;
}
