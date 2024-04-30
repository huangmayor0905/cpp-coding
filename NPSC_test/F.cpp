#include <iostream>
using namespace std;

int n = 0;
int Oline = 0, Xline = 0;

void solve(string *ox) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (ox[i][j] != ox[i][j + 1]) break;
            if (j == n - 2) {
                if (ox[i][j] == 'O')
                    Oline++;
                else
                    Xline++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (ox[j][i] != ox[j + 1][i]) break;
            if (j == n - 2) {
                if (ox[i][j] == 'O')
                    Oline++;
                else
                    Xline++;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++, i++) {
            if (ox[i][j] != ox[i + 1][j + 1]) goto here;
            if (j == n - 2) {
                if (ox[i][j] == 'O')
                    Oline++;
                else
                    Xline++;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j >= 1; j--, i++) {
            if (ox[i][j] != ox[i + 1][j - 1]) goto here;
            if (j == 1) {
                if (ox[i][j] == 'O')
                    Oline++;
                else
                    Xline++;
            }
        }
    }
here:
    cout << Oline << " " << Xline << "\n";
}

int main() {
    cin >> n;
    string ox[n];
    int Ocount = 0, Xcount = 0;

    for (int i = 0; i < n; i++) {
        cin >> ox[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (ox[i][j] == 'O') {
                Ocount++;
            } else if (ox[i][j] == 'X') {
                Xcount++;
            }
        }
    }

    if (n % 2 == 0 && Ocount == Xcount) {
        solve(ox);
    } else if (n % 2 == 1 && Ocount == Xcount + 1) {
        solve(ox);
    } else {
        cout << "Impossible\n";
        return 0;
    }
    return 0;
}
