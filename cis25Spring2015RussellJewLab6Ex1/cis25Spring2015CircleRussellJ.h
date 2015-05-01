/**
 * Program Name: cis25Spring2015CircleRussellJ.h
 * Discussion:   Specification file for CircleRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#ifndef CIRCLERUSSELLJ_H
#define CIRCLERUSSELLJ_H

class CircleRussellJ {
public:
    CircleRussellJ();
    CircleRussellJ(const CircleRussellJ&);
    CircleRussellJ(int);
    CircleRussellJ(int, int);

    int getNum(void) const;
    void setNum(int);

    int getDenom(void) const;
    void setDenom(int);

    void printFraction(void) const;

    CircleRussellJ add(const CircleRussellJ&);
    CircleRussellJ subtract(const CircleRussellJ&);
    CircleRussellJ multiply(const CircleRussellJ&);
    CircleRussellJ divide(const CircleRussellJ&);

    CircleRussellJ& operator=(const CircleRussellJ&);
    CircleRussellJ operator+(const CircleRussellJ&);
    CircleRussellJ operator-(const CircleRussellJ&);
    CircleRussellJ operator*(const CircleRussellJ&);
    CircleRussellJ operator/(const CircleRussellJ&);
private:
    int num;
    int denom;
};

#endif 