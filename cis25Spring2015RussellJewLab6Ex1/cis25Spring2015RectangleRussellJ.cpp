/**
 * Program Name: cis25Spring2015RectangleRussellJ.cpp
 * Discussion:   Implementation file for RectangleRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#include "cis25Spring2015RectangleRussellJ.h"

RectangleRussellJ::RectangleRussellJ() {
    len = 0;
    wid = 0;
    ll = PointRussellJ();
}

RectangleRussellJ::RectangleRussellJ(const RectangleRussellJ& ref) {
    len = ref.len;
    wid = ref.wid;
    ll = ref.ll;
}

RectangleRussellJ::RectangleRussellJ(const FractionRussellJ& arg1,
    const FractionRussellJ& arg2, const PointRussellJ& arg3) {

    len = arg1;
    wid = arg2;
    ll = arg3;
}

RectangleRussellJ::RectangleRussellJ(int arg1, int arg2, const PointRussellJ& arg3) {
    len = arg1;
    wid = arg2;
    ll = arg3;
}

RectangleRussellJ::~RectangleRussellJ() {
}

FractionRussellJ RectangleRussellJ::getLength() const {
    return len;
}

void RectangleRussellJ::setLength(int arg) {
    if (arg < 0) {
        cout << "The length cannot be negative. Cannot set length." << endl;
    } else {
        len = arg;
    }
}

void RectangleRussellJ::setLength(const FractionRussellJ& arg) {
    if (arg.getNum() < 0) {
        cout << "The length cannot be negative. Cannot set length." << endl;
    } else {
        len = arg;
    }
}

FractionRussellJ RectangleRussellJ::getWidth() const {
    return wid;
}

void RectangleRussellJ::setWidth(int arg) {
    if (arg < 0) {
        cout << "The width cannot be negative. Cannot set width." << endl;
    } else {
        wid = arg;
    }
}

void RectangleRussellJ::setWidth(const FractionRussellJ& arg) {
    if (arg.getNum() < 0) {
        cout << "The width cannot be negative. Cannot set width." << endl;
    } else {
        wid = arg;
    }
}

PointRussellJ RectangleRussellJ::getLowerLeftPoint(void) const {
    return ll;
}

void RectangleRussellJ::setLowerLeftPoint(const PointRussellJ& arg) {
    ll = arg;
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
    cout << "Enter the length:" << endl;
    in >> rect.len;

    while (rect.len.getNum() < 0) {
        cout << "The length cannot be negative. Enter the length:" << endl;
        in >> rect.len;
    }

    cout << "Enter the width:" << endl;
    in >> rect.wid;

    while (rect.wid.getNum() < 0) {
        cout << "The width cannot be negative. Enter the width:" << endl;
        in >> rect.wid;
    }

    cout << "Enter the lower left point:" << endl;
    in >> rect.ll;

    return in;
}