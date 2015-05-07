/**
 * Program Name: cis25Spring2015RussellJewLab6Ex1.cpp
 * Discussion:   Menu Program
 * Written By:   Russell Jew
 * Date:         2015/05/07
 */

#include <iostream>
#include "cis25Spring2015CircleRussellJ.h"
#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015FractionRussellJUtility.h"
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
    int objectOption;
    int i;
    FractionRussellJ* mixedObjectPtr = nullptr;
    RectangleRussellJ* rectPtr1 = nullptr;
    RectangleRussellJ* rectPtr2 = nullptr;
    CircleRussellJ* circlePtr1 = nullptr;
    CircleRussellJ* circlePtr2 = nullptr;

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
                cout << "  Enter your option (between 1 through 5): ";
                cin >> option2;
                cout << endl;

                switch (option2) {
                case 1:
                    if (rectPtr1 == nullptr) {
                        cout << "    RECTANGLE 1\n" << endl;
                        rectPtr1 = new RectangleRussellJ();
                        cin >> *rectPtr1;

                        cout << "\n    RECTANGLE 2\n" << endl;
                        rectPtr2 = new RectangleRussellJ();
                        cin >> *rectPtr2;

                        cout << endl;
                    } else {
                        cout << "    Rectangle objects already created. Updating Rectangle objects...\n" << endl;
                        cout << "    RECTANGLE 1\n" << endl;
                        cin >> *rectPtr1;

                        cout << "\n    RECTANGLE 2\n" << endl;
                        cin >> *rectPtr2;
                        
                        cout << endl;
                    }
                    break;
                case 2:
                    if (rectPtr1 == nullptr) {
                        cout << "    Cannot compare volume as no Rectangle objects are available!\n" << endl;
                    } else {
                        // A rectangle has no volume
                        cout << "    Both volumes are 0 so they are equal.\n" << endl;
                    }
                    break;
                case 3:
                    if (rectPtr1 == nullptr) {
                        cout << "    Cannot compare area as no Rectangle objects are available!\n" << endl;
                    } else {
                        cout << "    RECTANGLE 1 AREA: " << rectPtr1->getArea() << endl;
                        cout << "    RECTANGLE 2 AREA: " << rectPtr2->getArea() << endl;

                        if (rectPtr1->getArea() == rectPtr2->getArea()) {
                            cout << "\n    Rectangle 1 has the same area as Rectangle 2.\n" << endl;
                        } else if (rectPtr1->getArea() > rectPtr2->getArea()) {
                            cout << "\n    Rectangle 1 is has a greater area than Rectangle 2.\n" << endl;
                        } else {
                            cout << "\n    Rectangle 2 is has a greater area than Rectangle 1.\n" << endl;
                        }
                    }
                    break;
                case 4:
                    if (rectPtr1 == nullptr) {
                        cout << "    Cannot print Rectangle objects as no Rectangle objects are available!\n" << endl;
                    } else {
                        cout << "    RECTANGLE 1\n" << endl;
                        cout << *rectPtr1;
                        cout << "    RECTANGLE 2\n" << endl;
                        cout << *rectPtr2;
                    }
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
                cout << "  Enter your option (between 1 through 5): ";
                cin >> option2;
                cout << endl;

                switch (option2) {
                case 1:
                    if (circlePtr1 == nullptr) {
                        circlePtr1 = new CircleRussellJ;
                        cout << "    CIRCLE 1\n" << endl;
                        cin >> *circlePtr1;

                        circlePtr2 = new CircleRussellJ;
                        cout << "\n    CIRCLE 2\n" << endl;
                        cin >> *circlePtr2;
                        
                        cout << endl;
                    } else {
                        cout << "    Circle objects already created. Updating Circle objects...\n" << endl;
                        cout << "    CIRCLE 1\n" << endl;
                        cin >> *circlePtr1;

                        cout << "\n    CIRCLE 2\n" << endl;
                        cin >> *circlePtr2;

                        cout << endl;
                    }
                    break;
                case 2:
                    if (circlePtr1 == nullptr) {
                        cout << "    Cannot compare volume as no Circle objects are available!\n" << endl;
                    } else {
                        // A circle has no volume
                        cout << "    Both volumes are 0 so they are equal.\n" << endl;
                    }
                    break;
                case 3:
                    if (circlePtr1 == nullptr) {
                        cout << "    Cannot compare area as no Circle objects are available!\n" << endl;
                    } else {
                        cout << "    CIRCLE 1 AREA: " << circlePtr1->getArea() << endl;
                        cout << "    CIRCLE 2 AREA: " << circlePtr2->getArea() << endl;

                        if (circlePtr1->getArea() == circlePtr2->getArea()) {
                            cout << "\n    Circle 1 has the same area as Circle 2.\n" << endl;
                        } else if (circlePtr1->getArea() > circlePtr2->getArea()) {
                            cout << "\n    Circle 1 is has a greater area than Circle 2.\n" << endl;
                        } else {
                            cout << "\n    Circle 2 is has a greater area than Circle 1.\n" << endl;
                        }
                    }
                    break;
                case 4:
                    if (circlePtr1 == nullptr) {
                        cout << "    Cannot print Circle objects as no Circle objects are available!\n" << endl;
                    } else {
                        cout << "    CIRCLE 1\n" << endl;
                        cout << *circlePtr1;
                        cout << "    CIRCLE 2\n" << endl;
                        cout << *circlePtr2;
                    }
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
                cout << "  Enter your option (between 1 through 4): ";
                cin >> option2;
                cout << endl;

                switch (option2) {
                case 1:
                    if (rectPtr1 == nullptr || circlePtr1 == nullptr) {
                        cout << "    Cannot compare area as not all objects are available!\n" << endl;
                    } else {
                        //To hold the two object areas being compared
                        if (mixedObjectPtr == nullptr)
                            mixedObjectPtr = new FractionRussellJ[2];

                        for (i = 0; i < 2; i++) {
                            do {
                                cout << "    RECTANGLE & CIRCLE OBJECTS" << endl;
                                cout << "    1. Rectangle 1" << endl;
                                cout << "    2. Rectangle 2" << endl;
                                cout << "    3. Circle 1" << endl;
                                cout << "    4. Circle 2" << endl;
                                cout << "    Pick object #" << i + 1 << " (Select between 1 through 4): ";
                                cin >> objectOption;
                                cout << endl;

                                switch (objectOption) {
                                case 1:
                                    *(mixedObjectPtr + i) = rectPtr1->getArea();
                                    break;
                                case 2:
                                    *(mixedObjectPtr + i) = rectPtr2->getArea();
                                    break;
                                case 3:
                                    *(mixedObjectPtr + i) = circlePtr1->getArea();
                                    break;
                                case 4:
                                    *(mixedObjectPtr + i) = circlePtr2->getArea();
                                    break;
                                default:
                                    cout << "      WRONG OPTION ...\n" << endl;
                                }
                            } while (objectOption < 1 || objectOption > 4);
                        }
                        cout << "      OBJECT 1 AREA: " << *(mixedObjectPtr + 0) << endl;
                        cout << "      OBJECT 2 AREA: " << *(mixedObjectPtr + 1) << endl;

                        if (*(mixedObjectPtr + 0) == *(mixedObjectPtr + 1)) {
                            cout << "\n      Object 1 has the same area as Object 2.\n" << endl;
                        } else if (*(mixedObjectPtr + 0) > *(mixedObjectPtr + 1)) {
                            cout << "\n      Object 1 is has a greater area than Object 2.\n" << endl;
                        } else {
                            cout << "\n      Object 2 is has a greater area than Object 1.\n" << endl;
                        }
                    }
                    break;
                case 2:
                    if (rectPtr1 == nullptr || circlePtr1 == nullptr) {
                        cout << "    Cannot compare volume as not all objects are available!\n" << endl;
                    }
                    else {
                        for (i = 0; i < 2; i++) {
                            do {
                                cout << "    RECTANGLE & CIRCLE OBJECTS" << endl;
                                cout << "    1. Rectangle 1" << endl;
                                cout << "    2. Rectangle 2" << endl;
                                cout << "    3. Circle 1" << endl;
                                cout << "    4. Circle 2" << endl;
                                cout << "    Pick object #" << i + 1 << " (Select between 1 through 4): ";
                                cin >> objectOption;
                                cout << endl;

                                switch (objectOption) {
                                case 1:
                                    break;
                                case 2:
                                    break;
                                case 3:
                                    break;
                                case 4:
                                    break;
                                default:
                                    cout << "      WRONG OPTION ...\n" << endl;
                                }
                            } while (objectOption < 1 || objectOption > 4);
                        }

                        //Rectangles and circles have no volumes, both volumes are 0
                        cout << "      Object 1 has the same volume as Object 2.\n" << endl;
                    }
                    break;
                case 3:
                    if (rectPtr1 == nullptr || circlePtr1 == nullptr) {
                        cout << "    Cannot print objects as not all objects are available!\n" << endl;
                    } else {
                        cout << "    RECTANGLE 1" << endl;
                        cout << *rectPtr1;
                        cout << "    RECTANGLE 2" << endl;
                        cout << *rectPtr2;
                        cout << "    CIRCLE 1" << endl;
                        cout << *circlePtr1;
                        cout << "    CIRCLE 2" << endl;
                        cout << *circlePtr2;
                    }
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

    delete[] mixedObjectPtr;
    delete rectPtr1;
    delete rectPtr2;
    delete circlePtr1;
    delete circlePtr2;
}