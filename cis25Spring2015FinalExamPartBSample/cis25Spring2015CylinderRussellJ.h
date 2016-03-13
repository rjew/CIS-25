/**
* Program Name: cis25Spring2015CylinderRussellJ.h
* Discussion:   Specification file for CylinderRussellJ
* Written By:   Russell Jew
* Date:         2015/05/21
*/

#ifndef CYLINDERRUSSELLJ_H
#define CYLINDERRUSSELLJ_H

#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015PointRussellJ.h"
#include "cis25Spring2015CircleRussellJ.h"

class CylinderRussellJ : public CircleRussellJ {
public:

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
private:
    FractionRussellJ h;
};

#endif 