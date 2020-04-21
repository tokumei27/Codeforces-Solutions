#include <bits/stdc++.h>

int main() {
    //Fafa and his company
    int n; std::cin >> n;
    int l = n;
    int cnt = 0;
    for (int i=1; i<n; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }
    std::cout << cnt;
}