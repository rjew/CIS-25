/**
 * Program Name: cis25Spring2015CircleRussellJ.h
 * Discussion:   Specification file for CircleRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#ifndef CIRCLERUSSELLJ_H
#define CIRCLERUSSELLJ_H

#include <iostream>
#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015PointRussellJ.h"
using namespace std;

class CircleRussellJ {
public:
    CircleRussellJ();
    CircleRussellJ(const CircleRussellJ&);

    ~CircleRussellJ();

    CircleRussellJ& operator=(const CircleRussellJ&);

    friend ostream& operator <<(ostream&, const CircleRussellJ&);
    friend istream& operator >>(istream&, CircleRussellJ&);
private:
    PointRussellJ c;
    FractionRussellJ r;
};

ostream& operator <<(ostream& out, const CircleRussellJ& rect) {

    return out;
}

istream& operator >>(istream& in, CircleRussellJ& fr) {

    return in;
}

#endif 