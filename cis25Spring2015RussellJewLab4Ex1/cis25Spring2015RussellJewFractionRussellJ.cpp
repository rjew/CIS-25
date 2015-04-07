/**
 * Program Name: cis25Spring2015RussellJewFractionRussellJ.cpp
 * Discussion:   Implementation file for FractionRussellJ
 * Written By:   Russell Jew
 * Date:         2015/04/06
 */

#include <iostream>
#include "cis25Spring2015RussellJewFractionRussellJ.h"
using namespace std;

//Function Prototype
int getGCD(int, int);

//Member Functions

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
    denom = arg;
}

void FractionRussellJ::printFraction() {
    int gcd;

    gcd = getGCD(num, denom);

    num /= gcd;
    denom /= gcd;

    cout << num << "/" << denom << endl;
}