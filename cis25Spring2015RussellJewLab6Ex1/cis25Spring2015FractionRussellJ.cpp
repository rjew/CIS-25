/**
 * Program Name: cis25Spring2015FractionRussellJ.cpp
 * Discussion:   Implementation file for FractionRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#include "cis25Spring2015FractionRussellJ.h"

FractionRussellJ::FractionRussellJ() {
    num = 0;
    denom = 1;
}

FractionRussellJ::FractionRussellJ(const FractionRussellJ& ref) {
    int gcd;
    
    num = ref.num;
    denom = ref.denom;

    gcd = getGCD(num, denom);

    num /= gcd;
    denom /= gcd;
}

FractionRussellJ::FractionRussellJ(int arg) {
    num = arg;
    denom = 1;
}

FractionRussellJ::FractionRussellJ(int arg1, int arg2) {
    int gcd;
    
    gcd = getGCD(arg1, arg2);

    if (arg2 < 0) {
        num = -arg1 / gcd;
        denom = -arg2 / gcd;
    } else {
        num = arg1 / gcd;
        denom = arg2 / gcd;
    }
}

FractionRussellJ::~FractionRussellJ() {
}

int FractionRussellJ::getNum() const {
    return num;
}

void FractionRussellJ::setNum(int arg) {
    num = arg;
}

int FractionRussellJ::getDenom() const {
    return denom;
}

void FractionRussellJ::setDenom(int arg) {
    if (arg < 0) {
        num = -num;
        denom = -arg;
    } else {
        denom = arg;
    }
}

void FractionRussellJ::printFraction() const {
    cout << num << "/" << denom << endl;
}

FractionRussellJ FractionRussellJ::add(const FractionRussellJ& rOp) const {
    return FractionRussellJ(num * rOp.denom + denom * rOp.num,
        denom * rOp.denom);
}

FractionRussellJ FractionRussellJ::subtract(const FractionRussellJ& rOp) const {
    return FractionRussellJ(num * rOp.denom - denom * rOp.num,
        denom * rOp.denom);
}

FractionRussellJ FractionRussellJ::multiply(const FractionRussellJ& rOp) const {
    return FractionRussellJ(num * rOp.num, denom * rOp.denom);
}

FractionRussellJ FractionRussellJ::divide(const FractionRussellJ& rOp) const {
    return FractionRussellJ(num * rOp.denom, denom * rOp.num);
}

FractionRussellJ& FractionRussellJ::operator=(const FractionRussellJ& rOp) {
    num = rOp.num;
    denom = rOp.denom;

    return *this;
}

FractionRussellJ FractionRussellJ::operator+(const FractionRussellJ& rOp) const {
    return FractionRussellJ(num * rOp.denom + denom * rOp.num,
        denom * rOp.denom);
}

FractionRussellJ FractionRussellJ::operator-(const FractionRussellJ& rOp) const {
    return FractionRussellJ(num * rOp.denom - denom * rOp.num,
        denom * rOp.denom);
}

FractionRussellJ FractionRussellJ::operator*(const FractionRussellJ& rOp) const {
    return FractionRussellJ(num * rOp.num, denom * rOp.denom);
}

FractionRussellJ FractionRussellJ::operator/(const FractionRussellJ& rOp) const {
    return FractionRussellJ(num * rOp.denom, denom * rOp.num);
}

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
    out << fr.num << "/" << fr.denom;
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