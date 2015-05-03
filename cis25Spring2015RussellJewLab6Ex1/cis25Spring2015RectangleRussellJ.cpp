/**
 * Program Name: cis25Spring2015RectangleRussellJ.cpp
 * Discussion:   Implementation file for RectangleRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#include "cis25Spring2015RectangleRussellJ.h"

RectangleRussellJ::RectangleRussellJ() {

}

RectangleRussellJ::RectangleRussellJ(const RectangleRussellJ&) {

}

RectangleRussellJ::~RectangleRussellJ() {

}

RectangleRussellJ& RectangleRussellJ::operator=(const RectangleRussellJ&) {
    return *this;
}

ostream& operator <<(ostream& out, const RectangleRussellJ& rect) {

    return out;
}

istream& operator >>(istream& in, RectangleRussellJ& rect) {

    return in;
}