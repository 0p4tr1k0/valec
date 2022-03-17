#include <cstdlib>
#include "valec.hpp"

using std::endl;
using std::cout;
using std::cin;


int main(int argc, char** argv) {
    valec v1;
    valec v2(v1);
    valec v3(3,5);
    float r = 0;
    float h = 0;
    
    cout << v1 << endl;
    cout << v2 << endl;
    cout << v3 << endl;
    cout << v3.objemV() << " objem valce" << endl;
    cout << v3.povrch() << " povrch" << endl;
    cout << v3.obsahPodstavy() << " podstava" << endl;
    cout << v3.obsahPlaste() << " plast" << endl;
    /*Interface*/
    cout<< "Zadej polomer v cm: ";
    cin >> r;
    cout<< "Zadej vysku v cm: ";
    cin >> h;
    valec v4(r, h);    
    cout << v4.objemV() << " objem valce" << endl;
    cout << v4.povrch() << " povrch" << endl;
    cout << v4.obsahPodstavy() << " podstava" << endl;
    cout << v4.obsahPlaste() << " plast" << endl;
    return 0;
}

