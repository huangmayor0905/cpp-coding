#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    str1.insert(0, " ");
    str2.insert(0, " ");

    int data[str1.length()];
    int next_data[str1.length()];
    for (int i = 0; i < str1.length(); i++) {
        data[i] = i;
    }

    int find_min[3];
    for (int i = 1; i < str2.length(); i++) {
        next_data[0] = i;

        for (int j = 1; j < str1.length(); j++) {
            int top_left = 0;

            if (str1[j] != str2[i]) {
                ++top_left;
            }

            find_min[0] = data[j] + 1;
            find_min[1] = data[j - 1] + top_left;
            find_min[2] = next_data[j - 1] + 1;
            int min = find_min[0];
            for (int m = 1; m < 3; m++) {
                if (find_min[m] < min) {
                    min = find_min[m];
                }
            }
            next_data[j] = min;
        }
        for (int j = 0; j < str1.length(); j++) {
            data[j] = next_data[j];
        }
    }
    cout << data[str1.length() - 1];
}
