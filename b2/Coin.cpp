#include "Coin.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Coin::Coin() {
    srand(time(0));
    if (rand() % 2 == 0) {
        sideUp = "heads";
    } else {
        sideUp = "tails";
    }
}

void Coin::toss() {
    if (rand() % 2 == 0) {
        sideUp = "heads";
    } else {
        sideUp = "tails";
    }
}

string Coin::getSideUp() {
    return sideUp;
}
