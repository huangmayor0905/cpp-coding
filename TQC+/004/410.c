#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *f1, *f2;
    int count, line_c = 0;
    scanf("%d", &count);
    f1 = fopen("read.txt", "r");
    f2 = fopen("write.txt", "w");
    char buf[100];
    while (fgets(buf, 100, f1) != NULL) {
        int i;
        line_c++;
        int len = strlen(buf);
        if (isalpha(buf[0])) buf[0] = toupper(buf[0]);
        for (i = 1; i < len; i++) {
            if (buf[i - 1] == ' ' && isalpha(buf[i])) {
                buf[i] = toupper(buf[i]);
            }
        }
        printf("%s", buf);
        fputs(buf, f2);
        if (line_c == count) break;
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
