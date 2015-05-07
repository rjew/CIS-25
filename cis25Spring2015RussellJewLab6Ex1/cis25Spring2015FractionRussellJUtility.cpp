/**
 * Program Name: cis25Spring2015FractionRussellJUtility.cpp
 * Discussion:   Implementation file for FractionRussellJUtility
 * Written By:   Russell Jew
 * Date:         2015/04/29
 */

#include <iostream>
#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015FractionRussellJUtility.h"
using namespace std;

void init(FractionRussellJ** frPtr1Addr, FractionRussellJ** frPtr2Addr) {
    int num;
    int denom;
    int gcd;
    int option;

    do {
        cout << "    ******************************" << endl;
        cout << "    *      INITIALIZING MENU     *" << endl;
        cout << "    * 1. Set up Fractions        *" << endl;
        cout << "    * 2. Update Fractions        *" << endl;
        cout << "    * 3. Delete Fractions        *" << endl;
        cout << "    * 4. Return to Previous MENU *" << endl;
        cout << "    ******************************" << endl;
        cout << "    Select an option (1, 2, 3, or 4): ";
        cin >> option;
        cout << endl;

        switch (option) {
        case 1:
            if (*frPtr1Addr == nullptr) {

                cout << "    Enter num1: ";
                cin >> num;

                cout << "    Enter denom1: ";
                cin >> denom;

                while (denom == 0) {
                    cout << "    denom1 cannot be 0. Enter a non-zero integer: ";
                    cin >> denom;
                }

                if (denom < 0) {
                    denom = -denom;
                    num = -num;
                }

                *frPtr1Addr = new FractionRussellJ(num, denom);

                cout << "    Enter num2: ";
                cin >> num;

                cout << "    Enter denom2: ";
                cin >> denom;

                while (denom == 0) {
                    cout << "    denom2 cannot be 0. Enter a non-zero integer: ";
                    cin >> denom;
                }

                if (denom < 0) {
                    denom = -denom;
                    num = -num;
                }

                *frPtr2Addr = new FractionRussellJ(num, denom);

                cout << endl;
            }
            else {
                cout << "    Fraction1 and Fraction2 are already created!\n" << endl;
            }
            break;
        case 2:
            if (*frPtr1Addr != nullptr) {
                cout << "    Update num1: ";
                cin >> num;

                cout << "    Update denom1: ";
                cin >> denom;

                while (denom == 0) {
                    cout << "    denom1 cannot be 0. Enter a non-zero integer: ";
                    cin >> denom;
                }

                if (denom < 0) {
                    denom = -denom;
                    num = -num;
                }

                gcd = getGCD(num, denom);

                (*frPtr1Addr)->setNum(num / gcd);
                (*frPtr1Addr)->setDenom(denom / gcd);

                cout << "    Update num2: ";
                cin >> num;

                cout << "    Update denom2: ";
                cin >> denom;

                while (denom == 0) {
                    cout << "    denom2 cannot be 0. Enter a non-zero integer: ";
                    cin >> denom;
                }

                if (denom < 0) {
                    denom = -denom;
                    num = -num;
                }

                gcd = getGCD(num, denom);

                (*frPtr2Addr)->setNum(num / gcd);
                (*frPtr2Addr)->setDenom(denom / gcd);

                cout << endl;
            } else {
                cout << "    No Fractions are available!\n" << endl;
            }
            break;
        case 3:
            if (*frPtr1Addr != nullptr) {
                delete *frPtr1Addr;
                *frPtr1Addr = nullptr;
                delete *frPtr2Addr;
                *frPtr2Addr = nullptr;
                cout << "    Fraction1 and Fraction2 have been deleted.\n" << endl;
            } else {
                cout << "    No Fractions to delete!\n" << endl;
            }
            break;
        case 4:
            cout << endl;
            break;
        default:
            cout << "      WRONG OPTION ...\n" << endl;
        }
    } while (option != 4);
}

FractionRussellJ add(FractionRussellJ* frPtr1, FractionRussellJ* frPtr2) {
    return FractionRussellJ(frPtr1->getNum() * frPtr2->getDenom() + frPtr2->getNum() * frPtr1->getDenom(), 
        frPtr1->getDenom() * frPtr2->getDenom());
}

FractionRussellJ subtract(FractionRussellJ* frPtr1, FractionRussellJ* frPtr2) {
    return FractionRussellJ(frPtr1->getNum() * frPtr2->getDenom() - frPtr2->getNum() * frPtr1->getDenom(),
        frPtr1->getDenom() * frPtr2->getDenom());
}

FractionRussellJ multiply(FractionRussellJ* frPtr1, FractionRussellJ* frPtr2) {
    return FractionRussellJ(frPtr1->getNum() * frPtr2->getNum(),
        frPtr1->getDenom() * frPtr2->getDenom());
}

FractionRussellJ divide(FractionRussellJ* frPtr1, FractionRussellJ* frPtr2) {
    return FractionRussellJ(frPtr1->getNum() * frPtr2->getDenom(),
        frPtr1->getDenom() * frPtr2->getNum());
}

void print(FractionRussellJ* frPtr1, FractionRussellJ* frPtr2) {
    if (frPtr1 != nullptr) {
        cout << "        Fraction 1: ";
        cout << frPtr1->getNum() << "/" << frPtr1->getDenom() << endl;

        cout << "        Fraction 2: ";
        cout << frPtr2->getNum() << "/" << frPtr2->getDenom() << endl;

        cout << endl;
    } else {
        cout << "    Not a proper call as no Fractions are available!\n" << endl;
    }
}

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