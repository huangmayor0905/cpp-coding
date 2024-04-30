#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int N, a, b;
int root;
vector<int> vc[100001];
int depth[100001];

void dfs(int root, int pre) {
    for (auto i : vc[root]) {
        if (i != pre) {
            depth[i] = depth[root] + 1;
            dfs(i, root);
        }
    }
}

int main() {
    ouo;
    while (cin >> N) {
        bool find_root[N] = {false};

        // init depth
        for (int i = 0; i < N; i++) {
            depth[i] = 0;
        }

        // init G
        for (int i = 0; i < N; i++) {
            vc[i].clear();
        }

        // init
        for (int i = 0; i < N - 1; i++) {
            cin >> a >> b;
            vc[a].push_back(b);
            vc[b].push_back(a);
            find_root[b] = true;
        }

        // find root
        for (int i = 0; i < N; i++) {
            if (find_root[i] == false) {
                root = i;
                break;
            }
        }

        dfs(root, -1);
        int idx = 0, mx = 0;
        for (int i = 0; i < N; i++) {
            if (depth[i] > mx) {
                mx = depth[i];
                idx = i;
            }
        }

        // init depth
        for (int i = 0; i < N; i++) {
            depth[i] = 0;
        }

        dfs(idx, -1);
        for (int i = 0; i < N; i++) {
            if (depth[i] > mx) {
                mx = depth[i];
            }
        }
        cout << mx << '\n';
    }
    return 0;
}
