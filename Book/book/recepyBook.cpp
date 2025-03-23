#include "RecepyBook.h"

RecepyBook::RecepyBook(string n) : name(n) {
cout << "Opening " << name << endl;   
}
void RecepyBook::showSize() const {
    cout << numbPages << " pages"<< endl;
}
RecepyBook::~RecepyBook() {
    cout << "Closing " << name << endl;
}



