
#ifndef RESEPY_H
#define RESEPY_H

#include <iostream>
using namespace std;

class recepy {
private:
    string name;
    int page;

public:
    recepy();
    recepy(string n);
    recepy(string n, int p); // Конструктор
    ~recepy(); // Деструктор
    void showStatus();
};
//xp
#endif