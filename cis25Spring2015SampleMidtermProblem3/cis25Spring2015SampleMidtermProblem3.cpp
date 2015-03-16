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

void displayDigitProblem3RussellJew(int* iPtr, int size) {
    int digits[10] = {0};
    int i;
    int digit;
    int *iPtrTemp;
    int numberOfUncommonEvenDigits = 0;
    bool flag[10]; //To prevent numbers from being uncommon if they appear twice in the same number

    iPtrTemp = new int[size];

    for (i = 0; i < size; i++) {
        *(iPtrTemp + i) = (*(iPtr + i) < 0) ? -(*(iPtr + i)) : *(iPtr + i);
    }

    for (i = 0; i < size; i++) {
        for (int j = 0; j < 10; j++) {
            flag[j] = {false};
        }
        
        do {
            digit = *(iPtrTemp + i) % 10;
            
            if (digit % 2 == 0) {
                if (digits[digit] > 0 && flag[digit] == false) //false means it was greater than one before the for loop
                    digits[digit] = -digits[digit];

                if (digits[digit] == 0) {
                    digits[digit]++;
                    flag[digit] = true;
                }
            }

            *(iPtrTemp + i) /= 10;
        } while (*(iPtrTemp + i) != 0);
    }

    for (i = 0; i < 10; i += 2) {
        if (digits[i] > 0)
            numberOfUncommonEvenDigits++;
    }

    cout << "    From all of the given integers," << endl;
    cout << "\n      There is/are " << numberOfUncommonEvenDigits << " uncommon even digit(s)." << endl;
    cout << "\n      The uncommon even digit(s) is/are" << endl;

    for (i = 0; i < 10; i += 2) {
        if (digits[i] > 0)
            cout << "        " << i << endl;
    }

    cout << endl << endl; 

    delete[] iPtrTemp;
}