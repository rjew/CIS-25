/**
 * Program Name: cis25Spring2015FractionRussellJ.h
 * Discussion:   Specification file for FractionRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/21
 */

#ifndef FRACTIONRUSSELLJ_H
#define FRACTIONRUSSELLJ_H

#include <iostream>
using namespace std;

class FractionRussellJ {
public:
    FractionRussellJ();
    FractionRussellJ(const FractionRussellJ&);
    FractionRussellJ(int);
    FractionRussellJ(int, int);

    ~FractionRussellJ();

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

    bool operator==(const FractionRussellJ&) const;
    bool operator>(const FractionRussellJ&) const;
    bool operator<(const FractionRussellJ&) const;

    friend ostream& operator<<(ostream&, const FractionRussellJ&);
    friend istream& operator>>(istream&, FractionRussellJ&);
private:
    int num;
    int denom;
};

#endif 