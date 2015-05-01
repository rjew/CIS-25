/**
 * Program Name: cis25Spring2015RussellJewLab6Ex1.cpp
 * Discussion:   Menu Program
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#include <iostream>
#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015FractionRussellJUtility.h"
#include "cis25Spring2015CircleRussellJ.h"
#include "cis25Spring2015PointRussellJ.h"
#include "cis25Spring2015RectangleRussellJ.h"
using namespace std;

void displayInfo() {
    cout << "CIS 25 - C++ Programming" << endl;
    cout << "Laney College" << endl;
    cout << "Russell Jew" << endl << endl;
    cout << "Assignment Information --" << endl;
    cout << "  Assignment Number:  Lab 6," << endl;
    cout << "                      Exercise #1" << endl;
    cout << "  Written by:         Russell Jew" << endl;
    cout << "  Due Date:           2015/05/07" << endl << endl;
}

void displayMenu() {
    int option1;
    int option2;

    FractionRussellJ* frPtr1 = nullptr;
    FractionRussellJ* frPtr2 = nullptr;
    FractionRussellJ* resultPtr = nullptr;

    do {
        cout << "MAIN MENU" << endl;
        cout << "(1) Rectangle Tasks" << endl;
        cout << "(2) Circle Tasks" << endl;
        cout << "(3) Mixed Retangle & Circle Tasks" << endl;
        cout << "(4) Quit" << endl;

        cout << "Enter your option (1, 2, 3 or 4): ";
        cin >> option1;
        cout << endl;

        switch (option1) {
        case 1:
            do {
                cout << "  RECTANGLE MENU" << endl;
                cout << "  1. Create two Rectangle objects" << endl;
                cout << "  2. Compare by volume" << endl;
                cout << "  3. Compare by area" << endl;
                cout << "  4. Print two Rectangle objects" << endl;
                cout << "  5. Quit" << endl;
                cout << "Enter your option (between 1 through 5): ";
                cin >> option2;
                cout << endl;

                switch (option2) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    cout << endl;
                    break;
                default:
                    cout << "    WRONG OPTION ...\n" << endl;
                }
            } while (option2 != 5);
            break;
        case 2:
            do {
                cout << "  CIRCLE MENU" << endl;
                cout << "  1. Create two Circle objects" << endl;
                cout << "  2. Compare by volume" << endl;
                cout << "  3. Compare by area" << endl;
                cout << "  4. Print two Circle objects" << endl;
                cout << "  5. Quit" << endl;
                cout << "Enter your option (between 1 through 5): ";
                cin >> option2;
                cout << endl;

                switch (option2) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    cout << endl;
                    break;
                default:
                    cout << "    WRONG OPTION ...\n" << endl;
                }
            } while (option2 != 5);
            break;
        case 3:
            do {
                cout << "  MIXED RECTANGLE & CIRCLE MENU" << endl;
                cout << "  1. Compare by area" << endl;
                cout << "  2. Compare by volume" << endl;
                cout << "  3. Print ALL objects" << endl;
                cout << "  4. Quit" << endl;
                cout << "Enter your option (between 1 through 4): ";
                cin >> option2;
                cout << endl;

                switch (option2) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    cout << endl;
                    break;
                default:
                    cout << "    WRONG OPTION ...\n" << endl;
                }
            } while (option2 != 4);
            break;
        case 4:
            cout << "  Have fun and good bye!" << endl;
            break;
        default:
            cout << "  WRONG OPTION!\n" << endl;
        }
    } while (option1 != 4);

    delete frPtr1;
    delete frPtr2;
    delete resultPtr;
}

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
            }
            else {
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
            }
            else {
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