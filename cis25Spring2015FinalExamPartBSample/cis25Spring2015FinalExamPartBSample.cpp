/**
 * Program Name: cis25Spring2015FinalExamPartBSample.cpp
 * Discussion:   Spring 2015 Final Exam Part B
 * Written by:   Russell Jew
 * Date:	     2015/05/21
 */

#include <iostream>
#include "cis25Spring2015CircleRussellJ.h"
#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015FractionRussellJUtility.h"
#include "cis25Spring2015PointRussellJ.h"
#include "cis25Spring2015RectangleRussellJ.h"
//#include "cis25Spring2015BoxRussellJ.h"
//#include "cis25Spring2015CylinderRussellJ.h"
using namespace std;

void menu(void);
void printMenu(void);

int main() {
    
    menu();

    return 0;
}

void menu() {
    cout << "Starting at Line 1000 -- Fractions:" << endl; // Line 1000

    FractionRussellJ* fPtrA =
        new FractionRussellJ(8, 1); // Line 1100
    cout << *fPtrA << endl; // display the information of the above object
    
    FractionRussellJ* fPtrB =
        new FractionRussellJ(2, 1); // Line 1200
    cout << *fPtrB << endl; // display the information of the above object
    
    FractionRussellJ* fPtrC =
        new FractionRussellJ(3, 1); // Line 1300
    cout << *fPtrC << endl; // display the information of the above object
    
    FractionRussellJ* fPtrD =
        new FractionRussellJ(6, 1); // Line 1400
    cout << *fPtrD << endl; // display the information of the above object
    
    FractionRussellJ* fPtrE =
        new FractionRussellJ(-8, 1); // Line 1500
    cout << *fPtrE << endl; // display the information of the above object
    
    FractionRussellJ* fPtrF =
        new FractionRussellJ(-2, 1); // Line 1600
    cout << *fPtrF << endl; // display the information of the above object
    
    FractionRussellJ* fPtrG =
        new FractionRussellJ(-3, 1); // Line 1700
    cout << *fPtrG << endl; // display the information of the above object
    
    FractionRussellJ* fPtrH =
        new FractionRussellJ(-6, 1); // Line 1800
    cout << *fPtrH << endl; // display the information of the above object
    

    cout << "Starting at Line 2000 -- Points:" << endl; // Line 2000
    
    PointRussellJ* pPtrA =
        new PointRussellJ(fPtrA, fPtrB); // Line 2100
    cout << *pPtrA << endl; // display the information of the above object
    
    PointRussellJ* pPtrB =
        new PointRussellJ(fPtrB, fPtrC); // Line 2200
    cout << *pPtrB << endl; // display the information of the above object
    PointRussellJ* pPtrC =
        new PointRussellJ(fPtrC, fPtrD); // Line 2300
    cout << *pPtrC << endl; // display the information of the above object
    PointRussellJ* pPtrD =
        new PointRussellJ(fPtrD, fPtrE); // Line 2400
    cout << *pPtrD << endl; // display the information of the above object
    PointRussellJ* pPtrE =
        new PointRussellJ(fPtrE, fPtrF); // Line 2500
    cout << *pPtrE << endl; // display the information of the above object
    PointRussellJ* pPtrF =
        new PointRussellJ(fPtrF, fPtrG); // Line 2600
    cout << *pPtrF << endl; // display the information of the above object
    PointRussellJ* pPtrG =
        new PointRussellJ(fPtrG, fPtrH); // Line 2700
    cout << *pPtrG << endl; // display the information of the above object
    PointRussellJ* pPtrH =
        new PointRussellJ(fPtrH, fPtrA); // Line 2800
    cout << *pPtrH << endl; // display the information of the above object
    
    cout << "\nStarting at Line 3000 -- Circles:" << endl; // Line 3000
    // Complete the next statement – Line 3100
    CircleRussellJ* cPtrA = new CircleRussellJ(*pPtrA, *fPtrD);// Complete the statement to create a circle
        // center pointed to by pPtrA and radius pointed
        // to by fPtrD
        cout << *cPtrA << endl; // display the information of the above object
    // Complete the next statement – Line 3200
    CircleRussellJ* cPtrB = new CircleRussellJ(*pPtrD, *fPtrB);// Complete the statement to create a circle
        // center pointed to by pPtrD and radius
        // pointed to by fPtrB
        cout << *cPtrB << endl; // display the information of the above object
    // Complete the next statement – Line 3300
    CircleRussellJ* cPtrC = new CircleRussellJ(*pPtrE, *fPtrA);// Complete the statement to create a circle
        // center pointed to by pPtrE and radius
        // pointed to by fPtrA
        cout << *cPtrC << endl; // display the information of the above object
    
    cout << "\nStarting at Line 4000 -- Rectangles:" << endl; // Line 4000
    // Complete the next statement – Line 4100
    RectangleRussellJ* rPtrA = new RectangleRussellJ(*pPtrA,*pPtrG);// Complete the statement to create a
        // rectangle with lower-left pointed to
        // by pPtrG and upper-right pointed to
        // by pPtrA
        cout << *rPtrA << endl; // display the information of the above object
    // Complete the next statement – Line 4200
    RectangleRussellJ* rPtrB = new RectangleRussellJ(*pPtrB, *pPtrE); // Complete the statement to create a
        // rectangle with lower-left pointed to
        // by pPtrE and upper-right pointed to
        // by pPtrB
        cout << *rPtrB << endl; // display the information of the above object
    // Complete the next statement – Line 4300
    RectangleRussellJ* rPtrC = new RectangleRussellJ(*pPtrF, *pPtrC);// Complete the statement to create a
        // rectangle with lower-left pointed to
        // by pPtrC and upper-right pointed to
        // by pPtrF
        cout << *rPtrC << endl; // display the information of the above object
/*
    cout << "\nStarting at Line 5000 -- Boxes:" << endl; // Line 5000
    // Complete the next statement – Line 5100
    BoxRussellJ* bPtrA = // Complete the statement to create a box
        // with base pointed to by rPtrA and height pointed
        // to by fPtrB
        cout << *bPtrA << endl; // display the information of the above object
    // Complete the next statement – Line 5200
    BoxRussellJ* bPtrB = // Complete the statement to create a box
        // with base pointed to by rPtrB and height pointed
        // to by fPtrC
        cout << *bPtrB << endl; // display the information of the above object
    // Complete the next statement – Line 5300
    BoxRussellJ* bPtrC = // Complete the statement to create a box
        // with base pointed to by rPtrC and height pointed
        // to by fPtrD
        cout << *bPtrC << endl; // display the information of the above object
    
    cout << "\nStarting at Line 6000 -- Cylinders:" << endl; // Line 6000
    // Complete the next statement – Line 6100
    CylinderRussellJ* cyPtrA = // Complete the statement to create a
        // cylinder with base pointed to by cPtrA and
        // height pointed to by fPtrB
        cout << *cyPtrA << endl; // display the information of the above object
    // Complete the next statement – Line 6200
    CylinderRussellJ* cyPtrB = // Complete the statement to create a box
        // with base pointed to by cPtrB and height
        // pointed to by fPtrC
        cout << *cyPtrB << endl; // display the information of the above object
    // Complete the next statement – Line 6300
    CylinderRussellJ* cyPtrC = // Complete the statement to create a box
        // with base pointed to by cPtrC and height
        // pointed to by fPtrA
        cout << *cyPtrC << endl; // display the information of the above object
*/    
    cout << "\nStarting at Line 6500 -- MENU:" << endl; // Line 6500
    int option; // Line 7000
    // As needed, set up storage structures (for example, dynamic arrays) for
    // - All circles // Line 7100
    // - All cylinders // Line 7200
    // - All rectangles // Line 7300
    // - All boxes // Line 7400
    // These objects will be sent to the functions as a menu option
    // is selected
    do { // Line 8000
        printMenu(); // Line 8100
        cout << "\nEnter the option: "; // Line 8200
        cin >> option; // Line 8300
        switch (option) { // Line 9000
        case 1: // Line 9100
            // do case 1
            // - Implement a function named as
            // display2LargestFractionRussellJ() to receive appropriate
            // arrays of objects and array sizes as arguments
            // - Print the required info within the function
        case 2: // Line 9200
            // do case 2
            // - Implement a function named as
            // display2ClosetPointRussellJ() to receive
            // appropriate arrays of objects and array sizes
            // as arguments
            // - Print the required info within the function
        case 3: // Line 9300
            // do case 3
            // - Implement a function named as
            // display2ClosetObjectRussellJ() to receive appropriate
            // array(s) of objects and array size(s) as arguments
            // - Print the required info within the function
        case 4: // Line 9400
            // do case 4
            // - Implement a function named as
            // displaySecondLargestAreaRussellJ() to receive
            // appropriate array(s) of objects and array size(s)
            // as arguments
            // - Print the required info within the function
        case 5: // Line 9500
            // do case 5
            // - Implement a function named as
            // displayAllVolumeRussellJ() to receive appropriate
            // array(s) of objects and array size(s) as arguments
            // - Print the required info within the function
        case 6: // Line 9600
            // quit appreciately and nicely
        default: // Line 9700
            // handle wrong option
            break;
        }
    } while (option != 6); // Line 9900
        // Line 10000
        // Set up code to handle the deletions of ALL
        // DYNAMIC COMPONENTS & OBJECTS
        return; // Line 10500
}

void printMenu() {
        cout << "\n**************************************************************"
            << "\n*                            MENU                            *"
            << "\n* 1. Display 2 Largest Fractions                             *"
            << "\n* 2. Display 2 Closet Points                                 *"
            << "\n* 3. Display 2 Closet Objects                                *"
            << "\n* 4. Display Second Largest Area (Of All Objects)            *"
            << "\n* 5. Display Volumes from Largest to smallest (All Objects)  *"
            << "\n* 6. Quit                                                    *"
            << "\n**************************************************************";
}

/*  PROGRAM OUTPUT
*/
