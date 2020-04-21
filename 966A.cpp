#include <iostream>
#include <vector>
    
    
int main() {
    int n, m=0;
    std::cin>>n;
    
    if(n/100)
        m+=(n/100), n-=(n/100)*100;
    
    if(n/20)
        m+=(n/20), n-=(n/20)*20;
    
    if(n/10)
        m+=(n/10), n-=(n/10)*10;
    
    if(n/5)
        m+=(n/5), n-=(n/5)*5;
    
    m+=n;
    
    std::cout<<m;
    return 0;
}
