#include <bits/stdc++.h>
#define ll long long
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;

// bool cmp(int a, int b) {
//     return a > b;
// }

int main() {
    ouo;
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    for (auto i : arr) cout << i << " ";
    cout << "\n";
    set<int> st(arr, arr + n);
    for (auto it = st.rbegin(); it != st.rend(); it++) cout << *it << " ";
    return 0;
}
