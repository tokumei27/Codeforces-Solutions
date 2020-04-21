#include <iostream>
#include <string>

int main() {
    int t; std::cin >> t;
    std::string s;
    while (t--) {
        std::cin >> s;
        int l = s.length();
        if (s[l-1] == 'a')
            std::cout << "KOREAN\n";
        else if (s[l-1] == 'u')
            std::cout << "JAPANESE\n";
        else if (s[l-1] == 'o')
            std::cout << "FILIPINO\n";
    }
}