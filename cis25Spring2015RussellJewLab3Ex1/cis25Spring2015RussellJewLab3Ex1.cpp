/**
 * Program Name:    cis25Spring2015RussellJewLab3Ex1.cpp
 * Discussion:		Lab 3 - Exercise #1
 * Written by:		Russell Jew
 * Date Modified:	2015/03/15
 */

#include <iostream>
using namespace std;

//Function Prototype

void displayInfo(void);
int displayMenu(void);
void arrangeArrayRussellJew(int*, int, int*, int);
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
    cout << "  Due Date:           2015/03/19" << endl << endl;
}

int displayMenu()
{
    int option;
    int* iPtr1;
    int* iPtr2;
    int size1;
    int size2;

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

        arrangeArrayRussellJew(iPtr1, size1, iPtr2, size2);
        cout << endl;

        delete[] iPtr1;
        delete[] iPtr2;

        break;
    case 2:
        cout << "\n  Having Fun ..." << endl;
        break;
    default:
        cout << "WRONG OPTION!\n\n\n";
    }

    return option;
}

void arrangeArrayRussellJew(int* iPtr1, int size1, int* iPtr2, int size2)
{
    int swaps;
    int* swappedValue1;
    int* swappedValue2;

    cout << "  Original Arrays" << endl;
    displayArrays(iPtr1, size1, iPtr2, size2);

    //Create an array to store the swapped values.
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

int swapAndCount(int* iPtr1, int size1, int* iPtr2, int size2, int* swappedValue1, int* swappedValue2) 
{
    int count = 0;
    int i;
    int j = 0;
    int temp;
    bool swapped;

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

                    *(swappedValue1 + count) = *(iPtr2 + j);
                    *(swappedValue2 + count) = *(iPtr1 + i);
                    count++;

                    swapped = true;
                }
            }

            if (j == size2)
                i = size1;
        }
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
Class Information --
  CIS 25 - C++ Programming
  Laney College

Assignment Information --
  Assignment Number:  Lab 03 - Exercise #1
  Written by:         Russell Jew
  Due Date:           2015/03/19

***************************************
*          MENU 03 -- Arrays          *
* 1. Calling arrangeArrayRussellJew() *
* 2. Quit                             *
***************************************
Select an option (1 or 2): 4

WRONG OPTION!


***************************************
*          MENU 03 -- Arrays          *
* 1. Calling arrangeArrayRussellJew() *
* 2. Quit                             *
***************************************
Select an option (1 or 2): 1

Creating first array -
Enter the array size: 4
Enter value for
  Index 0 : 2
  Index 1 : 4
  Index 2 : -2
  Index 3 : 8

Creating second array -
Enter the array size: 2
Enter value for
  Index 0 : 1
  Index 1 : 4

Calling arrangeArrayRussellJew() --
  Original Arrays
    Array #1:  2  4  -2  8
    Array #2:  1  4

  Updated Arrays
    Array #1:  2  4  -2  8
    Array #2:  1  4

There is/are 0 swap(s).


***************************************
*          MENU 03 -- Arrays          *
* 1. Calling arrangeArrayRussellJew() *
* 2. Quit                             *
***************************************
Select an option (1 or 2): 1

Creating first array -
Enter the array size: 5
Enter value for
  Index 0 : 2
  Index 1 : 4
  Index 2 : -2
  Index 3 : 81
  Index 4 : 8

Creating second array -
Enter the array size: 2
Enter value for
  Index 0 : 1
  Index 1 : 4

Calling arrangeArrayRussellJew() --
  Original Arrays
    Array #1:  2  4  -2  81  8
    Array #2:  1  4

  Updated Arrays
    Array #1:  2  4  -2  4  8
    Array #2:  1  81

  Swapping Info -
    Array #1 value 81 swapped with Array #2 value 4

There is/are 1 swap(s).


***************************************
*          MENU 03 -- Arrays          *
* 1. Calling arrangeArrayRussellJew() *
* 2. Quit                             *
***************************************
Select an option (1 or 2): 1

Creating first array -
Enter the array size: 2
Enter value for
  Index 0 : 1
  Index 1 : -1

Creating second array -
Enter the array size: 5
Enter value for
  Index 0 : 2
  Index 1 : 3
  Index 2 : -2
  Index 3 : 81
  Index 4 : 8

Calling arrangeArrayRussellJew() --
  Original Arrays
    Array #1:  1  -1
    Array #2:  2  3  -2  81  8

  Updated Arrays
    Array #1:  2  -2
    Array #2:  1  3  -1  81  8

  Swapping Info -
    Array #1 value 1 swapped with Array #2 value 2
    Array #1 value -1 swapped with Array #2 value -2

There is/are 2 swap(s).


***************************************
*          MENU 03 -- Arrays          *
* 1. Calling arrangeArrayRussellJew() *
* 2. Quit                             *
***************************************
Select an option (1 or 2): 1

Creating first array -
Enter the array size: 5
Enter value for
  Index 0 : 21
  Index 1 : 41
  Index 2 : -2
  Index 3 : 81
  Index 4 : 8

Creating second array -
Enter the array size: 4
Enter value for
  Index 0 : 10
  Index 1 : 4
  Index 2 : 18
  Index 3 : 4

Calling arrangeArrayRussellJew() --
  Original Arrays
    Array #1:  21  41  -2  81  8
    Array #2:  10  4  18  4

  Updated Arrays
    Array #1:  10  4  -2  18  8
    Array #2:  21  41  81  4

  Swapping Info -
    Array #1 value 21 swapped with Array #2 value 10
    Array #1 value 41 swapped with Array #2 value 4
    Array #1 value 81 swapped with Array #2 value 18

There is/are 3 swap(s).


***************************************
*          MENU 03 -- Arrays          *
* 1. Calling arrangeArrayRussellJew() *
* 2. Quit                             *
***************************************
Select an option (1 or 2): 2


  Having Fun ...
*/

/*  PROGRAM OUTPUT COMMENTS
    The program runs sucessfully and produces the required
    output. However, the program may not be the most efficient
    as there may be a better way to store the swapped values
    than dynamically allocating an array.
*/