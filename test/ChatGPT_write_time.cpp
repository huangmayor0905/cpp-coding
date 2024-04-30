#include <chrono>
#include <iostream>
#include <thread>

int main() {
    while (true) {
        system("cls");
        // 取得當前時間
        auto now = std::chrono::system_clock::now();
        // 將當前時間轉換為 std::time_t
        std::time_t now_time = std::chrono::system_clock::to_time_t(now);
        // 將 std::time_t 轉換為 tm 結構
        std::tm *tm_now = std::localtime(&now_time);

        // 輸出時間
        std::cout << "Current time: "
                  << tm_now->tm_hour << ":"
                  << tm_now->tm_min << ":"
                  << tm_now->tm_sec << std::endl;

        // 每秒更新一次時間
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
