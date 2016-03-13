/**
 * Program Name: cis25Spring2015BoxRussellJ.h
 * Discussion:   Specification file for BoxRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/21
 */

#ifndef BOXRUSSELLJ_H
#define BOXRUSSELLJ_H

#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015PointRussellJ.h"
#include "cis25Spring2015RectangleRussellJ.h"

class BoxRussellJ : public RectangleRussellJ {
public:
    // update and add constructors and destructor
    // add getters & setters
    // add supported functions
    // add operator functions

    RectangleRussellJ();
    RectangleRussellJ(const RectangleRussellJ&);
    RectangleRussellJ(const FractionRussellJ&, const FractionRussellJ&, const PointRussellJ&);
    RectangleRussellJ(int, int, const PointRussellJ&);

    ~RectangleRussellJ();

    FractionRussellJ getLength(void) const;
    void setLength(int);
    void setLength(const FractionRussellJ&);

    FractionRussellJ getWidth(void) const;
    void setWidth(int);
    void setWidth(const FractionRussellJ&);

    PointRussellJ getLowerLeftPoint(void) const;
    void setLowerLeftPoint(const PointRussellJ&);

    FractionRussellJ getArea(void) const;

    RectangleRussellJ& operator=(const RectangleRussellJ&);

    friend ostream& operator <<(ostream&, const RectangleRussellJ&);
    friend istream& operator >>(istream&, RectangleRussellJ&);
private:
    FractionRussellJ h;
};

#endif 