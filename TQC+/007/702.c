#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
    char n[10];
    scanf("%s", n);
    int i, power = strlen(n) - 1, sum = 0;
    for (i = 0; i < strlen(n); i++, power--) {
        if (n[i] == '1') {
            sum += pow(2, power);
        }
    }
    printf("%d\n", sum);
    return 0;
}