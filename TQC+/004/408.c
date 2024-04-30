#include <stdio.h>
#include <string.h>

int main() {
    char s1[20], s2[20], ss[40];

    scanf("%s", s1);
    scanf("%s", s2);
    if ((int)strlen(s1) <= 3 || (int)strlen(s1) > 20 || (int)strlen(s2) <= 3 || (int)strlen(s2) > 20) {
        printf("error\n");
    } else {
        printf("%d\n", (int)strlen(s1));
        printf("%d\n", (int)strlen(s2));
        strcpy(ss, s1);
        strcat(ss, s2);
        int len = 0, j = 0;
        while (ss[len] != '\0') {
            len++;
        }
        for (j = len - 1; j >= 0; j--) {
            printf("%c", ss[j]);
        }
    }
    return 0;
}
