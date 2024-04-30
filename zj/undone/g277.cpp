#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
using namespace std;

int n;

int main() {
    // I/O �u�ƥ�Ĺ�@�b
    ouo;
    // init
    cin >> n;
    vector<pair<int, int>> a;
    ll sum[n + 1] = {0};
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        a.push_back(make_pair(num, i));
        sum[i] = sum[i - 1] + num;
    }
    // �C���d�߳��|�O�j��W�ӳ̤p��
    // �ҥH�Ƨǫ�i�H�H�u�ʷj�M���̤p�Ȫ� index
    sort(a.begin(), a.end());

    // idx = 0; �q�Ҧ��Ʀr���̤p�ȶ}�l
    int idx = 0;
    int mn_idx = a[idx].second;
    int l = 1, r = n;
    while (l < r) {
        // �C���Y�p�d��N�u�ʷj�M���U�@�ӳ̤p�ȧ�
        while (mn_idx < l || mn_idx > r) {
            idx++;
            mn_idx = a[idx].second;
        }
        // ������k�϶��j�p
        // �Y�p�d��
        if (sum[mn_idx - 1] - sum[l - 1] > sum[r] - sum[mn_idx]) {
            r = mn_idx - 1;
        } else {
            l = mn_idx + 1;
        }
    }
    cout << sum[l] - sum[l - 1];

    return 0;
}
