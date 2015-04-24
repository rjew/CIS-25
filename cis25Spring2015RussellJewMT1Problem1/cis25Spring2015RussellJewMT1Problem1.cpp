/**
 * Program Name: cis25Spring2015RussellJewMT1Problem1.cpp
 * Discussion:   Midterm Problem #1
 * Written By:   Russell Jew
 * Date:         2015/04/23
 */

#include <iostream>
using namespace std;

void displayMenu(void);
void displayDigitOccurenceProblem1RussellJew(void);

int main()
{
    displayMenu();

    return 0;
}

void displayMenu()
{
    int option;

    do
    {
        cout << "********************************************************" << endl;
        cout << "*                         MENU                         *" << endl;
        cout << "* 1. Calling displayDigitOccurenceProblem1RussellJew() *" << endl;
        cout << "* 2. Quit                                              *" << endl;
        cout << "********************************************************" << endl;
        cout << "Select an option (1 or 2): ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Calling displayDigitOccurenceProblem1RussellJew() -" << endl << endl;
            displayDigitOccurenceProblem1RussellJew();
            break;
        case 2:
            cout << "  Have Fun ..." << endl;
            break;
        default:
            cout << "WRONG OPTION\n" << endl;
        }
    } while (option != 2);
}

void displayDigitOccurenceProblem1RussellJew()
{
    int* iPtr;
    int size;
    int digits[10] = {0};
    int digit;
    int i, j;
    bool displayed;
    int* iPtrTemp;

    cout << "  How many integers? ";
    cin >> size;

    iPtr = new int[size];

    for (i = 0; i < size; i++)
    {
        cout << "    Enter integer #" << (i + 1) << ": ";
        cin >> *(iPtr + i);
    }

    cout << "\n  The original array:" << endl;

    for (i = 0; i < size; i++)
    {
        cout << "  " << *(iPtr + i) << endl;
    }

    cout << endl;

    iPtrTemp = new int[size];

    for (i = 0; i < size; i++)
    {
        *(iPtrTemp + i) = (*(iPtr + i) < 0) ? -(*(iPtr + i)) : *(iPtr + i);
    }

    for (i = 0; i < size; i++)
    {
        do
        {
            digit = *(iPtrTemp + i) % 10;
            digits[digit]++;
            *(iPtrTemp + i) /= 10;
        } while (*(iPtrTemp + i) != 0);
    }

    for (i = 0; i < 10; i++)
    {
        if (digits[i] != 0)
        {
            cout << "  Digit " << i << ": "<< digits[i] << " occurences" << endl;
        }
    }

    cout << endl;

    for (i = 0; i < 9; i++)
    {
        displayed = false;
        for (j = i + 1; j < 10; j++)
        {
            if (digits[i] == digits[j] && digits[i] != 0)
            {
                if (displayed == false)
                {
                    cout << "  Digits " << i << " ";
                    displayed = true;
                }
                cout << j << " ";
                digits[j] = 0;
            }
        }

        if (displayed == true)
        {
            cout << " occur " << digits[i] << " time(s)." << endl;
        }
    }

    delete[] iPtr;
    delete[] iPtrTemp;
}

/* PROGRAM OUTPUT
********************************************************
*                         MENU                         *
* 1. Calling displayDigitOccurenceProblem1RussellJew() *
* 2. Quit                                              *
********************************************************
Select an option (1 or 2): 1
Calling displayDigitOccurenceProblem1RussellJew() -

  How many integers? 3
    Enter integer #1: 32965
    Enter integer #2: -275721
    Enter integer #3: 3028063

  The original array:
  32965
  -275721
  3028063

  Digit 0: 2 occurences
  Digit 1: 1 occurences
  Digit 2: 4 occurences
  Digit 3: 3 occurences
  Digit 5: 2 occurences
  Digit 6: 2 occurences
  Digit 7: 2 occurences
  Digit 8: 1 occurences
  Digit 9: 1 occurences

  Digits 0 5 6 7  occur 2 time(s).
  Digits 1 8 9  occur 1 time(s).
********************************************************
*                         MENU                         *
* 1. Calling displayDigitOccurenceProblem1RussellJew() *
* 2. Quit                                              *
********************************************************
Select an option (1 or 2): 2
  Have Fun ...
*/