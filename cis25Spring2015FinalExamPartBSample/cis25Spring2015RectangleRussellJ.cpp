/**
 * Program Name: cis25Spring2015RectangleRussellJ.cpp
 * Discussion:   Implementation file for RectangleRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/07
 */

#include "cis25Spring2015RectangleRussellJ.h"

RectangleRussellJ::RectangleRussellJ() : ur(PointRussellJ()), ll(PointRussellJ()) {
}

RectangleRussellJ::RectangleRussellJ(const RectangleRussellJ& ref) : 
    ur(ref.ur), ll(ref.ll) {
}

RectangleRussellJ::RectangleRussellJ(const PointRussellJ& ptArg1, 
    const PointRussellJ& ptArg2) :
    ur(ptArg1), ll(ptArg2) {
}

RectangleRussellJ::~RectangleRussellJ() {
}

PointRussellJ RectangleRussellJ::getUpperRightPoint() const {
    return ur;
}

void RectangleRussellJ::setUpperRightPoint(const PointRussellJ& ptArg) {
    ur = ptArg;
}

PointRussellJ RectangleRussellJ::getLowerLeftPoint() const {
    return ll;
}

void RectangleRussellJ::setLowerLeftPoint(const PointRussellJ& ptArg) {
    ll = ptArg;
}

FractionRussellJ RectangleRussellJ::computeArea() {
    return (ur.getX() - ll.getX()) * (ur.getY() - ll.getY());
}

FractionRussellJ RectangleRussellJ::computeVolume() {
    return FractionRussellJ();
}

void RectangleRussellJ::print() const {
    cout << "    Upper Right Point: " << ur << endl;
    cout << "    Lower Left Point: " << ll << endl;
}

RectangleRussellJ& RectangleRussellJ::operator=(const RectangleRussellJ& rOp) {
    ur = rOp.ur;
    ll = rOp.ll;

    return *this;
}

RectangleRussellJ RectangleRussellJ::operator+(const RectangleRussellJ& rOp) {
    return RectangleRussellJ(ur + rOp.ur, ll + rOp.ll);
}

ostream& operator <<(ostream& out, const RectangleRussellJ& rect) {
    out << "  Upper Right Point: " << rect.ur << endl;
    out << "  Lower Left Point: " << rect.ll << endl;
    out << "  Area: " << rect.computeArea << endl;

    return out;
}

istream& operator >>(istream& in, RectangleRussellJ& rect) {
    cout << "\n    Enter the upper right point:\n" << endl;
    in >> rect.ur;

    cout << "\n    Enter the lower left point:\n" << endl;
    in >> rect.ll;

    return in;
}