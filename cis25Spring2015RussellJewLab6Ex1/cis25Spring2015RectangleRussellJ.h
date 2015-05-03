/**
 * Program Name: cis25Spring2015RectangleRussellJ.h
 * Discussion:   Specification file for RectangleRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#ifndef RECTANGLERUSSELLJ_H
#define RECTANGLERUSSELLJ_H

#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015PointRussellJ.h"

class RectangleRussellJ {
public:
    RectangleRussellJ();
    RectangleRussellJ(const RectangleRussellJ&);

    ~RectangleRussellJ();

    RectangleRussellJ& operator=(const RectangleRussellJ&);

    friend ostream& operator <<(ostream&, const RectangleRussellJ&);
    friend istream& operator >>(istream&, RectangleRussellJ&);
private:
    FractionRussellJ len;
    FractionRussellJ wid;
    PointRussellJ ll;
};

#endif 