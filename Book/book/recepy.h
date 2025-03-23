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
    Recepy();
    Recepy(string n, int p = 0, bool m = false);
    ~Recepy();

    void meatStatus() const;
    string getName() const { return name; } 
    int getPage() const { return page; }  
};

#endif // RECEPY_H
