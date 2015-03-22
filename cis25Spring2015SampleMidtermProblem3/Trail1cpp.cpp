#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

//Function Prototype

int displayMenu(void);
void storeArrayElements(int*, int);
void displayDigitProblem3RussellJew(int*, int);

int main() {
    int option;

    do
    {
        option = displayMenu();
    } while (option != 2);

    return 0;
}

//Function Definitions

int displayMenu() {
    int option;
    int* iPtr;
    int size;

    cout << "***********************************************" << endl;
    cout << "*                    MENU 03                  *" << endl;
    cout << "* 1. Calling displayDigitProblem3RussellJew() *" << endl;
    cout << "* 2. Quit                                     *" << endl;
    cout << "***********************************************" << endl;

    cout << "Select an option (1 or 2): ";
    cin >> option;
    cout << endl;

    switch (option) {
    case 1:
        cout << "  How many integers? ";
        cin >> size;

        iPtr = new int[size];

        storeArrayElements(iPtr, size);

        cout << "\n  Calling displayDigitProblem3RussellJew() -" << endl << endl;

        displayDigitProblem3RussellJew(iPtr, size);

        break;
    case 2:
        cout << "\n  Fun Excercise ..." << endl;
        break;
    default:
        cout << "WRONG OPTION!\n\n\n";
    }

    return option;
}

void storeArrayElements(int* iPtr, int size) {
    int i;

    for (i = 0; i < size; i++)
    {
        cout << "    Enter integer #" << i + 1 << ": ";
        cin >> *(iPtr + i);
    }
}

void displayDigitProblem3RussellJew(int* iPtr,int size)
{
    int digits1[10] = {0};
    int digits2[10] = {0};
    int uncommonDigits[10] = {0};
    int i, j;
    int digit;
    int* iPtrTemp;
    int numUncommonEvenDigits = 0;

    iPtrTemp = new int[size];

    for (i = 0; i < size; i++)
    {
        *(iPtrTemp + i) = (*(iPtr + i) < 0) ? -(*(iPtr + i)) : *(iPtr + i);
    }

    do
    {
        digit = *(iPtrTemp + 0) % 10;
        digits1[digit] = 1;
        *(iPtrTemp + 0) /= 10;
    } while (*(iPtrTemp + 0) != 0);

    do
    {
        digit = *(iPtrTemp + 1) % 10;
        digits2[digit] = 1;
        *(iPtrTemp + 1) /= 10;
    } while (*(iPtrTemp + 1) != 0);

    for (j = 0; j < 10; j++)
    {
        if (digits1[j] != digits2[j])
            uncommonDigits[j] = 1;
        else if (digits1[j] == 1 && digits2[j] == 1)
            uncommonDigits[j] = 2; // 2 represents that the number appeared in both integers before and could never be uncommmon
                                    // 0 means that it never appeared before, 1 means it only appeared once
    }
    
    for (i = 0; i < (size - 2); i++)
    {
        for (j = 0; j < 10; j++)
        {
            digits1[j] = 0;
        }

        do
        {
            digit = *(iPtrTemp + (i + 2)) % 10;
            digits1[digit] = 1;
            *(iPtrTemp + (i + 2)) /= 10;
        } while (*(iPtrTemp + (i + 2)) != 0);

        for (j = 0; j < 10; j++)
        {
            if (digits1[j] != uncommonDigits[j] && uncommonDigits[j] != 2)
                uncommonDigits[j] = 1;
            else
            {
                if (digits1[j] == 0 && uncommonDigits[j] == 0)
                    uncommonDigits[j] = 0;
                if (digits1[j] == 1 && uncommonDigits[j] == 1)
                    uncommonDigits[j] = 2;
            }
        }
    }
    
    for (i = 0; i < 10; i += 2)
    {
        if (uncommonDigits[i] == 1)
            numUncommonEvenDigits++;
    }

    cout << "    From all the given integers,\n\n      There is/are "
        << numUncommonEvenDigits << " uncommon even digit(s).\n\n"
        << "      The uncommon even digit(s) is/are" << endl;

    for (i = 0; i < 10; i += 2)
    {
        if (uncommonDigits[i] == 1)
        cout << "        " << i << endl;
    }

    cout << endl << endl;

    delete[] iPtrTemp;
}