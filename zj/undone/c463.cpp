#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n;
int k;

int main() {
    cin >> n;
    vector<int> vec[n];
    bool root[n] = {true};
    for (int i = 0; i < n; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            int num;
            cin >> num;
            vec[i].push_back(num);
            
        }
    }
    return 0;
}
