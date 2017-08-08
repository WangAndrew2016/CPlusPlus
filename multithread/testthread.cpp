#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mtx;

void fun1(int i)
{
    mtx.lock();
    std::cout << "The is fun1, and the i is: " << i << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    mtx.unlock();
}

int main()
{
    unsigned int n = std::thread::hardware_concurrency();
    std::cout << n << " concurrent threads are supported.\n";
}
