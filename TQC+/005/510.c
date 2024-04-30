#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int g[n + 2][m + 2];
    memset(g, 0, sizeof(g));
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            printf("%d", g[i][j]);
            // scanf("%d", &g[i][j]);
        }
    }
    // for (i = 1; i <= n; i++) {
    //     for (j = 1; j <= m; j++) {
    //         if (g[i][j] == 0) {
    //             printf(" ");
    //         } else {
    //             if (g[i + 1][j] == 0 || g[i - 1][j] == 0 || g[i][j + 1] == 0 || g[i][j - 1] == 0) {
    //                 printf("*");
    //             } else {
    //                 printf(" ");
    //             }
    //         }
    //     }
    //     printf("\n");
    // }
    return 0;
}
