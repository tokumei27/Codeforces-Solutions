#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char **argv)
{
	int q; cin >> q;
	ll a, b, c;
	for (int i = 0; i < q; i++) {
		cin >> a >> b >> c;
		ll ans = (a + b + c) / 2;
		cout << ans << endl;
	}
	
	return 0;
}

