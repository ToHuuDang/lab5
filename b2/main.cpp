#include "Coin.h"
#include <iostream>

using namespace std;

int main() {
    Coin coin;
    
    cout << "Initial side up: " << coin.getSideUp() << std::endl;
    
    int numHeads = 0;
    int numTails = 0;
    for (int i = 0; i < 20; i++) {
        coin.toss();
        cout << "Side up after toss " << i+1 << ": " << coin.getSideUp() << std::endl;
        if (coin.getSideUp() == "heads") {
            numHeads++;
        } else {
            numTails++;
        }
    }
    
    cout << "Number of times heads was facing up: " << numHeads << endl;
    cout << "Number of times tails was facing up: " << numTails << endl;
    
    return 0;
}
