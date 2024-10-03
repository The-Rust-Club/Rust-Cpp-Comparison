#include <iostream>
#include <future>
#include <thread>
#include <chrono>

int main() {
    auto async_task = std::async(std::launch::async, []() {
        std::this_thread::sleep_for(std::chrono::seconds(2));
        return "result";
    });

    std::cout << async_task.get() << std::endl;
    return 0;
}

