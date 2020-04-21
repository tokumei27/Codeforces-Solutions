#include <bits/stdc++.h>

int main() {
    //Cards
    int n; std::cin >> n;
    std::string s; std::cin >> s;
    int oneCount, zeroCount = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == 'n') {
            std::cout << "1" << " ";
        }
    }
    for (int i=0; i<n; i++) {
        if (s[i] == 'z') {
            std::cout << "0" << " ";
        }
    }
}
