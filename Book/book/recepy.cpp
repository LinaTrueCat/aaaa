#include "recepy.h"

Recepy::Recepy(string n, int p, bool m) : name(n), page(p), meat(m) {
    cout << "Recepy " << name << " on the page " << page << endl;
}

Recepy::~Recepy() {
    cout << "Page with " << name << " is closed" << endl;
}

void Recepy::showStatus() const {
    cout << "Some status" << endl;
}

void Recepy::meatStatus() const {
    cout << (meat ? "Has meat" : "Has no meat") << endl;
}