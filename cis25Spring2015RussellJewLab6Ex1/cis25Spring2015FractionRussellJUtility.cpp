/**
 * Program Name: cis25Spring2015FractionRussellJUtility.cpp
 * Discussion:   Implementation file for FractionRussellJUtility
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#include "cis25Spring2015FractionRussellJUtility.h"

int getGCD(int arg1, int arg2) {
    int gcd = 1;
    int i;

    arg1 = arg1 < 0 ? -arg1 : arg1;
    arg2 = arg2 < 0 ? -arg2 : arg2;

    for (i = 2; i <= arg1 && i <= arg2; i++) {
        if (arg1 % i == 0 && arg2 % i == 0)
            gcd = i;
    }

    return gcd;
}