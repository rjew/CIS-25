/**
 * Program Name:    cis25Spring2015RussellJewLab4Ex1.cpp
 * Discussion:		Lab 4 - Exercise #1
 * Written by:		Russell Jew
 * Date Modified:	2015/04/06
 */

#include <iostream>
#include "cis25Spring2015RussellJewFractionRussellJ.h"
using namespace std;

//Function Prototype

void displayInfo(void);
void displayMenu(void);
void init(FractionRussellJ*, FractionRussellJ*, FractionRussellJ*);
void add(FractionRussellJ*, FractionRussellJ*, FractionRussellJ*);
void subtract(FractionRussellJ*, FractionRussellJ*, FractionRussellJ*);
void multiply(FractionRussellJ*, FractionRussellJ*, FractionRussellJ*);
void divide(FractionRussellJ*, FractionRussellJ*, FractionRussellJ*);
void print(FractionRussellJ*, FractionRussellJ*);
int getGCD(int, int);

int main() {
    displayInfo();

    displayMenu();

    return 0;
}

//Function Definitions

void displayInfo() {
    cout << "CIS 25 - C++ Programming" << endl;
    cout << "Laney College" << endl;
    cout << "Russell Jew" << endl << endl;
    cout << "Assignment Information --" << endl;
    cout << "  Assignment Number:  Lab 04," << endl;
    cout << "                      Exercise #1" << endl;
    cout << "  Written by:         Russell Jew" << endl;
    cout << "  Due Date:           2015/04/09" << endl << endl;
}

void displayMenu() {
    int option;
    
    FractionRussellJ* frPtr1 = nullptr;
    FractionRussellJ* frPtr2 = nullptr;
    FractionRussellJ* frPtr3 = nullptr;

    do {
        cout << "***************************" << endl;
        cout << "*          MENU           *" << endl;
        cout << "*                         *" << endl;
        cout << "* 1. Calling init()       *" << endl;
        cout << "* 2. Calling add()        *" << endl;
        cout << "* 3. Calling subtract()   *" << endl;
        cout << "* 4. Calling multiply()   *" << endl;
        cout << "* 5. Calling divide()     *" << endl;
        cout << "* 6. Calling print()      *" << endl;
        cout << "* 7. Quit                 *" << endl;
        cout << "*                         *" << endl;
        cout << "***************************" << endl;

        cout << "Select an option (use integer value only) : ";
        cin >> option;
        cout << endl;

        switch (option) {
        case 1:
            cout << "Calling init() --" << endl << endl;
            if (!frPtr1) {
                frPtr1 = new FractionRussellJ();
                frPtr2 = new FractionRussellJ();
                frPtr3 = new FractionRussellJ();
            }
            init(frPtr1, frPtr2, frPtr3);
            break;
        case 2:
            cout << "Calling add() --" << endl << endl;
            add(frPtr1, frPtr2, frPtr3);
            break;
        case 3:
            cout << "Calling subtract() --" << endl << endl;
            subtract(frPtr1, frPtr2, frPtr3);
            break;
        case 4:
            cout << "Calling multiply() --" << endl << endl;
            multiply(frPtr1, frPtr2, frPtr3);
            break;
        case 5:
            cout << "Calling divide() --" << endl << endl;
            divide(frPtr1, frPtr2, frPtr3);
            break;
        case 6:
            cout << "Calling print() --" << endl << endl;
            print(frPtr1, frPtr2);
            break;
        case 7:
            cout << "Having Fun ...!" << endl;
            break;
        default:
            cout << "WRONG OPTION!\n" << endl;
        }
    } while (option != 7);

    delete[] frPtr1;
    delete[] frPtr2;
    delete[] frPtr3;
}

void init(FractionRussellJ* frPtr1, FractionRussellJ* frPtr2, FractionRussellJ* frPtr3) {
    int num1, num2, denom1, denom2;

    cout << "  Enter num1: ";
    cin >> num1;
    (*frPtr1).setNum(num1);

    cout << "  Enter denom1: ";
    cin >> denom1;
    (*frPtr1).setDenom(denom1);

    cout << "  Enter num2: ";
    cin >> num2;
    (*frPtr2).setNum(num2);

    cout << "  Enter denom2: ";
    cin >> denom2;
    (*frPtr2).setDenom(denom2);

    cout << endl;
}

void add(FractionRussellJ* frPtr1, FractionRussellJ* frPtr2, FractionRussellJ* frPtr3) {
    int num;
    int denom;
    int gcd;
    
    if (frPtr1) {
        num = (*frPtr1).getNum() * (*frPtr2).getDenom() + (*frPtr2).getNum() * (*frPtr1).getDenom();
        denom = (*frPtr1).getDenom() * (*frPtr2).getDenom();

        gcd = getGCD(num, denom);

        num /= gcd;
        denom /= gcd;

        (*frPtr3).setNum(num);
        (*frPtr3).setDenom(denom);

        cout << "  Fraction 3: " << (*frPtr3).getNum() << "/" << (*frPtr3).getDenom() << endl << endl;
    }
    else
        cout << "  Not a proper call as no Fractions are available!\n" << endl;
}

void subtract(FractionRussellJ* frPtr1, FractionRussellJ* frPtr2, FractionRussellJ* frPtr3) {
    int num;
    int denom;
    int gcd;

    if (frPtr1) {
        num = (*frPtr1).getNum() * (*frPtr2).getDenom() - (*frPtr2).getNum() * (*frPtr1).getDenom();
        denom = (*frPtr1).getDenom() * (*frPtr2).getDenom();

        gcd = getGCD(num, denom);

        num /= gcd;
        denom /= gcd;

        (*frPtr3).setNum(num);
        (*frPtr3).setDenom(denom);

        cout << "  Fraction 3: " << (*frPtr3).getNum() << "/" << (*frPtr3).getDenom() << endl << endl;
    }
    else
        cout << "  Not a proper call as no Fractions are available!\n" << endl;
}

void multiply(FractionRussellJ* frPtr1, FractionRussellJ* frPtr2, FractionRussellJ* frPtr3) {
    int num;
    int denom;
    int gcd;

    if (frPtr1) {
        num = (*frPtr1).getNum() * (*frPtr2).getNum();
        denom = (*frPtr1).getDenom() * (*frPtr2).getDenom();

        gcd = getGCD(num, denom);

        num /= gcd;
        denom /= gcd;

        (*frPtr3).setNum(num);
        (*frPtr3).setDenom(denom);

        cout << "  Fraction 3: " << (*frPtr3).getNum() << "/" << (*frPtr3).getDenom() << endl << endl;
    }
    else
        cout << "  Not a proper call as no Fractions are available!\n" << endl;
}

void divide(FractionRussellJ* frPtr1, FractionRussellJ* frPtr2, FractionRussellJ* frPtr3) {
    int num;
    int denom;
    int gcd;

    if (frPtr1) {
        num = (*frPtr1).getNum() * (*frPtr2).getDenom();
        denom = (*frPtr1).getDenom() * (*frPtr2).getNum();

        gcd = getGCD(num, denom);

        num /= gcd;
        denom /= gcd;

        (*frPtr3).setNum(num);
        (*frPtr3).setDenom(denom);

        cout << "  Fraction 3: " << (*frPtr3).getNum() << "/" << (*frPtr3).getDenom() << endl << endl;
    }
    else
        cout << "  Not a proper call as no Fractions are available!\n" << endl;
}

void print(FractionRussellJ* frPtr1, FractionRussellJ* frPtr2) {
    if (frPtr1) {
        cout << "  Fraction 1: ";
        (*frPtr1).printFraction();
        cout << "  Fraction 2: ";
        (*frPtr2).printFraction();
        cout << endl;
    }
    else
        cout << "  No Fractions are available!\n" << endl;
}


int getGCD(int arg1, int arg2) {
    int gcd = 1;
    int i;

    for (i = 2; i <= arg1 && i <= arg2; i++) {
        if (arg1 % i == 0 && arg2 % i == 0)
            gcd = i;
    }

    return gcd;
}

/*  PROGRAM OUTPUT

*/

/*  PROGRAM OUTPUT COMMENTS

*/