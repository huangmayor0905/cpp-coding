#include <stdio.h>

int main() {
    int i;
    char id[3][6];
    for (i = 0; i < 3; i++) {
        scanf("%s", id[i]);
    }
    for (i = 0; i < 3; i++) {
        int a, b;
        a = (id[i][0] + id[i][2] + id[i][4]) - 48 * 3;
        b = ((id[i][1] + id[i][3]) - 48 * 2) * 5;
        char v = (a + b) % 26;
        if (v == id[i][5] - 64) {
            printf("Pass\n");
        } else {
            printf("Fail\n");
        }
    }
}