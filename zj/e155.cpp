#include <iostream>
#include <queue>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);

    int num;
    while (cin >> num) {
        if (num == 0) break;

        queue<int> que;

        for (int i = 1; i <= num; i++) {
            que.push(i);
        }

        cout << "Discarded cards:";
        if (que.size() == 1) {
            cout << "\n";
        }

        bool o = true;
        while (que.size() > 1) {
            if (o) {  // first card
                if (que.size() == 2) {
                    cout << " " << que.front() << "\n";
                    que.pop();
                    break;
                }
                cout << " " << que.front() << ",";
                que.pop();
            } else {  // second card
                que.push(que.front());
                que.pop();
            }
            o = !o;
        }

        cout << "Remaining card: " << que.front() << "\n";
    }
    return 0;
}
