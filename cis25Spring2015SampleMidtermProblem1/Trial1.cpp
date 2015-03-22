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

int extractMostSeenEvenDigitProblem1RussellJew(int integer, int digits[])
{
    int largestOccurence;
    int largestEvenOccurence;
    int temp = integer;
    int numDigits = 0;
    int numEvenDigits = 0;
    int digit;
    int i, j;
    int digitsCopy[10];

    //Need to add negation operator
    if (integer < 0)
        integer = -integer;

    //extract the digits from the integer
    do
    {
        digit = temp % 10;
        digits[digit]++;
        temp /= 10;
        numDigits++;
    } while (temp != 0);

    //make a copy of the digits array
    for (i = 0; i < 10; i++)
    {
        digitsCopy[i] = digits[i];
    }

    //loop through the digits array counting how many even digits there are
    for (i = 0; i < 10; i += 2)
    {
        //numEvenDigits += digits[i]; ERROR: counts how many times all the even digits occur
        if (digits[i] != 0)
            numEvenDigits++;
    }

    cout << "There is/are " << numDigits
        << " digit(s) with " << numEvenDigits
        << " even digit(s)\n" << endl;
    cout << "With the " << numEvenDigits
        << " even digit,\n" << endl;

    //display the message as much as how many even digits there are
    for (i = 0; i < numEvenDigits; i++)
    {
        largestEvenOccurence = 0; //set the largest even occurence index to 0 to start from beginning
        
        //find the largest even occcurence
        for (j = 0; j < 10; j += 2)
        {
            if (digitsCopy[largestEvenOccurence] < digitsCopy[j])
                largestEvenOccurence = j;
        }

        cout << "    " << largestEvenOccurence << " occurs" << digitsCopy[largestEvenOccurence]
            << " time(s)" << endl;

        //set the largest even occurence to 0 in order to find the next largest even occurence
        digitsCopy[largestEvenOccurence] = 0;
    }

    //set the largest occurence to zero to start from beginning
    largestOccurence = 0;

    /*
    for (i = 0; i < 10; i++)
    {
        if (digits[largestOccurence] < digits[i])
            largestOccurence = i;
    }
    ERROR: digits array has been altered, need to make a copy of the digits array
    */

    // find the largest digit occurence (even or odd)
    for (i = 0; i < 10; i++)
    {
        if (digits[largestOccurence] < digits[i])
            largestOccurence = i;
    }

    return largestOccurence;
}

//Need to format output