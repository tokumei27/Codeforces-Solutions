#include <iostream>

int main() {
    int x; std::cin >> x;
    std::cout << (x%5 == 0 ? x/5 : x/5+1) << std::endl;
}