#ifndef RECEPYBOOK_H
#define RECEPYBOOK_H

#include <iostream>
#include <string>

using namespace std;

class RecepyBook {
private:
    string name;
    bool vegStatus;
    int wish;

public:
    RecepyBook(string n, int w, bool v);
    RecepyBook(string n, bool v);
    ~RecepyBook();

    void showStatus() const;
    void showVegStatus() const;
    void showWish() const;
    void showRecs() const;
};

#endif // RECEPYBOOK_H