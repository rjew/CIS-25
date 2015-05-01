/**
 * Program Name: cis25Spring2015FractionRussellJ.h
 * Discussion:   Specification file for FractionRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
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

    friend ostream& operator<<(ostream&, const FractionRussellJ&);
    friend istream& operator>>(istream&, FractionRussellJ&);
private:
    int num;
    int denom;
};

int getGCD(int arg1, int arg2) {
    int gcd = 1;
    int i;

    arg1 = arg1 < 0 ? -arg1 : arg1;
    arg2 = arg2 < 0 ? -arg2 : arg2;

    for (i = 2; i <= arg1 && i <= arg2; i++) {
        if (arg1 % i == 0 && arg2 % i == 0)
            gcd = i;
    }

    return gcd;
}

ostream& operator <<(ostream& out, const FractionRussellJ& fr) {
    out << fr.num << "/" << fr.denom << endl;
    return out;
}

istream& operator >>(istream& in, FractionRussellJ& fr) {
    int gcd;

    cout << "Enter num: ";
    in >> fr.num;

    cout << "Enter denom: ";
    in >> fr.denom;

    while (fr.denom == 0) {
        cout << "denom cannot be 0. Enter a non-zero integer: ";
        in >> fr.denom;
    }

    if (fr.denom < 0) {
        fr.denom = -fr.denom;
        fr.num = -fr.num;
    }

    gcd = getGCD(fr.num, fr.denom);

    fr.num /= gcd;
    fr.denom /= gcd;

    return in;
}

#endif 