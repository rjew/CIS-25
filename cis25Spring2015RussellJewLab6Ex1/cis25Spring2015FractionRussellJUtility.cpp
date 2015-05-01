/**
 * Program Name: cis25Spring2015FractionRussellJUtility.cpp
 * Discussion:   Implementation file for FractionRussellJUtility
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#include <iostream>
#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015FractionRussellJUtility.h"
using namespace std;

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

ostream& operator <<(ostream& out, const FractionRussellJ& fr) {
    out << fr.num << "/" << fr.denom << endl;
    return out;
}

istream& operator >>(istream& in, FractionRussellJ& fr) {
    cout << "    Enter num: ";
    cin >> fr.num;

    cout << "    Enter denom: ";
    cin >> fr.denom;

    while (fr.denom == 0) {
        cout << "    denom cannot be 0. Enter a non-zero integer: ";
        cin >> fr.denom;
    }

    if (fr.denom < 0) {
        fr.denom = -fr.denom;
        fr.num = -fr.num;
    }
}