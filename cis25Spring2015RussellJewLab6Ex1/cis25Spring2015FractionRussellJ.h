/**
 * Program Name: cis25Spring2015FractionRussellJ.h
 * Discussion:   Specification file for FractionRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#ifndef FRACTIONRUSSELLJ_H
#define FRACTIONRUSSELLJ_H

class FractionRussellJ {
public:
    FractionRussellJ();
    FractionRussellJ(const FractionRussellJ&);
    FractionRussellJ(int);
    FractionRussellJ(int, int);

    int getNum(void) const;
    void setNum(int);

    int getDenom(void) const;
    void setDenom(int);

    void printFraction(void) const;

    FractionRussellJ add(const FractionRussellJ&) const;
    FractionRussellJ subtract(const FractionRussellJ&) const;
    FractionRussellJ multiply(const FractionRussellJ&) const;
    FractionRussellJ divide(const FractionRussellJ&) const;

    FractionRussellJ& operator=(const FractionRussellJ&);
    FractionRussellJ operator+(const FractionRussellJ&) const;
    FractionRussellJ operator-(const FractionRussellJ&) const;
    FractionRussellJ operator*(const FractionRussellJ&) const;
    FractionRussellJ operator/(const FractionRussellJ&) const;
private:
    int num;
    int denom;
};

#endif 