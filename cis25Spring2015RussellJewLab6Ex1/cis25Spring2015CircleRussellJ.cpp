/**
 * Program Name: cis25Spring2015CircleRussellJ.cpp
 * Discussion:   Implementation file for CircleRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#include "cis25Spring2015CircleRussellJ.h"

CircleRussellJ::CircleRussellJ() : c(PointRussellJ()), r(FractionRussellJ()) {
}

CircleRussellJ::CircleRussellJ(const CircleRussellJ& ref) : c(ref.c), r(ref.r) {
}

CircleRussellJ::~CircleRussellJ() {
}

PointRussellJ CircleRussellJ::getCenter(void) const {
    return c;
}

void CircleRussellJ::setCenter(const PointRussellJ& ptArg) {
    c = ptArg;
}

FractionRussellJ CircleRussellJ::getRadius(void) const {
    return r;
}

void CircleRussellJ::setRadius(int iArg) {
    if (iArg < 0) {
        cout << "The radius cannot be negative. Cannot set radius." << endl;
    } else {
        r = iArg;
    }
}

void CircleRussellJ::setRadius(const FractionRussellJ& fracArg) {
    if (fracArg.getNum() < 0) {
        cout << "The radius cannot be negative. Cannot set radius." << endl;
    } else {
        r = fracArg;
    }
}

CircleRussellJ::CircleRussellJ(const PointRussellJ& ptArg1, const FractionRussellJ& fracArg2) {
    c = ptArg1;
    r = fracArg2;
}

CircleRussellJ::CircleRussellJ(const PointRussellJ& ptArg1, int iArg2) {
    c = ptArg1;
    r = iArg2;
}

FractionRussellJ CircleRussellJ::getArea() const {
    const FractionRussellJ PI(355, 113);

    return r * r * PI;
}

CircleRussellJ& CircleRussellJ::operator=(const CircleRussellJ& rOp) {
    c = rOp.c;
    r = rOp.r;

    return *this;
}

ostream& operator <<(ostream& out, const CircleRussellJ& circle) {
    out << "    Center: " << circle.c;
    out << "    Radius: " << circle.r << endl << endl;

    return out;
}

istream& operator >>(istream& in, CircleRussellJ& circle) {
    cout << "    Enter the center:\n" << endl;
    in >> circle.c;

    cout << "\n    Enter the radius:\n" << endl;
    in >> circle.r;

    while (circle.r.getNum() < 0) {
        cout << "\n    The radius cannot be negative. Enter the radius:\n" << endl;
        in >> circle.r;
    }

    return in;
}