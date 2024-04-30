#include <stdio.h>

int compute(int n) {
    if (n >= 0 && n <= 100) {
        if (n >= 60) {
            n += 5;
        } else {
            n += 10;
        }
    } else {
        n = -1;
    }
    return n;
}

int main() {
    int n;
    scanf("%d", &n);

    n = compute(n);
    printf("%d", n);
    return 0;
}
