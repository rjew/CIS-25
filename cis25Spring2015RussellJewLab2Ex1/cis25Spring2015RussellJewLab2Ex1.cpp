/**
 * Program Name:    cis25Spring2015RussellJewLab2Ex1.cpp
 * Discussion:		Lab 2 - Exercise #1
 * Written by:		Russell Jew
 * Date Modified:	2015/02/15
 */

#include <iostream>
using namespace std;

//Function Prototype

void displayInfo(void);
int displayMenu(void);
void displayDigitInfoUpdateRussellJew(void);
void storeIntegers(int[], int);
void trackDigitOccurence(int[], int[], int);
void displayExistingDigitsOccurence(int[]);
void displayEvenDigitsOccurence(int[]);
void displayLargestEvenOccurence(int[]);
void displaySmallestEvenOccurence(int[]);
void displayOddDigitsOccurence(int[]);
void displayLargestOddOccurence(int[]);
void displaySmallestOddOccurence(int[]);

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
    cout << "  Assignment Number:  Lab 02 - Exercise #1" << endl;
    cout << "  Written by:         Russell Jew" << endl;
    cout << "  Due Date:           2015/02/17" << endl << endl;
}

int displayMenu()
{
    int option;

    cout << "*************************************************" << endl;
    cout << "*             MENU 02 -- Arrays & Digits        *" << endl;
    cout << "* 1. Calling displayDigitInfoUpdateRussellJew() *" << endl;
    cout << "* 2. Quit                                       *" << endl;
    cout << "*************************************************" << endl;

    cout << "Select an option (1 or 2): ";
    cin >> option;
    cout << endl;

    switch (option)
    {
        case 1:
            displayDigitInfoUpdateRussellJew();
            break;
        case 2:
            cout << "  Having Fun ..." << endl;
            break;
        default:
            cout << "WRONG OPTION!\n\n\n";
    }

    return option;
}

void displayDigitInfoUpdateRussellJew()
{
    int numIntegers;
    int* iAry = nullptr;
    int digitsArray[10] = {0};

    cout << "Calling displayDigitInfoUpdateRussellJew() --" << endl;
    cout << "  How many integers (to be worked on)? ";
    cin >> numIntegers;

    iAry = new int[numIntegers];

    storeIntegers(iAry, numIntegers);

    trackDigitOccurence(iAry, digitsArray, numIntegers);

    displayExistingDigitsOccurence(digitsArray);

    displayEvenDigitsOccurence(digitsArray);

    displayLargestEvenOccurence(digitsArray);

    displaySmallestEvenOccurence(digitsArray);

    displayOddDigitsOccurence(digitsArray);

    displayLargestOddOccurence(digitsArray);

    displaySmallestOddOccurence(digitsArray);

    delete[] iAry;
    iAry = nullptr;
}

//Function Definitions

void storeIntegers(int iAry[], int numIntegers)
{
    int count;

    for (count = 0; count < numIntegers; count++)
    {
        cout << "    Enter integer #" << (count + 1) << ": ";
        cin >> iAry[count];
    }
}

void trackDigitOccurence(int iAry[], int digitsArray[], int numIntegers)
{
    int* tempArray = nullptr;
    int count;
    int digit;

    tempArray = new int[numIntegers];

    for (count = 0; count < numIntegers; count++)
    {
        tempArray[count] = (iAry[count] < 0) ? -iAry[count] : iAry[count];
    }

    for (count = 0; count < numIntegers; count++)
    {
        do
        {
            digit = tempArray[count] % 10;
            digitsArray[digit]++;
            tempArray[count] /= 10;
        } while (tempArray[count] != 0);
    }

    delete[] tempArray;
    tempArray = nullptr;
}

void displayExistingDigitsOccurence(int digitsArray[])
{
    int number;

    cout << "\nOccurrence of all exisiting digits --" << endl;
    for (number = 0; number < 10; number++)
    {
        if (digitsArray[number] != 0)
        {
            cout << "  Digit " << number << " : " << digitsArray[number];
            cout << endl;
        }
    }
}

void displayEvenDigitsOccurence(int digitsArray[])
{
    int number;

    cout << "\nOccurence of all existing EVEN digits --" << endl;
    for (number = 0; number < 10; number += 2)
    {
        if (digitsArray[number] != 0)
        {
            cout << "  Digit " << number << " : " << digitsArray[number];
            cout << endl;
        }
    }
}

void displayLargestEvenOccurence(int digitsArray[])
{
    int largestEvenOccurence = 0;
    int number;

    //Find number with largest even occurence
    for (number = 2; number < 10; number += 2)
    {
        if (digitsArray[number] > digitsArray[largestEvenOccurence])
        {
            largestEvenOccurence = number;
        }
    }

    cout << "\nThe even digit(s) that has/have the largest occurence --" << endl;

    //Display numbers with the same largest even occurence
    for (number = 0; number < 10; number += 2)
    {
        if (digitsArray[number] == digitsArray[largestEvenOccurence])
        {
            cout << "  " << number << endl;
        }
    }

    cout << "With the number of occurence(s) : " << digitsArray[largestEvenOccurence] << endl << endl;
}

void displaySmallestEvenOccurence(int digitsArray[])
{
    int smallestEvenOccurence = 0;
    int number;

    //If occurence of the number zero is 0
    if (digitsArray[smallestEvenOccurence] == 0)
    {
        for (number = 2; number < 10; number += 2)
        {
            if (digitsArray[number] != 0)
            {
                smallestEvenOccurence = number;
            }
        }
    }

    //Find number with smallest even occurence
    for (number = 2; number < 10; number += 2)
    {
        if (digitsArray[number] < digitsArray[smallestEvenOccurence] && digitsArray[number] != 0)
        {
            smallestEvenOccurence = number;
        }
    }

    cout << "The even digit(s) that has/have the smallest occurence --" << endl;

    //Display numbers with the same smallest even occurence
    for (number = 0; number < 10; number += 2)
    {
            if (digitsArray[number] == digitsArray[smallestEvenOccurence])
            {
                cout << "  " << number << endl;
            }
    }

    cout << "With the number of occurence(s) : " << digitsArray[smallestEvenOccurence] << endl << endl;
}

void displayOddDigitsOccurence(int digitsArray[])
{
    int number;

    cout << "Occurence of all existing ODD digits --" << endl;
    for (number = 1; number < 10; number += 2)
    {
        if (digitsArray[number] != 0)
        {
            cout << "  Digit " << number << " : " << digitsArray[number];
            cout << endl;
        }
    }
}

void displayLargestOddOccurence(int digitsArray[])
{
    int largestOddOccurence = 1;
    int number;

    //Find number with largest odd occurence
    for (number = 3; number < 10; number += 2)
    {
        if (digitsArray[number] > digitsArray[largestOddOccurence])
        {
            largestOddOccurence = number;
        }
    }

    cout << "\nThe odd digit(s) that has/have the largest occurence --" << endl;

    //Display numbers with the same largest odd occurence
    for (number = 1; number < 10; number += 2)
    {
        if (digitsArray[number] == digitsArray[largestOddOccurence])
        {
            cout << "  " << number << endl;
        }
    }

    cout << "With the number of occurence(s) : " << digitsArray[largestOddOccurence] << endl << endl;
}

void displaySmallestOddOccurence(int digitsArray[])
{
    int smallestOddOccurence = 1;
    int number;

    //If occurence of the number one is 0
    if (digitsArray[smallestOddOccurence] == 0)
    {
        for (number = 3; number < 10; number += 2)
        {
            if (digitsArray[number] != 0)
            {
                smallestOddOccurence = number;
            }
        }
    }

    //Find number with smallest odd occurence
    for (number = 3; number < 10; number += 2)
    {
        if (digitsArray[number] < digitsArray[smallestOddOccurence] && digitsArray[number] != 0)
        {
            smallestOddOccurence = number;
        }
    }

    cout << "The odd digit(s) that has/have the smallest occurence --" << endl;

    //Display numbers with the same largest odd occurence
    for (number = 1; number < 10; number += 2)
        {
            if (digitsArray[number] == digitsArray[smallestOddOccurence])
            {
                cout << "  " << number << endl;
            }
        }
    
    cout << "With the number of occurence(s) : " << digitsArray[smallestOddOccurence] << endl << endl;
}

/*  PROGRAM OUTPUT
Class Information --
  CIS 25 - C++ Programming
  Laney College

Assignment Information --
  Assignment Number:  Lab 02 - Exercise #1
  Written by:         Russell Jew
  Due Date:           2015/02/17

*************************************************
*             MENU 02 -- Arrays & Digits        *
* 1. Calling displayDigitInfoUpdateRussellJew() *
* 2. Quit                                       *
*************************************************
Select an option (1 or 2): 4

WRONG OPTION!


*************************************************
*             MENU 02 -- Arrays & Digits        *
* 1. Calling displayDigitInfoUpdateRussellJew() *
* 2. Quit                                       *
*************************************************
Select an option (1 or 2): 1

Calling displayDigitInfoUpdateRussellJew() --
  How many integers (to be worked on)? 2
    Enter integer #1: 1230476
    Enter integer #2: 10034850

Occurrence of all exisiting digits --
  Digit 0 : 4
  Digit 1 : 2
  Digit 2 : 1
  Digit 3 : 2
  Digit 4 : 2
  Digit 5 : 1
  Digit 6 : 1
  Digit 7 : 1
  Digit 8 : 1

Occurence of all existing EVEN digits --
  Digit 0 : 4
  Digit 2 : 1
  Digit 4 : 2
  Digit 6 : 1
  Digit 8 : 1

The even digit(s) that has/have the largest occurence --
  0
With the number of occurence(s) : 4

The even digit(s) that has/have the smallest occurence --
  2
  6
  8
With the number of occurence(s) : 1

Occurence of all existing ODD digits --
  Digit 1 : 2
  Digit 3 : 2
  Digit 5 : 1
  Digit 7 : 1

The odd digit(s) that has/have the largest occurence --
  1
  3
With the number of occurence(s) : 2

The odd digit(s) that has/have the smallest occurence --
  5
  7
With the number of occurence(s) : 1

*************************************************
*             MENU 02 -- Arrays & Digits        *
* 1. Calling displayDigitInfoUpdateRussellJew() *
* 2. Quit                                       *
*************************************************
Select an option (1 or 2): 1

Calling displayDigitInfoUpdateRussellJew() --
  How many integers (to be worked on)? 3
    Enter integer #1: 1230476
    Enter integer #2: 10434950
    Enter integer #3: 9023497

Occurrence of all exisiting digits --
  Digit 0 : 4
  Digit 1 : 2
  Digit 2 : 2
  Digit 3 : 3
  Digit 4 : 4
  Digit 5 : 1
  Digit 6 : 1
  Digit 7 : 2
  Digit 9 : 3

Occurence of all existing EVEN digits --
  Digit 0 : 4
  Digit 2 : 2
  Digit 4 : 4
  Digit 6 : 1

The even digit(s) that has/have the largest occurence --
  0
  4
With the number of occurence(s) : 4

The even digit(s) that has/have the smallest occurence --
  6
With the number of occurence(s) : 1

Occurence of all existing ODD digits --
  Digit 1 : 2
  Digit 3 : 3
  Digit 5 : 1
  Digit 7 : 2
  Digit 9 : 3

The odd digit(s) that has/have the largest occurence --
  3
  9
With the number of occurence(s) : 3

The odd digit(s) that has/have the smallest occurence --
  5
With the number of occurence(s) : 1

*************************************************
*             MENU 02 -- Arrays & Digits        *
* 1. Calling displayDigitInfoUpdateRussellJew() *
* 2. Quit                                       *
*************************************************
Select an option (1 or 2): 2

  Having Fun ...
*/

/*  PROGRAM OUTPUT COMMENTS
My program successfully completed the assigned tasks.
One way the program could be improved is by displaying
a message if there are no even digits or if there are
no odd digits. It could also display a message
if the largest and smallest occurences are the same.
*/