#include <iostream>
#include <string>


int main() {
    int n; std::cin >> n;
    char bus[1000][5];
    for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
            std::cin >> bus[i][j];
        }
    }
    bool possible = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
			if (bus[i][j * 3] == 'O' && bus[i][j*3 + 1] == 'O') {
				bus[i][j * 3] = '+';
				bus[i][j * 3 + 1] = '+';
				possible = true;
				break;
			}
        }
        if (possible) break;    
    }
    if (possible) {
		std::cout << "YES\n"; 
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 5; j++) {
				std::cout << bus[i][j];
			}
		std::cout << std::endl;
		}
	}
	else {
		std::cout << "NO\n";
	}
    return 0;
}
