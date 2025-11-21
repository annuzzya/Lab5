#include <chrono>
#include <future>
#include <iostream>
#include <string>
#include <syncstream>
#include <thread>

using namespace std::chrono_literals;

void compute(const std::string& name, std::chrono::seconds duration) {
    std::this_thread::sleep_for(duration);
    std::cout << name << '\n';
}

int main() {
    return 0;
}