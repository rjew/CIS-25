/**
 * Program Name: cis25Spring2015PointRussellJ.cpp
 * Discussion:   Implementation file for PointRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#include "cis25Spring2015PointRussellJ.h"

PointRussellJ::PointRussellJ() : x(FractionRussellJ()), y(FractionRussellJ()) {
}

PointRussellJ::PointRussellJ(const PointRussellJ& ref) : x(ref.x), y(ref.y) {
}

PointRussellJ::PointRussellJ(int iArg1, int iArg2) : x(iArg1), y(iArg2) {
}

PointRussellJ::PointRussellJ(const FractionRussellJ& fracArg1, const FractionRussellJ& fracArg2) :
    x(fracArg1), y(fracArg2) {
}

PointRussellJ::~PointRussellJ() {
}

FractionRussellJ PointRussellJ::getX() const {
    return x;
}

void PointRussellJ::setX(int iArg) {
    x = iArg;
}

void PointRussellJ::setX(const FractionRussellJ& fracArg) {
    x = fracArg;
}

FractionRussellJ PointRussellJ::getY() const {
    return y;
}

void PointRussellJ::setY(int iArg) {
    y = iArg;
}

void PointRussellJ::setY(const FractionRussellJ& fracArg) {
    y = fracArg;
}

PointRussellJ& PointRussellJ::operator=(const PointRussellJ& rOp) {
    x = rOp.x;
    y = rOp.y;

    return *this;
}

void PointRussellJ::moveBy(FractionRussellJ delX, FractionRussellJ delY) {
    x = x + delX;
    y = y + delY;
}

void PointRussellJ::moveBy(int iOld) {
    x = x + iOld;
    y = y + iOld;
}

void PointRussellJ::flipByX() {
    x = x * -1;
}

void PointRussellJ::flipByY() {
    y = y * -1;
}

void PointRussellJ::flipThroughOrigin() {
    x = x * -1;
    y = y * -1;
}

void PointRussellJ::print() const {
    cout << *this;
}

ostream& operator <<(ostream& out, const PointRussellJ& pt) {
    out << "(" << pt.x << ", " << pt.y << ")" << endl;
    return out;
}

istream& operator >>(istream& in, PointRussellJ& pt) {
    cout << "  Enter the x-coordinate:" << endl;
    in >> pt.x;

    cout << "\n  Enter the y-coordinate:" << endl;
    in >> pt.y;

    return in;
}