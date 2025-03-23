#ifndef RECEPYBOOK_H
#define RECEPYBOOK_H

#include <iostream>
#include <string>

using namespace std;

class RecepyBook {
private:
    string name;
    int numbPages = 20;

public:
    RecepyBook(string n);
    ~RecepyBook();

 //   void showStatus() const; (skiko zaraz use)
    void showSize() const;
};

#endif // RECEPYBOOK_H