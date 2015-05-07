/**
 * Program Name: cis25Spring2015RectangleRussellJ.cpp
 * Discussion:   Implementation file for RectangleRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#include "cis25Spring2015RectangleRussellJ.h"

RectangleRussellJ::RectangleRussellJ() : len(FractionRussellJ()), wid(FractionRussellJ()),
    ll(PointRussellJ()){
}

RectangleRussellJ::RectangleRussellJ(const RectangleRussellJ& ref) : 
    len(ref.len), wid(ref.wid), ll(ref.ll) {
}

RectangleRussellJ::RectangleRussellJ(const FractionRussellJ& fracArg1,
    const FractionRussellJ& fracArg2, const PointRussellJ& ptArg3) :
    len(fracArg1), wid(fracArg2), ll(ptArg3) {
}

RectangleRussellJ::RectangleRussellJ(int iArg1, int iArg2, const PointRussellJ& ptArg3) :
    len(iArg1), wid(iArg2), ll(ptArg3) {
}

RectangleRussellJ::~RectangleRussellJ() {
}

FractionRussellJ RectangleRussellJ::getLength() const {
    return len;
}

void RectangleRussellJ::setLength(int iArg) {
    if (iArg < 0) {
        cout << "The length cannot be negative. Cannot set length." << endl;
    } else {
        len = iArg;
    }
}

void RectangleRussellJ::setLength(const FractionRussellJ& fracArg) {
    if (fracArg.getNum() < 0) {
        cout << "The length cannot be negative. Cannot set length." << endl;
    } else {
        len = fracArg;
    }
}

FractionRussellJ RectangleRussellJ::getWidth() const {
    return wid;
}

void RectangleRussellJ::setWidth(int iArg) {
    if (iArg < 0) {
        cout << "The width cannot be negative. Cannot set width." << endl;
    } else {
        wid = iArg;
    }
}

void RectangleRussellJ::setWidth(const FractionRussellJ& fracArg) {
    if (fracArg.getNum() < 0) {
        cout << "The width cannot be negative. Cannot set width." << endl;
    } else {
        wid = fracArg;
    }
}

PointRussellJ RectangleRussellJ::getLowerLeftPoint(void) const {
    return ll;
}

void RectangleRussellJ::setLowerLeftPoint(const PointRussellJ& ptArg) {
    ll = ptArg;
}

FractionRussellJ RectangleRussellJ::getArea(void) const {
    return len * wid;
}

RectangleRussellJ& RectangleRussellJ::operator=(const RectangleRussellJ& rOp) {
    len = rOp.len;
    wid = rOp.wid;
    ll = rOp.ll;

    return *this;
}

ostream& operator <<(ostream& out, const RectangleRussellJ& rect) {
    out << "Length: " << rect.len << endl;
    out << "Width: " << rect.wid << endl;
    out << "Lower Left Point: " << rect.ll << endl;

    return out;
}

istream& operator >>(istream& in, RectangleRussellJ& rect) {
    cout << "Enter the length:\n" << endl;
    in >> rect.len;

    while (rect.len.getNum() < 0) {
        cout << "\nThe length cannot be negative. Enter the length:\n" << endl;
        in >> rect.len;
    }

    cout << "\nEnter the width:\n" << endl;
    in >> rect.wid;

    while (rect.wid.getNum() < 0) {
        cout << "\nThe width cannot be negative. Enter the width:\n" << endl;
        in >> rect.wid;
    }

    cout << "\nEnter the lower left point:\n" << endl;
    in >> rect.ll;

    return in;
}