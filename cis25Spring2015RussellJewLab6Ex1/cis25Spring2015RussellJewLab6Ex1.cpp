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
    RectangleRussellJ* rectPtr1 = nullptr;
    RectangleRussellJ* rectPtr2 = nullptr;
    CircleRussellJ* circlePtr1 = nullptr;
    CircleRussellJ* circlePtr2 = nullptr;
    PointRussellJ* ulPointPtr = nullptr;
    PointRussellJ* lrPointPtr = nullptr;
    PointRussellJ* llPointPtr = nullptr;

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
                    if (rectPtr1 == nullptr) {
                        cout << "Rectangle 1\n" << endl;
                        ulPointPtr = new PointRussellJ;
                        cout << "UPPER LEFT POINT" << endl;
                        cin >> *ulPointPtr;

                        lrPointPtr = new PointRussellJ;
                        cout << "LOWER RIGHT POINT" << endl;
                        cin >> *lrPointPtr;

                        llPointPtr = new PointRussellJ(ulPointPtr->getX(), lrPointPtr->getY());

                        cout << "Creating Rectangle 1 ...\n" << endl;
                        rectPtr1 = new RectangleRussellJ(ulPointPtr->getY() - lrPointPtr->getY(),
                            lrPointPtr->getX() - ulPointPtr->getX(), *llPointPtr);

                        cout << "Rectangle 2\n" << endl;
                        cout << "UPPER LEFT POINT" << endl;
                        cin >> *ulPointPtr;

                        cout << "LOWER RIGHT POINT" << endl;
                        cin >> *lrPointPtr;

                        llPointPtr->setX(ulPointPtr->getX());
                        llPointPtr->setY(lrPointPtr->getY());

                        cout << "Creating Rectangle 2 ...\n" << endl;
                        rectPtr2 = new RectangleRussellJ(ulPointPtr->getY() - lrPointPtr->getY(),
                            lrPointPtr->getX() - ulPointPtr->getX(), *llPointPtr);
                    } else {
                        cout << "Rectangle objects already created. Update Rectangle objects." << endl;
                        cout << "Rectangle 1\n" << endl;
                        cout << "UPPER LEFT POINT" << endl;
                        cin >> *ulPointPtr;

                        cout << "LOWER RIGHT POINT" << endl;
                        cin >> *lrPointPtr;

                        llPointPtr->setX(ulPointPtr->getX());
                        llPointPtr->setY(lrPointPtr->getY());

                        cout << "Updating Rectangle 1 ...\n" << endl;
                        rectPtr1->setLength(ulPointPtr->getY() - lrPointPtr->getY());
                        rectPtr1->setWidth(lrPointPtr->getX() - ulPointPtr->getX());
                        rectPtr1->setLowerLeftPoint(*llPointPtr);

                        cout << "Rectangle 2\n" << endl;
                        cout << "UPPER LEFT POINT" << endl;
                        cin >> *ulPointPtr;

                        cout << "LOWER RIGHT POINT" << endl;
                        cin >> *lrPointPtr;

                        llPointPtr->setX(ulPointPtr->getX());
                        llPointPtr->setY(lrPointPtr->getY());

                        cout << "Updating Rectangle 2 ...\n" << endl;
                        rectPtr2->setLength(ulPointPtr->getY() - lrPointPtr->getY());
                        rectPtr2->setWidth(lrPointPtr->getX() - ulPointPtr->getX());
                        rectPtr2->setLowerLeftPoint(*llPointPtr);
                    }
                    break;
                case 2:
                    if (rectPtr1 == nullptr) {
                        cout << "Cannot compare volume as no Rectangle objects are available!\n" << endl;
                    } else {
                        // A rectangle has no volume
                        cout << "Both volumes are 0 so they are equal." << endl;
                    }
                    break;
                case 3:
                    if (rectPtr1 == nullptr) {
                        cout << "Cannot compare area as no Rectangle objects are available!\n" << endl;
                    } else {
                        if (rectPtr1->getArea() == rectPtr2->getArea()) {
                            cout << "Rectangle 1 has the same area as Rectangle 2." << endl;
                        } else if (rectPtr1->getArea() > rectPtr2->getArea()) {
                            cout << "Rectangle 1 is has a greater area than Rectangle 2 by "
                                << rectPtr1->getArea() - rectPtr2->getArea() << " units squared." << endl;
                        } else {
                            cout << "Rectangle 2 is has a greater area than Rectangle 1 by "
                                << rectPtr2->getArea() - rectPtr1->getArea() << " units squared." << endl;
                        }
                    }
                    break;
                case 4:
                    cout << "RECTANGLE 1\n" << endl;
                    cout << *rectPtr1;
                    cout << "RECTANGLE 2\n" << endl;
                    cout << *rectPtr2;
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
                    if (circlePtr1 == nullptr) {
                        circlePtr1 = new CircleRussellJ;
                        cout << "CIRCLE 1\n" << endl;
                        cin >> *circlePtr1;

                        circlePtr2 = new CircleRussellJ;
                        cout << "CIRCLE 2\n" << endl;
                        cin >> *circlePtr2;
                    } else {
                        cout << "Circle objects already created. Update Circle objects." << endl;
                        cout << "CIRCLE 1\n" << endl;
                        cin >> *circlePtr1;

                        cout << "CIRCLE 2\n" << endl;
                        cin >> *circlePtr2;
                    }
                    break;
                case 2:
                    if (circlePtr1 == nullptr) {
                        cout << "Cannot compare volume as no Circle objects are available!\n" << endl;
                    } else {
                        // A circle has no volume
                        cout << "Both volumes are 0 so they are equal." << endl;
                    }
                    break;
                case 3:
                    if (circlePtr1 == nullptr) {
                        cout << "Cannot compare area as no Circle objects are available!\n" << endl;
                    } else {
                        if (circlePtr1->getArea() == circlePtr2->getArea()) {
                            cout << "Circle 1 has the same area as Circle 2." << endl;
                        } else if (circlePtr1->getArea() > circlePtr2->getArea()) {
                            cout << "Circle 1 is has a greater area than Circle 2 by "
                                << circlePtr1->getArea() - circlePtr2->getArea() << " units squared." << endl;
                        } else {
                            cout << "Circle 2 is has a greater area than Circle 1 by "
                                << circlePtr2->getArea() - circlePtr1->getArea() << " units squared." << endl;
                        }
                    }
                    break;
                case 4:
                    cout << "CIRCLE 1\n" << endl;
                    cout << *circlePtr1;
                    cout << "CIRCLE 2\n" << endl;
                    cout << *circlePtr2;
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

    delete rectPtr1;
    delete rectPtr2;
    delete circlePtr1;
    delete circlePtr2;
    delete ulPointPtr;
    delete lrPointPtr;
    delete llPointPtr;
}