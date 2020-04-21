#include <bits/stdc++.h>

int main() {
    int n, m, t;
    std::string s; std::cin >> s;
    int counter = 0;
    n = s.length();
    for (int i=0; i<n; i++) {
        if (s[i] == 'a') {
            counter++;
        }
    }
    while (true) {
        m = n/2+1;
        if (counter >= m) {
            break;
        }
        n--;
    }
    std::cout << n;
    return 0;
}
