#include <chrono>
#include <iostream>
#include <thread>

int main() {
    while (true) {
        system("cls");
        // ���o��e�ɶ�
        auto now = std::chrono::system_clock::now();
        // �N��e�ɶ��ഫ�� std::time_t
        std::time_t now_time = std::chrono::system_clock::to_time_t(now);
        // �N std::time_t �ഫ�� tm ���c
        std::tm *tm_now = std::localtime(&now_time);

        // ��X�ɶ�
        std::cout << "Current time: "
                  << tm_now->tm_hour << ":"
                  << tm_now->tm_min << ":"
                  << tm_now->tm_sec << std::endl;

        // �C���s�@���ɶ�
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
