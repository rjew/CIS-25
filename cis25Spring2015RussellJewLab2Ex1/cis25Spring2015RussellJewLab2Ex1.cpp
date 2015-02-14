/**
 * Program Name:    cis25Spring2015RussellJewLab2Ex1.cpp
 * Discussion:		Lab 2 - Exercise #1
 * Written by:		Russell Jew
 * Date Modified:	2015/02/14
 */

#include <iostream>
using namespace std;

//Function Prototype

void displayInfo(void);
void displayMenu(void);
int displayDigitInfoUpdateRussellJew(void);
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
        displayMenu();
        option = displayDigitInfoUpdateRussellJew();
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

void displayMenu()
{
    cout << "*************************************************" << endl;
    cout << "*             MENU 02 -- Arrays & Digits        *" << endl;
    cout << "* 1. Calling displayDigitInfoUpdateRussellJew() *" << endl;
    cout << "* 2. Quit                                       *" << endl;
    cout << "*************************************************" << endl;
}

int displayDigitInfoUpdateRussellJew()
{
    int option;
    int numIntegers;
    int* array1 = nullptr;
    int digitsArray[10] = {0};

    cout << "Select an option (1 or 2): ";
    cin >> option;
    cout << endl;

    switch (option)
    {
        case 1:
            cout << "Calling displayDigitInfoUpdateRussellJew() --" << endl;
            cout << "  How many integers (to be worked on)? ";
            cin >> numIntegers;
            
            //Create array to store integers
            array1 = new int[numIntegers];

            //Store Integers into array
            storeIntegers(array1, numIntegers);
            
            //Track occurence of each digit
            trackDigitOccurence(array1, digitsArray, numIntegers);

            //Display occurence of existing digits
            displayExistingDigitsOccurence(digitsArray);

            //Display occurence of even digits
            displayEvenDigitsOccurence(digitsArray);

            //Display largest even occurence
            displayLargestEvenOccurence(digitsArray);  

            //Display smallest even occurence
            displaySmallestEvenOccurence(digitsArray);

            //Display occurence of odd digits
            displayOddDigitsOccurence(digitsArray);

            //Display largest odd occurence
            displayLargestOddOccurence(digitsArray);

            //Display smallest odd occurence
            displaySmallestOddOccurence(digitsArray);

            //Free dynamically allocated memory
            delete[] array1;

            array1 = nullptr;

            break;
        case 2:
            cout << "  Having Fun ..." << endl;
            break;
        default:
            cout << "WRONG OPTION!\n\n\n";
    }

    return option;
}

//Function Definitions

void storeIntegers(int array[], int numIntegers)
{
    //Store integers in array
    for (int count = 0; count < numIntegers; count++)
    {
        cout << "    Enter integer #" << (count + 1) << ": ";
        cin >> array[count];
    }
}

void trackDigitOccurence(int array1[], int digitsArray[], int numIntegers)
{
    int* tempArray = nullptr;
    int count;
    int index;
    int digit;

    tempArray = new int[numIntegers];

    for (count = 0; count < numIntegers; count++)
    {
        tempArray[count] = (array1[count] < 0) ? -array1[count] : array1[count];
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
    cout << "\nOccurrence of all exisiting digits --" << endl;
    for (int number = 0; number < 10; number++)
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
    cout << "\nOccurence of all existing EVEN digits --" << endl;
    for (int number = 0; number < 10; number += 2)
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
    cout << "Occurence of all existing ODD digits --" << endl;
    for (int number = 1; number < 10; number += 2)
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

*/

/*  PROGRAM OUTPUT COMMENTS

*/