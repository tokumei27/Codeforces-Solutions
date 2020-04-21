#include <iostream>
#include <vector>

int main() {
    int n; std::cin >> n;
    int temp;
    while (std::cin >> temp) {
        std::cout << (temp == 2 ? 2 : temp % 2 == 0 ? 0 : 1) << std::endl;
    }
}