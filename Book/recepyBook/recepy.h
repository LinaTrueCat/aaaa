#ifndef RESEPY_H
#define RESEPY_H

#include <iostream>
using namespace std;

class recepy {
private:
    string name;
    int page;
    bool meat;

public:
    recepy();
    recepy(string n);
    recepy(string n, int p, bool m); // �����������
    ~recepy(); // ����������
    void showStatus();
    void meatStatus();
};

#endif