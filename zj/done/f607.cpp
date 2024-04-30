#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int main() {
    int n, l;
    ll ans = 0;

    cin >> n >> l;
    int cut[n + 1];
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        cut[b] = a;
    }

    set<int> st;
    st.insert(0);
    st.insert(l);

    for (int i = 1; i <= n; i++) {
        st.insert(cut[i]);
        auto pre = st.find(cut[i]);
        auto nex = st.find(cut[i]);
        pre--;
        nex++;
        ans += *nex - *pre;
    }
    cout << ans;
    return 0;
}
