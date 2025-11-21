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
void slow(const std::string& name)  { compute(name, 7s); }
void quick(const std::string& name) { compute(name, 1s); }

int main() {
    return 0;
}