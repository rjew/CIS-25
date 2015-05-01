/**
 * Program Name: cis25Spring2015PointRussellJ.h
 * Discussion:   Specification file for PointRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#ifndef POINTRUSSELLJ_H
#define POINTRUSSELLJ_H

class PointRussellJ {
public:
    PointRussellJ();
    PointRussellJ(const PointRussellJ&);
    PointRussellJ(int);
    PointRussellJ(int, int);

    int getNum(void) const;
    void setNum(int);

    int getDenom(void) const;
    void setDenom(int);

    void printFraction(void) const;

    PointRussellJ add(const PointRussellJ&);
    PointRussellJ subtract(const PointRussellJ&);
    PointRussellJ multiply(const PointRussellJ&);
    PointRussellJ divide(const PointRussellJ&);

    PointRussellJ& operator=(const PointRussellJ&);
    PointRussellJ operator+(const PointRussellJ&);
    PointRussellJ operator-(const PointRussellJ&);
    PointRussellJ operator*(const PointRussellJ&);
    PointRussellJ operator/(const PointRussellJ&);
private:
    int num;
    int denom;
};

#endif 