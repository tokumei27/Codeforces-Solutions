#include <bits/stdc++.h>

int main() {
    //Vus the Cossack and a Contest
    int n, m, k; std::cin >> n >> m >> k;
    if (m-n >= 0 && k-n >=0) {
        std::cout << "Yes";
    }
    else {
        std::cout << "No";
    }
    return 0;
}
