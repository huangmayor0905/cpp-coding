#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    char a[8], b[8];
    scanf("%s", a);
    scanf("%s", b);

    int a_value = 0, b_value = 0;
    int power = 7;
    for (i = 0; i < 8; i++, power--) {
        if (a[i] == '1') {
            a_value += pow(2, power);
        }
        if (b[i] == '1') {
            b_value += pow(2, power);
        }
    }

    int sum = a_value + b_value;
    printf("%d + %d = %d\n", a_value, b_value, sum);

    int ans[8];
    for (i = 7; i >= 0; i--) {
        if (sum - pow(2, i) >= 0) {
            sum -= pow(2, i);
            ans[i] = 1;
        } else {
            ans[i] = 0;
        }
    }

    for (i = 7; i >= 0; i--) {
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}