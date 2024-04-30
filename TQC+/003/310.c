#include <math.h>
#include <stdio.h>

int compute(int n) {
    int i, total = 0, sum = 0;
    for (i = 1; i <= n; i++) {
        total = 0;
        int tmp = i;
        int pwr = 0;
        while (tmp != 0) {
            tmp /= 10;
            pwr++;
        }
        tmp = i;
        while (tmp != 0) {
            total += pow(tmp % 10, pwr);
            tmp /= 10;
        }
        if (total == i) {
            printf("%d\n", i);
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int ans = compute(n);
    printf("%d", ans);
    return 0;
}
