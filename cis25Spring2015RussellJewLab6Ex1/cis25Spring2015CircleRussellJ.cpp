/**
 * Program Name: cis25Spring2015CircleRussellJ.cpp
 * Discussion:   Implementation file for CircleRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#include "cis25Spring2015CircleRussellJ.h"

CircleRussellJ::CircleRussellJ() {
    c = PointRussellJ();
    r = 0;
}

CircleRussellJ::CircleRussellJ(const CircleRussellJ& ref) {
    c = ref.c;
    r = ref.r;
}

CircleRussellJ::~CircleRussellJ() {
}

PointRussellJ CircleRussellJ::getCenter(void) const {
    return c;
}

void CircleRussellJ::setCenter(const PointRussellJ& arg) {
    c = arg;
}

FractionRussellJ CircleRussellJ::getRadius(void) const {
    return r;
}

void CircleRussellJ::setRadius(int arg) {
    if (arg < 0) {
        cout << "The radius cannot be negative. Cannot set radius." << endl;
    } else {
        r = arg;
    }
}

void CircleRussellJ::setRadius(const FractionRussellJ& arg) {
    if (arg.getNum < 0) {
        cout << "The radius cannot be negative. Cannot set radius." << endl;
    } else {
        r = arg;
    }
}

CircleRussellJ::CircleRussellJ(const PointRussellJ& arg1, const FractionRussellJ& arg2) {
    c = arg1;
    r = arg2;
}

CircleRussellJ::CircleRussellJ(const PointRussellJ& arg1, int arg2) {
    c = arg1;
    r = arg2;
}

CircleRussellJ& CircleRussellJ::operator=(const CircleRussellJ& rOp) {
    c = rOp.c;
    r = rOp.r;

    return *this;
}

ostream& operator <<(ostream& out, const CircleRussellJ& circle) {
    out << "Center: " << circle.c << endl;
    out << "Radius: " << circle.r << endl;

    return out;
}

istream& operator >>(istream& in, CircleRussellJ& circle) {
    cout << "Enter the center:" << endl;
    in >> circle.c;

    cout << "Enter the radius:" << endl;
    in >> circle.r;

    if (circle.r.getNum < 0)
    {
        cout << "The radius cannot be negative. Enter the radius:" << endl;
        in >> circle.r;
    }

    return in;
}