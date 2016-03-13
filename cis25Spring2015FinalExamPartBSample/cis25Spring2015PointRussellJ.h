/**
 * Program Name: cis25Spring2015PointRussellJ.h
 * Discussion:   Specification file for PointRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/21
 */

#ifndef POINTRUSSELLJ_H
#define POINTRUSSELLJ_H

#include "cis25Spring2015FractionRussellJ.h"

class PointRussellJ {
public:
    PointRussellJ();
    PointRussellJ(const PointRussellJ&);
    PointRussellJ(int, int);
    PointRussellJ(const FractionRussellJ&, const FractionRussellJ&);
    PointRussellJ(FractionRussellJ*, FractionRussellJ*);

    ~PointRussellJ();

    FractionRussellJ getX(void) const;
    void setX(int);
    void setX(const FractionRussellJ&);

    FractionRussellJ getY(void) const;
    void setY(int);
    void setY(const FractionRussellJ&);

    PointRussellJ& operator=(const PointRussellJ&);
    PointRussellJ operator+(const PointRussellJ&) const;

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

#endif 