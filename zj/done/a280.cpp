#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n, k;

int main() {
    ouo;
    while (cin >> n >> k) {
        vector<int> go_to[105];
        for (int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
            go_to[a].push_back(b);
        }

        bool visit[105] = {false};
        queue<int> todo;
        todo.push(0);
        visit[0] = true;
        bool flag = false;
        while (!todo.empty()) {
            int from = todo.front();
            todo.pop();
            for (auto u : go_to[from]) {
                if (!visit[u]) {
                    if (u == n) {
                        cout << "Ok!\n";
                        flag = true;
                        break;
                    }
                    todo.push(u);
                    visit[u] = true;
                }
            }
            if (flag == true) break;
        }
        if (flag == true) continue;
        cout << "Impossib1e!\n";
    }

    return 0;
}
