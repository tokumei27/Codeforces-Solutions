#include <iostream>
#include <string>

int main() {
	int n; std::cin >> n;
	int a = 0, d = 0;
	std::string s; std::cin >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'A')
			a++;
		else
			d++;
	}
	if (a > d)
		std::cout << "Anton";
	else if (d > a)
		std::cout << "Danik";
	else
		std::cout << "Friendship";
}