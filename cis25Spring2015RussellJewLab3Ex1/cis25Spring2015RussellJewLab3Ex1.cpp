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
void storeArrayElements(int*, int);
void displayArrays(int*, int, int*, int);
int swapAndCount(int*, int, int*, int, int*, int*);
void displaySwappingInfo(int*, int*, int);

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
        cout << "\n  Having Fun ..." << endl;
        break;
    default:
        cout << "WRONG OPTION!\n\n\n";
    }

    return option;
}

void arrangeArrayRussellJew()
{
    int* iPtr1;
    int* iPtr2;
    int size1;
    int size2;
    int swaps;
    int* swappedValue1;
    int* swappedValue2;

    cout << "Creating first array -" << endl;
    cout << "Enter the array size: ";
    cin >> size1;

    iPtr1 = new int[size1];
    storeArrayElements(iPtr1, size1);

    cout << "\nCreating second array -" << endl;
    cout << "Enter the array size: ";
    cin >> size2;

    iPtr2 = new int[size2];
    storeArrayElements(iPtr2, size2);

    cout << "\nCalling arrangeArrayRussellJew() --" << endl;
    cout << "  Original Arrays" << endl;
    displayArrays(iPtr1, size1, iPtr2, size2);

    //Create an array to store the indices of the swapped values.
    //The maximum number of swaps is the smallest array size.
    if (size1 < size2)
    {
        swappedValue1 = new int[size1];
        swappedValue2 = new int[size1];
    }
    else
    {
        swappedValue1 = new int[size2];
        swappedValue2 = new int[size2];
    }

    swaps = swapAndCount(iPtr1, size1, iPtr2, size2, swappedValue1, swappedValue2);

    cout << "\n  Updated Arrays" << endl;
    displayArrays(iPtr1, size1, iPtr2, size2);

    if (swaps != 0)
    {
        cout << "\n  Swapping Info -" << endl;
        displaySwappingInfo(swappedValue1, swappedValue2, swaps);
    }

    cout << "\nThere is/are " << swaps << " swap(s)." << endl << endl;

    delete[] iPtr1;
    delete[] iPtr2;
    delete[] swappedValue1;
    delete[] swappedValue2;
}


void storeArrayElements(int* iPtr, int size)
{
    int i;

    cout << "Enter value for" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "  Index " << i << " : ";
        cin >> *(iPtr + i);
    }
}

void displayArrays(int* iPtr1, int size1, int* iPtr2, int size2)
{
    int i;

    cout << "    Array #1:  ";
    for (i = 0; i < size1; i++)
    {
        cout << *(iPtr1 + i) << "  ";
    }
    cout << endl;

    cout << "    Array #2:  ";
    for (i = 0; i < size2; i++)
    {
        cout << *(iPtr2 + i) << "  ";
    }
    cout << endl;
}

int swapAndCount(int* iPtr1, int size1, int* iPtr2, int size2, int* swappedValue1, int*swappedValue2) 
{
    int count = 0;
    int i;
    int j = 0;
    int k = 0;
    int temp;
    bool swapped;
    bool stored;

    for (i = 0; i < size1; i++) 
    {
        if (*(iPtr1 + i) % 2 != 0) 
        {
            swapped = false;

            for ( ; j < size2 && swapped == false; j++)
            {
                if (*(iPtr2 + j) % 2 == 0) 
                {
                    temp = *(iPtr1 + i);
                    *(iPtr1 + i) = *(iPtr2 + j);
                    *(iPtr2 + j) = temp;

                    count++;
                    swapped = true;
                    stored = false;

                    for ( ; stored == false; k++)
                    {
                        *(swappedValue1 + k) = *(iPtr2 + j);
                        *(swappedValue2 + k) = *(iPtr1 + i);
                        stored = true;
                    }
                }
            }
        }

        if (j == size2)
            i = size1;
    }

    return count;
}

void displaySwappingInfo(int* swappedValue1, int* swappedValue2, int swaps)
{
    int i;

    for (i = 0; i < swaps; i++)
    {
        cout << "    Array #1 value " << *(swappedValue1 + i) << " swapped with Array #2 value ";
        cout << *(swappedValue2 + i) << endl;
    }
}

/*  PROGRAM OUTPUT

*/

/*  PROGRAM OUTPUT COMMENTS

*/