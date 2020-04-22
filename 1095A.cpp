#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n; cin >> n;
	string t; cin >> t;
	int count = 1;
	for (int i = 0; i < n; i+=count) {
		printf("%c", t[i]);
		count++;
	}
	cout << endl;
    return 0;
}
