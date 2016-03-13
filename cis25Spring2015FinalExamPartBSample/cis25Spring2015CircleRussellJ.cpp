/**
 * Program Name: cis25Spring2015CircleRussellJ.cpp
 * Discussion:   Implementation file for CircleRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/07
 */

#include "cis25Spring2015CircleRussellJ.h"

CircleRussellJ::CircleRussellJ() : c(PointRussellJ()), r(FractionRussellJ()) {
}

CircleRussellJ::CircleRussellJ(const CircleRussellJ& ref) : c(ref.c), r(ref.r) {
}

CircleRussellJ::CircleRussellJ(const PointRussellJ& ptArg1, const FractionRussellJ& fracArg2) :
    c(ptArg1), r(fracArg2) {
}

CircleRussellJ::CircleRussellJ(const PointRussellJ& ptArg1, int iArg2) :
    c(ptArg1), r(iArg2) {
}

CircleRussellJ::~CircleRussellJ() {
}

PointRussellJ CircleRussellJ::getCenter() const {
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

FractionRussellJ CircleRussellJ::computeArea() {
    const FractionRussellJ PI(157, 50);

    return r * r * PI;
}

FractionRussellJ CircleRussellJ::computeVolume() {
    return FractionRussellJ();
}

void CircleRussellJ::print() const {
    cout << "    Center: " << c;
    cout << "    Radius: " << r << endl << endl;
}

CircleRussellJ& CircleRussellJ::operator=(const CircleRussellJ& rOp) {
    c = rOp.c;
    r = rOp.r;

    return *this;
}

CircleRussellJ CircleRussellJ::operator+(const CircleRussellJ& rOp) const {
    return CircleRussellJ(PointRussellJ(c + rOp.c), FractionRussellJ((r + rOp.r) / 2));
}

ostream& operator <<(ostream& out, const CircleRussellJ& circle) {
    out << "  Center: " << circle.c;
    out << "  Radius: " << circle.r << endl;
    out << "  Area: " << circle.computeArea << endl << endl;

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