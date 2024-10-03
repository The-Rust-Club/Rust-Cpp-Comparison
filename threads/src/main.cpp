#include <chrono>
#include <iostream>
#include <thread>

int main() {
  std::thread t1([]() {
    std::cout << "Thread " << 1 << " start" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Thread " << 1 << " end" << std::endl;
  });
  std::thread t2([]() {
    std::cout << "Thread " << 2 << " start" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Thread " << 2 << " end" << std::endl;
  });

  t1.join();
  t2.join();

  return 0;
}
