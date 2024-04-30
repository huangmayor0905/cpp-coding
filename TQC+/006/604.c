#include <stdio.h>

int cmp(int arr[]);

int main() {
    int num[9], i;

    for (i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
    }

    printf("sum = %d", cmp(num));

    return 0;
}

int cmp(int arr[]) {
    int i, j, index, tmp;
    int sum = 0;
    for (i = 0; i < 9; i++) {
        index = i;
        for (j = i + 1; j < 9; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        // ец┤л
        tmp = arr[i];
        arr[i] = arr[index];
        arr[index] = tmp;

        printf("%d\n", arr[i]);
        sum += arr[i];
    }
    return sum;
}