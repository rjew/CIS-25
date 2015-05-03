/**
 * Program Name: cis25Spring2015PointRussellJ.cpp
 * Discussion:   Implementation file for PointRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#include "cis25Spring2015PointRussellJ.h"

PointRussellJ::PointRussellJ() {
    x = 0;
    y = 0;
}

PointRussellJ::PointRussellJ(const PointRussellJ& pt) {
    x = pt.x;
    y = pt.y;
}

PointRussellJ::PointRussellJ(int arg1, int arg2) {
    x = arg1;
    y = arg2;
}

PointRussellJ::~PointRussellJ() {
}

FractionRussellJ PointRussellJ::getX() const {
    return x;
}

void PointRussellJ::setX(int arg) {
    x = arg;
}

FractionRussellJ PointRussellJ::getY() const {
    return y;
}

void PointRussellJ::setY(int arg) {
    y = arg;
}

PointRussellJ& PointRussellJ::operator=(const PointRussellJ& pt) {
    x = pt.x;
    y = pt.y;

    return *this;
}

void PointRussellJ::moveBy(FractionRussellJ delX, FractionRussellJ delY) {
    x = x + delX;
    y = y + delY;
}

void PointRussellJ::moveBy(int iOld) {
    x = x + iOld;
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
    cout << "Enter the x-coordinate: ";
    in >> pt.x;

    cout << "Enter y-coordinate: ";
    in >> pt.y;

    return in;
}