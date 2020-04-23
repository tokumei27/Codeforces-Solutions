#include <iostream>
using namespace std;
typedef long long ll;

int main(int argc, char **argv)
{
	int t; cin >> t;
	ll a, b;
	
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		if (a == b) {
			cout << 0;
		}
		else if (a > b && abs(a-b) % 2 != 0) {
			cout << 2;
		}
		else if (a < b && abs(a-b) % 2 == 0) {
			cout << 2;
		}
		else {
			cout << 1;
		}
		cout << endl;
	}
	return 0;
}

