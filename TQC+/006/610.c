#include <stdio.h>

int main() {
    int a1, a2, b1, b2;

    scanf("%d %d", &a1, &b1);
    int i, j, g1[a1][b1];
    for (i = 0; i < a1; i++) {
        for (j = 0; j < b1; j++) {
            scanf("%d", &g1[i][j]);
        }
    }

    scanf("%d %d", &a2, &b2);
    int g2[a2][b2];
    for (i = 0; i < a2; i++) {
        for (j = 0; j < b2; j++) {
            scanf("%d", &g2[i][j]);
        }
    }

    if (b1 != a2) {
        printf("error\n");
    } else {
        int ans[a1][b2], sum, k;
        for (i = 0; i < a1; i++) {
            for (j = 0; j < b2; j++) {
                for (sum = k = 0; k < b1; k++) {
                    sum += g1[i][k] * g2[k][j];
                }
                ans[i][j] = sum;
            }
        }
        for (i = 0; i < a1; i++) {
            for (j = 0; j < b2; j++) {
                if (j != 0) printf(" ");
                printf("%d", ans[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}