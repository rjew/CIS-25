#include <iostream>
using namespace std;

//Function Prototype
int displayMenu();
int extractMostSeenEvenDigitProblem1RussellJew(int, int[]);

int main() {
    int option;
    
    do {
        option = displayMenu();
    } while (option != 2);
}

//Function Definition

int displayMenu() {
    int option;
    int integer;
    int largestOccurence;
    int digits[10] = {0};

    cout << "***********************************************************" << endl;
    cout << "*                          MENU                           *" << endl;
    cout << "* 1. Calling extractMostSeenEvenDigitProblem1RussellJew() *" << endl;
    cout << "* 2. Quit                                                 *" << endl;
    cout << "***********************************************************" << endl;
    cout << "Select an option (1 or 2) : ";
    cin >> option;

    switch (option) {
        case 1:
            cout << "\n  Enter an integer: ";
            cin >> integer;
            cout << "\n  Calling displayDigitProblem1RussellJew() -" << endl << endl;
            largestOccurence = extractMostSeenEvenDigitProblem1RussellJew(integer, digits);
            cout << "\n    Digit " << largestOccurence << " is seen " << digits[largestOccurence]
                << " time(s) in " << integer << endl << endl << endl;
            break;
        case 2:
            cout << "\n  Have Fun ..." << endl;
            break;
        default:
            cout << "\n  WRONG OPTION!" << endl << endl << endl;
    }

    return option;
}

int extractMostSeenEvenDigitProblem1RussellJew(int integer, int digits[]) {
    int temp = integer;
    int digit;
    int numberOfDigits = 0;
    int numberOfEvenDigits = 0;
    int i, j;
    int largestOccurence = 0;
    int largestEvenOccurence = 0;
    int tempDigits[10];

    do {
        digit = temp % 10;
        digits[digit]++;
        numberOfDigits++;
        temp /= 10;
    } while (temp != 0);

    for (i = 0; i < 10; i++) {
        if (digits[i] != 0 && i % 2 == 0)
            numberOfEvenDigits++;
    }

    cout << "    There is/are " << numberOfDigits << " digit(s) with " << numberOfEvenDigits
        << " even digits(s)." << endl << endl;

    cout << "    With the " << numberOfEvenDigits << " even digits," << endl << endl;
    
    for (i = 0; i < 10; i++) {
        tempDigits[i] = digits[i];
    }

    for (i = 0; i < numberOfEvenDigits; i++) {
        for (j = 0; j < 10; j += 2) {
            if (tempDigits[largestEvenOccurence] < tempDigits[j])
                largestEvenOccurence = j;
        }

        cout << "      " << largestEvenOccurence << " occurs " << tempDigits[largestEvenOccurence] << " time(s)" << endl;
        tempDigits[largestEvenOccurence] = 0;
    }

    for (i = 1; i < 10; i++) {
        if (digits[largestOccurence] < digits[i])
            largestOccurence = i;
    }

    return largestOccurence;
}