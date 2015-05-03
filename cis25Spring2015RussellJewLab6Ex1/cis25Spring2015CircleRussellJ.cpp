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

    return in;
}