/**
 * Program Name: cis25Spring2015RectangleRussellJ.h
 * Discussion:   Specification file for RectangleRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/21
 */

#ifndef RECTANGLERUSSELLJ_H
#define RECTANGLERUSSELLJ_H

#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015PointRussellJ.h"
#include "cis25Spring2015ShapeRussellJ.h"

class RectangleRussellJ : public ShapeRussellJ {
public:
    RectangleRussellJ();
    RectangleRussellJ(const RectangleRussellJ&);
    RectangleRussellJ(const PointRussellJ&, const PointRussellJ&);

    ~RectangleRussellJ();

    PointRussellJ getUpperRightPoint(void) const;
    void setUpperRightPoint(const PointRussellJ&);

    PointRussellJ getLowerLeftPoint(void) const;
    void setLowerLeftPoint(const PointRussellJ&);

    FractionRussellJ computeArea(void);
    FractionRussellJ computeVolume(void);

    void print(void) const;

    RectangleRussellJ& operator=(const RectangleRussellJ&);
    RectangleRussellJ operator+(const RectangleRussellJ& rOp);

    friend ostream& operator <<(ostream&, const RectangleRussellJ&);
    friend istream& operator >>(istream&, RectangleRussellJ&);
private:
    PointRussellJ ur;
    PointRussellJ ll;
};

#endif 