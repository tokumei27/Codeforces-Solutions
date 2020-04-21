#include <iostream>
#include <string>

int main() {
    //input
    int n; std::cin >> n;
    std::string s; std::cin >> s;

    int f = 0, sf = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'S' && s[i+1] == 'F')
            sf++;
        else if (s[i] == 'F' && s[i+1] == 'S')
            f++; 
    }
    std::cout << (sf > f ? "YES" : "NO");
}
