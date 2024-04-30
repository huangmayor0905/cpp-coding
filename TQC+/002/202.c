#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n >= 0 && n <= 100) {
        if (n > 60) {
            n += 10;
        } else {
            n += 5;
        }
        printf("%d\n", n);
    } else {
        printf("error\n");
    }
    return 0;
}
