#include "nps.h"

Nps::Nps(string n, int w, bool v) : name(n), wish(w), vegStatus(v) {
    cout << name << " wishes ";
    showWish();
}

Nps::Nps(string n, bool v) : name(n), vegStatus(v), wish(0) {}

void Nps::showWish() const {
    switch (wish) {
    case 1:
        cout << "soup" << endl;
        break;
    case 2:
        cout << "salad" << endl;
        break;
    case 3:
        cout << "fruits" << endl;
        break;
    default:
        cout << "nothing specific" << endl;
    }
}

void Nps::showStatus() const {
    cout << "some status" << endl;
}

void Nps::showVegStatus() const {
    cout << (vegStatus ? "is vegetarian" : "is not vegetarian") << endl;
}

void Nps::showRecs() const {
    cout << "your recs" << endl;
}

Nps::~Nps() {}