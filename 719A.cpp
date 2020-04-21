#include <iostream>
using namespace std;
    
int main() {
    // Limak's weight is represented by a, and Bob's b
    int a,b; cin >> a >> b;
    int counter = 0;
    while (a <= b) {
        a*=3;
        b*=2;
        ++counter;
    }
    cout << counter << endl;
}