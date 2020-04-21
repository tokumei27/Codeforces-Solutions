#include <bits/stdc++.h>
using namespace std;
//Bachgold Problem

int main() {
    int n; cin >> n;
    vector<int> sum;
    if (n % 2 == 0) {
        for (int i = 0; i < n; i += 2) {
            sum.push_back(2);
        }
    }
    else {
        for (int i = 0; i < n - 3; i += 2) {
            sum.push_back(2);
        }
        sum.push_back(3);
    }
    cout << sum.size() << endl;
    for (int i = 0; i < sum.size(); i++) {
        cout << sum[i] << " ";
    }
    cout << endl;
    return 0;
}
