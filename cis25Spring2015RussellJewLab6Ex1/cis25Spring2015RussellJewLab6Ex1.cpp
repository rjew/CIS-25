/**
 * Program Name: cis25Spring2015RussellJewLab6Ex1.cpp
 * Discussion:   Menu Program
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#include <iostream>
#include "cis25Spring2015CircleRussellJ.h"
#include "cis25Spring2015FractionRussellJ.h"
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
}