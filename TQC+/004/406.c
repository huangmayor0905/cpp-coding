#include <stdio.h>
#include <string.h>

int main() {
    char up[] = "QWERTYUIOPPASDFGHJKLLZXCVBNMM";
    char low[] = "qwertyuioppasdfghjkllzxcvbnmm";
    char s[50] = "", ans[50] = "";
    scanf("%s", s);

    int i, j;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            for (j = 0; j < strlen(up); j++) {
                if (s[i] == up[j]) {
                    ans[i] = up[j + 1];
                    break;
                }
            }
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            for (j = 0; j < strlen(low); j++) {
                if (s[i] == low[j]) {
                    ans[i] = low[j + 1];
                    break;
                }
            }
        }
    }
    printf("%s\n", ans);
    return 0;
}
