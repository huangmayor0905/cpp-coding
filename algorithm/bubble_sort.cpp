#include <iostream>
#include <random>
#include <ctime>
#include <vector>

using namespace std;

void printVector(vector<int>& vc) {
    for (auto i : vc) {
        cout << i << " ";
    }
    cout << "\n";
}

// 泡泡排序函數
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // 交換 arr[j] 和 arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        printVector(arr);
    }
}

int main() {
    srand(time(NULL));
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "排序前的陣列：" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // 使用泡泡排序對數組進行排序
    bubbleSort(arr);

    cout << "排序後的陣列：" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
