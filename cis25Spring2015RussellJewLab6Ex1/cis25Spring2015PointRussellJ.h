/**
 * Program Name: cis25Spring2015PointRussellJ.h
 * Discussion:   Specification file for PointRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#ifndef POINTRUSSELLJ_H
#define POINTRUSSELLJ_H

#include <iostream>
#include "cis25Spring2015FractionRussellJ.h"
using namespace std;

class PointRussellJ {
public:
    PointRussellJ();
    PointRussellJ(const PointRussellJ&);

    ~PointRussellJ();

    PointRussellJ& operator=(const PointRussellJ&);

    void moveBy(FractionRussellJ, FractionRussellJ);
    void moveBy(int);
    void flipByX(void);
    void flipByY(void);
    void flipThroughOrigin(void);
    void print(void) const;

    friend ostream& operator <<(ostream&, const PointRussellJ&);
    friend istream& operator >>(istream&, PointRussellJ&);
private:
    FractionRussellJ x;
    FractionRussellJ y;
};

ostream& operator <<(ostream& out, const PointRussellJ& pt) {
    out << pt.x << ", " << pt.y << endl;
    return out;
}

istream& operator >>(istream& in, PointRussellJ& fr) {

    return in;
}

#endif 