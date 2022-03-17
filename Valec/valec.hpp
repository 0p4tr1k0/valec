#ifndef VALEC_HPP
#define VALEC_HPP

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

const int defaultR = 1;
class valec {
public:
    valec();
    valec(const valec& orig);
    valec(int, int);
    virtual ~valec();
    double getPolomer()const;
    double getVyska()const;
    double getObjem()const;
    float getR()const;
    bool setPolomerVyska(float,float);
    double objemV();
    double povrch();
    double obsahPlaste();
    double obsahPodstavy();
private:
    double polomer;
    double vyska;
    double objem;
    bool kontrolaVstupu(float, float)const;
};
std::ostream & operator <<(std::ostream & , const valec &);


#endif /* VALEC_HPP */

