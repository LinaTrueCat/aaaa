#include "recepy.h"

recepy::recepy(string n, int p, bool m) : name(n), page(p), meat(m) {
    cout << "Recepy " << name << " on the page " << page << endl;
}

recepy::~recepy() {
    cout << "page with " << name << "is closed" << endl;
}

void recepy::showStatus() {

    cout << "some status" << endl;
}
void recepy::meatStatus() {
    if (meat == 0) {
        cout << "has not meat" << endl;
    }
    else {
        cout << "has meat" << endl;
    }
    

}