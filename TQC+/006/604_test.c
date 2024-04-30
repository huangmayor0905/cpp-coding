#include <stdio.h>

int main() {
    int num[9];
    int i, j;
    for (i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
    }

    int ans = 0;
    for (i = 0; i < 9; i++) {
        int index = i;
        for (j = i + 1; j < 9; j++) {
            if (num[j] < num[index]) index = j;
        }
        int tmp = num[i];
        num[i] = num[index];
        num[index] = tmp;

        printf("%d\n", num[i]);
        ans += num[i];
    }
    printf("sum = %d", ans);
}