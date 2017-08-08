#include <iostream>
#include <utility>
#include <thread>
#include <chrono>
#include <functional>
#include <atomic>

void fun1(int n)
{
    for (int i = 0; i < 9; i++)
    {
        std::cout << "thread: " << n << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void fun2(int& n)
{
    for(int i = 0; i < 9; ++i)
    {
        std::cout << "I am fun2, currently n is: " << n << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void fun3(int& n)
{
    for (int i = 0; i < 9; ++i)
    {
        std::cout << "I am fun3, I will change the value of n" << std::endl;
        ++n;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main()
{
    int n = 0;
    std::thread t1;
    std::thread t2(fun1, n + 1);
    std::thread t3(fun2, std::ref(n));
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Begin to use move" << std::endl;
    std::thread t4(std::move(t3));
    std::thread t5(fun3, std::ref(n));

    t2.join();
    //t3.join();
    t4.join();
    t5.join();

    std::cout << "hello world!" << std::endl;
}
