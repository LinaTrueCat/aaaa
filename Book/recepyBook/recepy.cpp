#include "recepy.h"

recepy::recepy(string n, int p ): name(n), page(p) {
    cout << "Recepy " << name << " created with Health: " << endl;
}

recepy::~recepy() {
    cout << "page with " << name << "is closed" << endl;
}

void recepy::showStatus() {
    cout << "recepy: " << name << " on the page " << page << endl;
}
