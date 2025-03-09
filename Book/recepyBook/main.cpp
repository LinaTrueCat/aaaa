#include <iostream>
#include "recepy.h"
using namespace std;

int main() {
    cout << "Opening book..." << endl;
    {
        recepy grecha("Greecha", 50, 1);
        grecha.showStatus();
        grecha.meatStatus();
        
        recepy potato("Potato", 20, 0);
        potato.showStatus();
        potato.meatStatus();
    }

    cout << "Close book" << endl;
    return 0;
}