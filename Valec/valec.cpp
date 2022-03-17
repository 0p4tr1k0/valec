#include "valec.hpp"
#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif


valec::valec() {
    this->polomer = defaultR;
    this->vyska = defaultR;
}

valec::valec(const valec& orig) {
    this->polomer = orig.getPolomer();
    this->vyska = orig.getVyska();
}

valec::valec(int r, int h) {
    if (!setPolomerVyska(r, h)) {
        this->polomer = defaultR;
        this->vyska = defaultR;
    }
}

valec::~valec() {
}

double valec::getPolomer() const {
    return this->polomer;
}

double valec::getVyska() const {
    return this->vyska;
}

double valec::getObjem() const {
    return this->objem;
}

bool valec::kontrolaVstupu(float r, float h) const {
    if (r > 0 && h > 0) {
        return true;
    }
    return false;
}

bool valec::setPolomerVyska(float r, float h) {
    if (kontrolaVstupu(r, h)) {
        this->polomer = r;
        this->vyska = h;
        return true;
    }
    return false;
}

double valec::povrch() {
    return (2 * M_PI * this->polomer * this->vyska)+(2 * M_PI * this->polomer * this->polomer);
}

double valec::objemV() {
    return M_PI * this->polomer * this->polomer*this->vyska;
}

double valec::obsahPlaste() {
    return 2 * M_PI * this->polomer*this->vyska;
}

double valec::obsahPodstavy() {
    return M_PI * this->polomer*this->polomer;
}

std::ostream & operator<<(std::ostream & os, const valec & v) {
    os << v.getPolomer() << " " << v.getVyska();
    return os;
}