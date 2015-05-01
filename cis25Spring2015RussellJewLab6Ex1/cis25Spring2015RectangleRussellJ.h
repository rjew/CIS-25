/**
 * Program Name: cis25Spring2015RectangleRussellJ.h
 * Discussion:   Specification file for RectangleRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#ifndef RECTANGLERUSSELLJ_H
#define RECTABGLERUSSELLJ_H

class RectangleRussellJ {
public:
    RectangleRussellJ();
    RectangleRussellJ(const RectangleRussellJ&);
    RectangleRussellJ(int);
    RectangleRussellJ(int, int);

    int getNum(void) const;
    void setNum(int);

    int getDenom(void) const;
    void setDenom(int);

    void printFraction(void) const;

    RectangleRussellJ add(const RectangleRussellJ&);
    RectangleRussellJ subtract(const RectangleRussellJ&);
    RectangleRussellJ multiply(const RectangleRussellJ&);
    RectangleRussellJ divide(const RectangleRussellJ&);

    RectangleRussellJ& operator=(const RectangleRussellJ&);
    RectangleRussellJ operator+(const RectangleRussellJ&);
    RectangleRussellJ operator-(const RectangleRussellJ&);
    RectangleRussellJ operator*(const RectangleRussellJ&);
    RectangleRussellJ operator/(const RectangleRussellJ&);
private:
    int num;
    int denom;
};

#endif 