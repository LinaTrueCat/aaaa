#include <iostream>
#include "recepy.h"
#include "nps.h"

using namespace std;

int main() {
    cout << "Opening book..." << endl;
    {
        Recepy grecha("Greecha", 50, true);
        grecha.showStatus();
        grecha.meatStatus();

        Recepy potato("Potato", 20, false);
        potato.showStatus();
        potato.meatStatus();

        Nps bob("Bob", 1, true);
        bob.showStatus();
        bob.showVegStatus();
        bob.showWish();
    }

    cout << "Close book" << endl;
    return 0;
}