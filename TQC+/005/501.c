#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[10];
    int output;
    scanf("%s", str);
    output = atoi(str);
    printf("%s change to %d\n", str, output);

    return 0;
}
