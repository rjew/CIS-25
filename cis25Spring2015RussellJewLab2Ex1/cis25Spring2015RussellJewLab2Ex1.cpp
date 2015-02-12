/**
 * Program Name:    cis25Spring2015RussellJewLab2Ex1.cpp
 * Discussion:		Lab 2 - Exercise #1
 * Written by:		Russell Jew
 * Date Modified:	2015/02/08
 */

#include <iostream>
using namespace std;

//Function Prototype

void displayInfo(void);
void displayMenu(void);
int displayDigitInfoUpdateRussellJew(void);
void recieveIntegers(int[], int);
int calculateNumDigits(int[], int);
void storeDigits(int[], int[], int);
void trackDigitOccurence(int[], int[], int);
void displayExistingDigitsOccurence(int[]);
void displayEvenDigitsOccurence(int[]);
void displayLargestEvenOccurence(int[]);
void displaySmallestEvenOccurence(int[]);
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
    int count;
    int *array1 = nullptr;
    int *array2 = nullptr;
    int *seperatedDigits = nullptr;
    int totalDigits;
    int digits[10];

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
            array2 = new int[numIntegers];

            //Store Integers into array
            recieveIntegers(array1, numIntegers);

            //Copy array contents
            for (count = 0; count < numIntegers; count++)
            {
                array2[count] = array1[count];
            }

            //Calculate total number of digits
            totalDigits = calculateNumDigits(array1, numIntegers);

            //Create an array to hold each digit of all the numbers
            seperatedDigits = new int[totalDigits];
            
            //Store each digit from all the numbers in an array
            storeDigits(seperatedDigits, array2, numIntegers);
            
            //Track occurence of each digit
            trackDigitOccurence(digits, seperatedDigits, totalDigits);

            //Display occurence of existing digits
            displayExistingDigitsOccurence(digits);

            //Display occurence of even digits
            displayEvenDigitsOccurence(digits);

            //Display largest even occurence
            displayLargestEvenOccurence(digits);  

            //Display smallest even occurence
            displaySmallestEvenOccurence(digits);

            //Display largest odd occurence
            displayLargestOddOccurence(digits);

            //Display smallest odd occurence
            displaySmallestOddOccurence(digits);

            //Free dynamically allocated memory
            delete[] array1;
            delete[] array2;
            delete[] seperatedDigits;

            array1 = nullptr;
            array2 = nullptr;
            seperatedDigits = nullptr;

            break;
        case 2:
            cout << "Having Fun ..." << endl;
            break;
        default:
            cout << "WRONG OPTION!" << endl << endl <<endl;
    }

    return option;
}

//Function Definitions

void recieveIntegers(int array[], int numIntegers)
{
    //Store integers in array
    for (int count = 0; count < numIntegers; count++)
    {
        cout << "    Enter integer #" << (count + 1) << ": ";
        cin >> array[count];
    }
}

int calculateNumDigits(int array[], int numIntegers)
{
    int *numDigits = nullptr;
    int totalDigits = 0;

    //Calculate number of digits in each number to allocate an array large enough to hold each digit
    numDigits = new int[numIntegers];

    for (int count = 0; count < numIntegers; count++)
    {
        numDigits[count] = 0;

        do
        {
            array[count] /= 10;
            numDigits[count]++;
        } while (array[count] != 0);
    }
    //Add up number of digits in each number to get the total number of digits from all the numbers
    for (int count = 0; count < numIntegers; count++)
    {
        totalDigits += numDigits[count];
    }

    return totalDigits;
}

void storeDigits(int seperatedDigits[], int array2[], int numIntegers)
{
    int index = 0;

    for (int count = 0; count < numIntegers; count++)
    {
        do
        {
            seperatedDigits[index] = array2[count] % 10;
            array2[count] /= 10;
            index++;
        } while (array2[count] != 0);
    }
}

void trackDigitOccurence(int digits[], int seperatedDigits[], int totalDigits)
{
    for (int number = 0; number < 10; number++)
    {
        digits[number] = 0;

        for (int count = 0; count < totalDigits; count++)
        {
            if (seperatedDigits[count] == number)
            {
                digits[number]++;
            }
        }
    }
}

void displayExistingDigitsOccurence(int digits[])
{
    cout << endl;
    cout << "Occurrence of all exisiting digits --" << endl;
    for (int number = 0; number < 10; number++)
    {
        if (digits[number] != 0)
        {
            cout << "  Digit " << number << " : " << digits[number];
            cout << endl;
        }
    }
}

void displayEvenDigitsOccurence(int digits[])
{
    cout << endl;
    cout << "Occurence of all existing EVEN digits --" << endl;
    for (int number = 0; number < 10; number += 2)
    {
        if (digits[number] != 0)
        {
            cout << "  Digit " << number << " : " << digits[number];
            cout << endl;
        }
    }
}

void displayLargestEvenOccurence(int digits[])
{
    int largestEvenOccurence = 0;
    int number;

    //Find number with largest even occurence
    for (number = 2; number < 10; number += 2)
    {
        if (digits[number] > digits[largestEvenOccurence])
        {
            largestEvenOccurence = number;
        }
    }

    cout << endl;
    cout << "The even digit(s) that has/have the largest occurence --" << endl;

    //Display numbers with the same largest even occurence
    if (digits[largestEvenOccurence] == 0)
    {
        cout << "No even digits!" << endl;
    }
    else
    {
        for (number = 0; number < 10; number += 2)
        {
            if (digits[number] == digits[largestEvenOccurence])
            {
                cout << "  " << number << endl;
            }
        }

        cout << "With the number of occurence(s) : " << digits[largestEvenOccurence] << endl << endl;
    }
}

void displaySmallestEvenOccurence(int digits[])
{
    int smallestEvenOccurence = 0;
    int number;

    //Find number with smallest even occurence
    for (number = 2; number < 10; number += 2)
    {
        if (digits[number] < digits[smallestEvenOccurence] && digits[number] != 0)
        {
            smallestEvenOccurence = number;
        }
    }

    cout << "The even digit(s) that has/have the smallest occurence --" << endl;

    //Display numbers with the same smallest even occurence
    for (number = 0; number < 10; number += 2)
    {
            if (digits[number] == digits[smallestEvenOccurence])
            {
                cout << "  " << number << endl;
            }
    }

    cout << "With the number of occurence(s) : " << digits[smallestEvenOccurence] << endl << endl;
}

void displayLargestOddOccurence(int digits[])
{
    int largestOddOccurence = 1;
    int number;

    //Find number with largest odd occurence
    for (number = 3; number < 10; number += 2)
    {
        if (digits[number] > digits[largestOddOccurence])
        {
            largestOddOccurence = number;
        }
    }

    cout << "The odd digit(s) that has/have the largest occurence --" << endl;

    //Display numbers with the same largest odd occurence
    if (digits[largestOddOccurence] == 0)
    {
        cout << "No odd digits!" << endl;
    }
    else
    {
        for (number = 1; number < 10; number += 2)
        {
            if (digits[number] == digits[largestOddOccurence])
            {
                cout << "  " << number << endl;
            }
        }

        cout << "With the number of occurence(s) : " << digits[largestOddOccurence] << endl << endl;
    }
}

void displaySmallestOddOccurence(int digits[])
{
    int smallestOddOccurence = 1;
    int number;

    //Find number with smallest odd occurence
    for (number = 3; number < 10; number += 2)
    {
        if (digits[number] < digits[smallestOddOccurence] && digits[number] != 0)
        {
            smallestOddOccurence = number;
        }
    }

    cout << "The odd digit(s) that has/have the smallest occurence --" << endl;

    //Display numbers with the same largest odd occurence
    for (number = 1; number < 10; number += 2)
        {
            if (digits[number] == digits[smallestOddOccurence])
            {
                cout << "  " << number << endl;
            }
        }

        cout << "With the number of occurence(s) : " << digits[smallestOddOccurence] << endl << endl;
}

/*  PROGRAM OUTPUT

*/

/*  PROGRAM OUTPUT COMMENTS

*/