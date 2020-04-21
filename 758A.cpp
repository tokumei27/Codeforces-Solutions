#include <iostream>
#include <vector>

int main() {
    int n; std::cin >> n;
    double average = 0;
    int temp = 0;
    while (std::cin >> temp) {
        average += temp;
    } 
    average /= n;
    std::cout << average;
}