#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    while (cin >> N >> M) {
        vector<int> d[N];
        queue<int> q;
        bool check[800] = {false};
        for (int i = 0; i < M; i++) {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            d[a].push_back(b);
        }
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        q.push(A);
        check[A] = true;
        while (!q.empty()) {
            int temp = q.front();
            q.pop();
            for (auto &i : d[temp]) {
                if (!check[i]) {
                    check[i] = true;
                    q.push(i);
                }
            }
        }
        if (check[B]) {
            cout << "Yes!!!\n";
        } else {
            cout << "No!!!\n";
        }
    }
    return 0;
}
