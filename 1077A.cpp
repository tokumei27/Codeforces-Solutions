#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		ll a, b, k;
		cin >> a >> b >> k;
		if (k % 2 != 0) {
			cout << (a-b) * (k/2) + a;
		}
		else {
			cout << (a-b) * (k/2);
		}
		cout << endl;
	}
    return 0;
}
