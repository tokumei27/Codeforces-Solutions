#include <bits/stdc++.h>
//705A: Hulk

void opp(bool &i) {
    if (i) {
        i = false;
    }
    else {
        i = true;
    }
}

int main() {

    int n; std::cin >> n;
    bool hl = false;
    int counter = 0;
    for (int i=0; i<n; ++i) {
        if (hl) {
            std::cout << "I love";
            opp(hl);
        }
        else {
            std::cout << "I hate";
            opp(hl);
        }
        if (i != n-1) {
            std::cout << " that ";
        }
    }
    std::cout << " it " << std::endl;
    return 0;
}