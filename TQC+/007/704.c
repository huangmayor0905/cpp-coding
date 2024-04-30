#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int data[n], count[n], i;
    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
        count[i] = 0;
    }

    int t[n];
    t[0] = data[0];
    int check = 0, j, num = 1;

    for (i = 0; i < n; i++) {
        check = 0;
        for (j = 0; j < num; j++) {
            if (data[i] == t[j]) {
                check = 1;
                count[j]++;
                break;
            }
        }
        if (!check) {
            t[num] = data[num];
            count[num]++;
            num++;
        }
    }

    check = 0;

    for (i = 0; i < n; i++) {
        if (count[i] > n / 2) {
            printf("%d\n", t[i]);
            check = 1;
        }
    }

    if (!check) {
        printf("error\n");
    }
    return 0;
}
