#include <stdio.h>

int compute(int n) {
    if (n < 2) {
        return 1;
    } else {
        return compute(n - 1) + compute(n - 2);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int data[n], i;
    for (i = 0; i < n; i++) {
        data[i] = compute(i);
    }
    for (i = n; i > 0; i--) {
        printf("fib(%d)=%d\n", i, data[i - 1]);
    }
    return 0;
}
