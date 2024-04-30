#include <stdio.h>
#include <string.h>

int main(void) {
    char a[100] = {}, up[100] = {}, low[100] = {};

    scanf("%s", a);

    int i, j = 0, k = 0;
    for (i = 0; i < strlen(a); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            low[j] = a[i];
            j++;
        } else if (a[i] >= 'A' && a[i] <= 'Z') {
            up[k] = a[i];
            k++;
        }
    }

    int uplen = strlen(up);

    printf("%s\n", up);
    printf("%s\n", low);
    printf("%d\n", uplen);
    return 0;
}