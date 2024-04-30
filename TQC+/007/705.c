#include <stdio.h>
#include <string.h>

int main() {
    char word[3][20];
    char wordcmp[5][20];
    int num[3];
    int cmp, total = 0;
    int i, j, m, n;
    for (i = 0; i < 3; i++) {
        scanf("%s", word[i]);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; i++) {
        scanf("%s", wordcmp[i]);
    }
    for (m = 0; m < 3; m++) {
        for (n = 0; n < 5; n++) {
            cmp = strcmp(word[m], wordcmp[n]);
            if (cmp == 0) {
                total += num[m];
            }
        }
    }
    printf("%d", total);
    return 0;
}