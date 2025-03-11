#ifndef NPS_H
#define NPS_H

#include <iostream>
#include <string>

using namespace std;

class Nps {
private:
    string name;
    bool vegStatus;
    int wish;

public:
    Nps(string n, int w, bool v);
    Nps(string n, bool v);
    ~Nps();

    void showStatus() const;
    void showVegStatus() const;
    void showWish() const;
    void showRecs() const;
};

#endif // NPS_H