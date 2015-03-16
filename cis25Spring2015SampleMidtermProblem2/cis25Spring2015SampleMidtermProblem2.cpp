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

void updateArrayProblem2RussellJew(int* iPtr, int size) {
    int digits[10] = {0};
    int i, j, k;
    int digit;
    int *iPtrTemp;
    int *largestEvenOccurencePtr;
    int largestEvenOccurence;
    int temp;

    iPtrTemp = new int[size];
    largestEvenOccurencePtr = new int[size];

    for (i = 0; i < size; i++) {
        *(iPtrTemp + i) = (*(iPtr + i) < 0) ? -(*(iPtr + i)) : *(iPtr + i);
    }

    for (i = 0; i < size; i++) {
        do {
            digit = *(iPtrTemp + i) % 10;
            digits[digit]++;
            *(iPtrTemp + i) /= 10;
        } while (*(iPtrTemp + i) != 0);

        largestEvenOccurence = 0;

        for (j = 2; j < 10; j += 2) {
            if (digits[largestEvenOccurence] < digits[j])
                largestEvenOccurence = j;
        }

        *(largestEvenOccurencePtr + i) = digits[largestEvenOccurence];

        for (k = 0; k < 10; k++) {
            digits[k] = 0;
        }

    }

    for (i = 0; i < size; i++) {

        largestEvenOccurence = i;

        for (j = i + 1; j < size; j++) {
            if (*(largestEvenOccurencePtr + largestEvenOccurence) < *(largestEvenOccurencePtr + j))
                largestEvenOccurence = j;
        }

        temp = *(largestEvenOccurencePtr + i);
        *(largestEvenOccurencePtr + i) = *(largestEvenOccurencePtr + largestEvenOccurence);
        *(largestEvenOccurencePtr + largestEvenOccurence) = temp;

        temp = *(iPtr + i);
        *(iPtr + i) = *(iPtr + largestEvenOccurence);
        *(iPtr + largestEvenOccurence) = temp;
    }

    delete[] iPtrTemp;
    delete[] largestEvenOccurencePtr;
}