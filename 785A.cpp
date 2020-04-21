#include <bits/stdc++.h>

int check(std::string input) {
    int add = 0;
    if (input == "Tetrahedron") {
        add = 4;
    }
    else if (input == "Cube") {
        add = 6;
    }
    else if (input == "Octahedron") {
        add = 8;
    }
    else if (input == "Dodecahedron") {
        add = 12;
    }
    else if (input == "Icosahedron") {
        add = 20;
    }
    return add;
}

int main() {
    int n; std::cin >> n;
    int value = 0;
    std::string input[n];
    for (int i=0; i<n; i++) {
        std::cin >> input[i];
    }
    for (int i=0; i<n; i++) {
        value += check(input[i]);
    }
    std::cout << value;
    return 0;
}