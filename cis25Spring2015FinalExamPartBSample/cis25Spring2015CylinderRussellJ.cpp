/**
 * Program Name: cis25Spring2015CylinderRussellJ.cpp
 * Discussion:   Implementation file for CylinderRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/21
 */

#include "cis25Spring2015RectangleRussellJ.h"
#include "cis25Spring2015CylinderRussellJ.h"

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

FractionRussellJ RectangleRussellJ::computeArea() const {
    return (ur.getX - ll.getX) * (ur.getY - ll.getY);
}

FractionRussellJ RectangleRussellJ::computeVolume() const {
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

CylinderRussellJ();
CylinderRussellJ(const CylinderRussellJ&);

~CylinderRussellJ();

FractionRussellJ getHeight(void) const;
void setHeight(int);
void setHeight(const FractionRussellJ&);

FractionRussellJ computeVolume(void) const;

void print(void) const;

CylinderRussellJ& operator=(const CylinderRussellJ&);

friend ostream& operator <<(ostream&, const CylinderRussellJ&);
friend istream& operator >>(istream&, CylinderRussellJ&);