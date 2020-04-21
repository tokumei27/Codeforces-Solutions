#include <iostream>
#include <string>
#define sz(v) ((int)(v).size())
const int MAXN = 250005;
    
using pi = std::pair<int, int>;
    
int n, m;
std::string s[22], t[22];
    
int main(){
    std::cin >> n >> m;
    for(int i=0; i<n; i++) std::cin >> s[i];
    for(int i=0; i<m; i++) std::cin >> t[i];
    int q; std::cin >> q;
    while(q--){
        int x; std::cin >> x; x--;
        std::cout << s[x % n] + t[x % m] << std::endl;
    }
}
