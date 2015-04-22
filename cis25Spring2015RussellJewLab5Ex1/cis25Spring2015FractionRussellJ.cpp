/**
 * Program Name: cis25Spring2015FractionRussellJ.cpp
 * Discussion:   Implementation file for FractionRussellJ
 * Written By:   Russell Jew
 * Date:         2015/04/21
 */

#include <iostream>
#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015FractionRussellJUtility.h"
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
    if (arg2 < 0) {
        num = -arg1;
        denom = -arg2;
    } else {
        num = arg1;
        denom = arg2;
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

void FractionRussellJ::printFraction() {
    int gcd;

    gcd = getGCD(num, denom);

    num /= gcd;
    denom /= gcd;

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

void FractionRussellJ::operator=(const FractionRussellJ& rOp) {
    num = rOp.num;
    denom = rOp.denom;
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