#include <iostream>
using namespace std;

int main() {
    int num = 2;

    printf("這是變數 num 的值：%d\n", num);

    //  & 表示「取址」
    //  &b 表示「取 b 的記憶體位址」
    printf("這是變數 num 的記憶體位置：%p\n", &num);

    // \* 表示 [取值]
    // \*&num 表示 [取 num 記憶體位置的值] => 也就是 num 值
    printf("這是變數 num 的記憶體位置取的值：%d\n", *&num);

    // int* 表示 pointer 是存取記憶體位置的變數
    int* pointer = &num;

    printf("這是變數 pointer 的值：%p\n", pointer);

    printf("這是變數 pointer 的記憶體位置：%p\n", &pointer);

    printf("這是變數 pointer 的值取值：%d\n", *pointer);
    return 0;
}
