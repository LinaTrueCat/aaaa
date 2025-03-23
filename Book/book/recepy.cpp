#include "recepy.h"

Recepy::Recepy() : name("None"), page(0), meat(false) {}

Recepy::Recepy(string n, int p, bool m) : name(n), page(p), meat(m) {
    cout << "Recepy " << name << " on the page " << page << endl;
}

void Recepy::meatStatus() const {
    if (meat == true) {
        cout << "Has meat" << endl;
    }
    else {
        cout << "Has no meat" << endl;
}cout << endl;
    }

Recepy::~Recepy() {
    cout << "Page with " << name << " is closed" << endl;
}