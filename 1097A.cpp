#include <bits/stdc++.h>

int main() {
    //Gennady and a Card Game
    std::string curCard; std::cin >> curCard;
    std::string myHand[5];
    for (int i=0; i<5; i++) {
        std::cin >> myHand[i];
    }
    int counter = 0;
    for (int i=0; i<5; ++i) {
        if (curCard[0] == myHand[i][0] || curCard[1] == myHand[i][1]) {
            std::cout << "YES" << std::endl;
            break;
       }
       else {
           counter++;
           continue;
       }
    }
    if (counter == 5) {
        std::cout << "NO";
    }
    return 0;
}