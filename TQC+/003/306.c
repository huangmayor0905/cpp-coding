#include <stdio.h>
#include <stdlib.h>

// 進行階乘
int compute(int n) {
    if (n == 0) {
        return 1;
    } else {
        return compute(n - 1) * n;
    }
}

// 輸出及輸入
int main() {
    int n;
    scanf("%d", &n);
    int ans = compute(n);
    printf("%d! = %d", n, ans);
    return 0;
}
