#include <math.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count = 0, tmp = n;

    while (tmp) {
        tmp /= 10;
        count++;
    }
    int flip = 0;
    tmp = n;
    while (count) {
        flip += (tmp % 10) * pow(10, count - 1);
        count--;
        tmp /= 10;
    }
    if (flip == n) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
