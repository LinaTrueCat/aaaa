#include <iostream>
#include "recepy.h"
using namespace std;

int main() {
    cout << "Opening book..." << endl;
    {
        recepy grecha("Greecha", 50);
        recepy rus("rus", 20);

        grecha.showStatus();
        rus.showStatus();

    } 
   
    cout << "Close book" << endl;
    return 0;
}
