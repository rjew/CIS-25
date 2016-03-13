/**
 * Program Name: cis25Spring2015ShapeRussellJ.h
 * Discussion:   An abstract class
 * Written By:   Russell Jew
 * Date:         2015/05/21
 */

#ifndef SHAPERUSSELLJ_H
#define SHAPERUSSELLJ_H

#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015PointRussellJ.h"

class ShapeRussellJ {
public:
    virtual FractionRussellJ computeArea() = 0;
    virtual FractionRussellJ computeVolume() = 0;

    virtual void print() const {
        cout << "Shape : To be updated in the derived class!" << endl;
    }
};

// your I/O OPERATOR functions and other utilities here

#endif
