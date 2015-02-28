/**
 * Program Name:    cis25Spring2015RussellJewLab3Ex1.cpp
 * Discussion:		Lab 3 - Exercise #1
 * Written by:		Russell Jew
 * Date Modified:	2015/02/27
 */

#include <iostream>
using namespace std;

//Function Prototype

void displayInfo(void);
int displayMenu(void);
void arrangeArrayRussellJew(void);
void createArray(int*);

int main()
{
    int option;

    displayInfo();

    do
    {
        option = displayMenu();
    } while (option != 2);

    return 0;
}

//Function Definitions

void displayInfo()
{
    cout << "Class Information --" << endl;
    cout << "  CIS 25 - C++ Programming" << endl;
    cout << "  Laney College" << endl << endl;
    cout << "Assignment Information --" << endl;
    cout << "  Assignment Number:  Lab 03 - Exercise #1" << endl;
    cout << "  Written by:         Russell Jew" << endl;
    cout << "  Due Date:           2015/03/12" << endl << endl;
}

int displayMenu()
{
    int option;

    cout << "***************************************" << endl;
    cout << "*          MENU 03 -- Arrays          *" << endl;
    cout << "* 1. Calling arrangeArrayRussellJew() *" << endl;
    cout << "* 2. Quit                             *" << endl;
    cout << "***************************************" << endl;

    cout << "Select an option (1 or 2): ";
    cin >> option;
    cout << endl;

    switch (option)
    {
    case 1:
        arrangeArrayRussellJew();
        cout << endl;
        break;
    case 2:
        cout << "  Having Fun ..." << endl;
        break;
    default:
        cout << "WRONG OPTION!\n\n\n";
    }

    return option;
}

void arrangeArrayRussellJew()
{
    int* iPtr1 = nullptr;
    int* iPtr2 = nullptr;

    cout << "Creating first array -" << endl;
    createArray(iPtr1);

    cout << "\nCreating second array -" << endl;
    createArray(iPtr2);
}


void createArray(int* iPtr)
{
    int size;
    int i;

    cout << "Enter the array size: ";
    cin >> size;

    iPtr = new int[size];

    cout << "Enter value for" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "  Index " << i << " : ";
        cin >> *(iPtr + i);
    }
}

/*  PROGRAM OUTPUT

*/

/*  PROGRAM OUTPUT COMMENTS

*/