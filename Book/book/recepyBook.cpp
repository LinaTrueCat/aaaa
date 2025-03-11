#include "RecepyBook.h"

    RecepyBook::RecepyBook(string n, int w, bool v) : name(n), wish(w), vegStatus(v) {
    cout << name << " wishes ";
    showWish();
    showVegStatus();
    cout << endl;
}

RecepyBook::RecepyBook(string n, bool v) : name(n), vegStatus(v), wish(0) {}

void RecepyBook::showWish() const {
    switch (wish) {
    case 1:
        cout << "grecha" << endl;
        break;
    case 2:
        cout << "potato" << endl;
        break;
    default:
        cout << "nothing specific" << endl;
    }
}



void RecepyBook::showVegStatus() const {
    if (vegStatus == true) { 
        cout << "is vegetarian" << endl;
    }
    else {
        cout << "is not vegetarian" << endl;
    }
}

void RecepyBook::showRecs() const {
    cout << "your recs" << endl;
}

RecepyBook::~RecepyBook() {}