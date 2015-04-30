/**
 * Program Name: cis25Spring2015FractionRussellJ.cpp
 * Discussion:   Implementation file for FractionRussellJ
 * Written By:   Russell Jew
 * Date:         2015/04/29
 */

#include <iostream>
#include "cis25Spring2015FractionRussellJ.h"
using namespace std;

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

FractionRussellJ FractionRussellJ::add(const FractionRussellJ& rOp) {
    return FractionRussellJ(num * rOp.denom + denom * rOp.num,
        denom * rOp.denom);
}

FractionRussellJ FractionRussellJ::subtract(const FractionRussellJ& rOp) {
    return FractionRussellJ(num * rOp.denom - denom * rOp.num,
        denom * rOp.denom);
}

FractionRussellJ FractionRussellJ::multiply(const FractionRussellJ& rOp) {
    return FractionRussellJ(num * rOp.num, denom * rOp.denom);
}

FractionRussellJ FractionRussellJ::divide(const FractionRussellJ& rOp) {
    return FractionRussellJ(num * rOp.denom, denom * rOp.num);
}

FractionRussellJ& FractionRussellJ::operator=(const FractionRussellJ& rOp) {
    num = rOp.num;
    denom = rOp.denom;

    return *this;
}

FractionRussellJ FractionRussellJ::operator+(const FractionRussellJ& rOp) {
    return FractionRussellJ(num * rOp.denom + denom * rOp.num,
        denom * rOp.denom);
}

FractionRussellJ FractionRussellJ::operator-(const FractionRussellJ& rOp) {
    return FractionRussellJ(num * rOp.denom - denom * rOp.num,
        denom * rOp.denom);
}

FractionRussellJ FractionRussellJ::operator*(const FractionRussellJ& rOp) {
    return FractionRussellJ(num * rOp.num, denom * rOp.denom);
}

FractionRussellJ FractionRussellJ::operator/(const FractionRussellJ& rOp) {
    return FractionRussellJ(num * rOp.denom, denom * rOp.num);
}