#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int data[n][2];
    int max_num = -1;
    int max_num_time = -1;
    int error_times = 0;
    for (int i = 0; i < n; i++) {
        cin >> data[i][0] >> data[i][1];
        if (data[i][1] > max_num) {
            max_num_time = data[i][0];
            max_num = data[i][1];
        }
        if (data[i][1] == -1) {
            error_times++;
        }
    }

    int total = max_num - n - (error_times * 2);

    cout << ((total < 0) ? 0 : total) << " " << max_num_time << endl;

    return 0;
}
