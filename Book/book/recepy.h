#ifndef RECEPY_H
#define RECEPY_H

#include <iostream>
using namespace std;

class Recepy {
private:
    string name;
    int page;
    bool meat;

public:
    Recepy(string n, int p, bool m);
    ~Recepy();

    void showStatus() const;
    void meatStatus() const;
};

#endif // RECEPY_H