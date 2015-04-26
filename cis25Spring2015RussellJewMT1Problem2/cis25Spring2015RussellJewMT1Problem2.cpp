/**
 * Program Name: cis25Spring2015RussellJewMT1Problem2.cpp
 * Discussion:   Midterm Problem #2
 * Written By:   Russell Jew
 * Date:         2015/04/25
 */

#include <iostream>
using namespace std;

void displayMenu(void);
void updateBasedOnUncommonRussellJew(int*, int);

int main()
{
    displayMenu();

    return 0;
}

void displayMenu()
{
    int option;
    int size;
    int* iPtr;
    int i;

    do
    {
        cout << "************************************************" << endl;
        cout << "*                     MENU                     *" << endl;
        cout << "* 1. Calling updateBasedOnUncommonRussellJew() *" << endl;
        cout << "* 2. Quit                                      *" << endl;
        cout << "************************************************" << endl;
        cout << "Select an option (1 or 2): ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "\n  How many integers? ";
            cin >> size;

            iPtr = new int[size];

            for (i = 0; i < size; i++)
            {
                cout << "    Enter integer #" << (i + 1) << ": ";
                cin >> *(iPtr + i);
            }

            cout << "\n  The original array" << endl;
            for (i = 0; i < size; i++)
            {
                cout << "    " << *(iPtr + i) << endl;
            }

            cout << "\n  Calling updateBasedOnUncommonRussellJew() -" << endl;
            updateBasedOnUncommonRussellJew(iPtr, size);

            cout << "\n  The updated array (after calling the function):" << endl;
            for (i = 0; i < size; i++)
            {
                cout << "    " << *(iPtr + i) << endl;
            }

            delete[] iPtr;  // Added

            break;
        case 2:
            cout << "  Fun Exercise ..." << endl;
            break;
        }
    } while (option != 2);
}

void updateBasedOnUncommonRussellJew(int* iPtr, int size)
{
    int* iPtrTemp;
    int digits1[10] = {0};
    int digits2[10] = {0};
    int uncommonDigits[10] = {0};
    int* numUncommonOccurence;
    int largestUncommonOccurence;
    int i, j;
    int digit;
    int temp;

    iPtrTemp = new int[size];

    for (i = 0; i < size; i++)
    {
        *(iPtrTemp + i) = (*(iPtr + i) < 0) ? -(*(iPtr + i)) : *(iPtr + i);
    }

    if (size > 0)
    {
        do
        {
            digit = *(iPtrTemp + 0) % 10;
            digits1[digit] = 1;
            *(iPtrTemp + 0) /= 10;
        } while (*(iPtrTemp + 0) != 0);
    }

    if (size > 1)
    {
        do
        {
            digit = *(iPtrTemp + 1) % 10;
            digits2[digit] = 1;
            *(iPtrTemp + 1) /= 10;
        } while (*(iPtrTemp + 1) != 0);
    }

    for (i = 0; i < 10; i++)
    {
        if (digits1[i] != digits2[i])
            uncommonDigits[i] = 1;
        else if (digits1[i] == 1 && digits2[i] == 1)
            uncommonDigits[i] = 2;
    }

    for (i = 2; i < size; i++)
    {
        for (j = 0; j < 10; j++)
        {
            digits1[j] = 0;
        }

        do
        {
            digit = *(iPtrTemp + i) % 10;
            digits1[digit] = 1;
            *(iPtrTemp + i) /= 10;
        } while (*(iPtrTemp + i) != 0);

        for (j = 0; j < 10; j++)
        {
            if (digits1[j] == 1 && uncommonDigits[j] == 1)
                uncommonDigits[j] = 2;
            else
            {
                if (digits1[j] != uncommonDigits[j] && uncommonDigits[j] != 2)
                    uncommonDigits[j] = 1;
            }
        }
    }
    
    cout << "    The uncommon digits:" << endl;

    for (i = 0; i < 10; i++)
    {
        if (uncommonDigits[i] == 1)
            cout << "      " << i << endl;
    }

    numUncommonOccurence = new int[size];

    for (i = 0; i < size; i++)
    {
        *(numUncommonOccurence + i) = 0;
    }

    for (i = 0; i < 10; i++)
    {
        if (uncommonDigits[i] == 1)
        {
            for (j = 0; j < size; j++)
            {
                *(iPtrTemp + j) = (*(iPtr + j) < 0) ? -(*(iPtr + j)) : *(iPtr + j);
            }

            for (j = 0; j < size; j++)
            {
                do
                {
                    digit = *(iPtrTemp + j) % 10;
                    if (digit == i)
                        (*(numUncommonOccurence + j))++;
                    *(iPtrTemp + j) /= 10;
                } while (*(iPtrTemp + j) != 0);
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        largestUncommonOccurence = i;
        for (j = i + 1; j < size; j++)
        {
            if (*(numUncommonOccurence + largestUncommonOccurence) < *(numUncommonOccurence + j))
                largestUncommonOccurence = j;
        }

        temp = *(numUncommonOccurence + i);
        *(numUncommonOccurence + i) = *(numUncommonOccurence + largestUncommonOccurence);
        *(numUncommonOccurence + largestUncommonOccurence) = temp;

        temp = *(iPtr + i);
        *(iPtr + i) = *(iPtr + largestUncommonOccurence);
        *(iPtr + largestUncommonOccurence) = temp;
    }

    delete[] iPtrTemp;
    delete[] numUncommonOccurence;
}

/* PROGRAM OUTPUT
************************************************
*                     MENU                     *
* 1. Calling updateBasedOnUncommonRussellJew() *
* 2. Quit                                      *
************************************************
Select an option (1 or 2): 1

  How many integers? 3
    Enter integer #1: 32965
    Enter integer #2: -275721
    Enter integer #3: 3028063

  The original array
    32965
    -275721
    3028063

  Calling updateBasedOnUncommonRussellJew() -
    The uncommon digits:
      0
      1
      7
      8
      9

  The updated array (after calling the function):
    -275721
    3028063
    32965
************************************************
*                     MENU                     *
* 1. Calling updateBasedOnUncommonRussellJew() *
* 2. Quit                                      *
************************************************
Select an option (1 or 2): 1

  How many integers? 5
    Enter integer #1: 135
    Enter integer #2: -277477
    Enter integer #3: 30280945
    Enter integer #4: 342431
    Enter integer #5: 366603

  The original array
    135
    -277477
    30280945
    342431
    366603

  Calling updateBasedOnUncommonRussellJew() -
    The uncommon digits:
      6
      7
      8
      9

  The updated array (after calling the function):
    -277477
    366603
    30280945
    342431
    135
************************************************
*                     MENU                     *
* 1. Calling updateBasedOnUncommonRussellJew() *
* 2. Quit                                      *
************************************************
Select an option (1 or 2): 2
  Fun Exercise ...
*/

/* PROGRAM COMMENTS
Output is slightly different from the output on the midterm but seems to be correct.
For the first sample output, there is another uncommon digit 9 that is missing from
the exam. Also, both 3028063 and -275721 have the same number of uncommon digits so
in my output -275721 appears first and 3028063 appears second.

3028063 has 3 uncommon digits - 2 digit 0's and 1 digit 8
-275721 has 3 uncommon digits - two digit 7's and 1 digit 1

For the second sample output, my run of the program produces the same output as
the one on the midterm.

There were some very small minor changes in the program but all of the logic 
from the midterm was retained.
*/