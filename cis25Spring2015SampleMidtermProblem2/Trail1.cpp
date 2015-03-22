#include <iostream>
using namespace std;

//Function Prototype

int displayMenu(void);
void storeArrayElements(int*, int);
void displayArray(int*, int);
void updateArrayProblem2RussellJew(int*, int);

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

    cout << "**********************************************" << endl;
    cout << "*                    MENU 03                 *" << endl;
    cout << "* 1. Calling updateArrayProblem2RussellJew() *" << endl;
    cout << "* 2. Quit                                    *" << endl;
    cout << "**********************************************" << endl;

    cout << "Select an option (1 or 2): ";
    cin >> option;
    cout << endl;

    switch (option) {
    case 1:
        cout << "  How many integers? ";
        cin >> size;

        iPtr = new int[size];

        storeArrayElements(iPtr, size);

        cout << "\n  The original array:" << endl;

        displayArray(iPtr, size);

        cout << "\n  Calling updateArrayProblem2RussellJew() -" << endl << endl;

        updateArrayProblem2RussellJew(iPtr, size);

        cout << "    The updated array:" << endl;

        displayArray(iPtr, size);

        cout << endl << endl;

        break;
    case 2:
        cout << "\n  Have Fun ..." << endl;
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

void displayArray(int* iPtr, int size) {
    int i;

    for (i = 0; i < size; i++)
    {
        cout << "    " << *(iPtr + i) << endl;
    }
}


void updateArrayProblem2RussellJew(int* iPtr, int size)
{
    int digits[10] = {0};
    int digitsTemp[10] = {0};
    int* iPtrTemp;
    int i, j, k;
    int digit;
    int temp;
    int mostSeenEvenDigit;
    int numEvenDigits = 0;
    bool* swaps;

    iPtrTemp = new int[size];

    for (i = 0; i < size; i++)
    {
        *(iPtrTemp + i) = (*(iPtr + i) < 0) ? -(*(iPtr + i)) : (*(iPtr + i));
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


    for (i = 0; i < 10; i += 2)
    {
        if (digits[i] != 0)
            numEvenDigits++;
    }

    swaps = new bool[size];
    for (i = 0; i < size; i++)
    {
        *(swaps + i) = false;
    }

    for (i = 0; i < numEvenDigits; i++)
    {
        mostSeenEvenDigit = 0;

        for (j = 0; j < 10; j += 2)
        {
            if (digits[mostSeenEvenDigit] < digits[j])
                mostSeenEvenDigit = j;
        }

        for (j = 0; j < size; j++)
        {
            *(iPtrTemp + j) = (*(iPtr + j) < 0) ? -(*(iPtr + j)) : (*(iPtr + j));
        }

        for (j = 0; j < size; j++)
        {
            do
            {
                digit = *(iPtrTemp + j) % 10;
                digitsTemp[digit]++;
                *(iPtrTemp + j) /= 10;
            } while (*(iPtrTemp + j) != 0);

            if (digitsTemp[mostSeenEvenDigit] > 0 && *(swaps + j) == false)
            {
                cout << *(iPtr + j) << endl;
                *(swaps + j) = true;
            }

            for (k = 0; k < 10; k++)
            {
                digitsTemp[k] = 0;
            }

        }

        digits[mostSeenEvenDigit] = 0;
    }
    
    for (j = 0; j < size; j++)
    {
        *(iPtrTemp + j) = (*(iPtr + j) < 0) ? -(*(iPtr + j)) : (*(iPtr + j));
    }
    
    for (j = 0; j < size; j++)
    {
        do
        {
            digit = *(iPtrTemp + j) % 10;
            digitsTemp[digit]++;
            *(iPtrTemp + j) /= 10;
        } while (*(iPtrTemp + j) != 0);

        if (digitsTemp[0] == 0 && digitsTemp[2] == 0 && digitsTemp[4] == 0 && digitsTemp[6] == 0 && digitsTemp[8] == 0)
        {
            cout << *(iPtr + j) << endl;
        }

        for (k = 0; k < 10; k++)
        {
            digitsTemp[k] = 0;
        }
    }

    delete[] iPtrTemp;
}