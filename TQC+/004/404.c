#include <stdio.h>

int main() {
    int a[26], i;
    char s[50];
    scanf("%s", s);

    for (i = 0; i < 26; i++) {
        a[i] = 0;
    }

    for (i = 0; s[i] != '\0'; i++) {
        a[s[i] - 97]++;
    }

    int max_times = a[0];
    char max;
    for (i = 0; i < 26; i++) {
        if (a[i] > max_times) {
            max = i + 97;
            max_times = a[i];
        }
    }

    printf("%c\n", max);
    printf("%d\n", max_times);
    return 0;
}
