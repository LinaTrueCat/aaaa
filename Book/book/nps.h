#ifndef NPS_H
#define NPS_H

#include <iostream>
#include <string>
#include "recepy.h"
#include "recepyBook.h"

using namespace std;

class Nps {
#ifndef NPS_H
#define NPS_H

#include <iostream>
#include <string>
#include "recepy.h"
#include "recepyBook.h"

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

        void showVegStatus() const;
        void showWish() const;
        void showRecs() const;

        void openRecepyBook(const Recepy& recepy) const; // Додано
    };

#endif // NPS_H

private:
    string name;
    bool vegStatus;
    int wish;

public:
    Nps(string n, int w, bool v);
    Nps(string n, bool v);
    ~Nps();

    void showVegStatus() const;
    void showWish() const;

    void chooseRecepyBook(const Recepy& recepy) const; 
};

#endif // NPS_H
