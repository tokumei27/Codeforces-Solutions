#include <bits/stdc++.h>
    
int main() {
    std::vector<int> a(4);
    for (int i = 0; i < a.size(); i++) {
        std::cin  >> a[i];
    } 
    sort(a.begin(), a.end());
    std::cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2] << std::endl;
}
