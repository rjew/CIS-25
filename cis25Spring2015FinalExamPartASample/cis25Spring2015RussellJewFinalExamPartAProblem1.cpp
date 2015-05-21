/**
 * Program Name: cis25Spring2015RussellJewFinalExamPartAProblem1.cpp
 */

#include <iostream>
using namespace std;

class AnotherBadFraction {
public:
    int zeroFlag;
    int positiveFlag;

    int num;
    int denom;

    bool operator>(const AnotherBadFraction& rOp) const {
        bool status;

        if (num * rOp.denom > denom * rOp.num)
            status = true;
        else
            status = false;
        return status;
    }
};

int analyzeLargestAndSecondLargest(AnotherBadFraction*, int);
void extractDigits(int, int[]);

int main() {
    AnotherBadFraction* AnotherBadFractionPtr;
    int size;
    int i;
    int smallestDigit;

    cout << "Enter the size of the array of AnotherBadFraction objects: ";
    cin >> size;
    cout << endl;

    AnotherBadFractionPtr = new AnotherBadFraction[size];

    for (i = 0; i < size; i++) {
        cout << "Enter zeroFlag for object #" << i + 1 << ": ";
        cin >> (AnotherBadFractionPtr + i)->zeroFlag;

        cout << "Enter positiveFlag for object #" << i + 1 << ": ";
        cin >> (AnotherBadFractionPtr + i)->positiveFlag;

        cout << "Enter num for object #" << i + 1 << ": ";
        cin >> (AnotherBadFractionPtr + i)->num;

        cout << "Enter denom for object #" << i + 1 << ": ";
        cin >> (AnotherBadFractionPtr + i)->denom;
        cout << endl;

        if ((AnotherBadFractionPtr + i)->denom < 0) {
            (AnotherBadFractionPtr + i)->denom = -((AnotherBadFractionPtr + i)->denom);
            (AnotherBadFractionPtr + i)->num = -((AnotherBadFractionPtr + i)->num);
        }
    }

    smallestDigit = analyzeLargestAndSecondLargest(AnotherBadFractionPtr, size);

    cout << "The smallest digit from the largest and second largest \n" 
        << "AnotherBadFraction objects is " << smallestDigit << "." << endl;

    delete[] AnotherBadFractionPtr;

    return 0;
}

int analyzeLargestAndSecondLargest(AnotherBadFraction* AnotherBadFractionPtr, int size) {
    AnotherBadFraction max;
    AnotherBadFraction secondMax;
    int i;
    int digits[10] = {0};

    if (*(AnotherBadFractionPtr + 0) > *(AnotherBadFractionPtr + 1)) {
        secondMax = *(AnotherBadFractionPtr + 1);
        max = *(AnotherBadFractionPtr + 0);
    } else {
        secondMax = *(AnotherBadFractionPtr + 0);
        max = *(AnotherBadFractionPtr + 1);
    }

    for (i = 2; i < size; i++) {
        if ((AnotherBadFractionPtr + i)->zeroFlag == 0) {
            if (*(AnotherBadFractionPtr + i) > max) {
                secondMax = max;
                max = *(AnotherBadFractionPtr + i);
            } else {
                if (*(AnotherBadFractionPtr + i) > secondMax)
                    secondMax = *(AnotherBadFractionPtr + i);
            }
        }
    }

    cout << "Max: " << max.num << "/" << max.denom << endl;
    cout << "Second Max: " << secondMax.num << "/" << secondMax.denom << endl << endl;

    extractDigits(secondMax.num, digits);
    extractDigits(secondMax.denom, digits);
    extractDigits(max.num, digits);
    extractDigits(max.denom, digits);

    for (i = 0; i < 10; i++) {
        if (digits[i] == 1)
            return i;
    }
}

void extractDigits(int number, int digits[]) {
    int digit;

    number = (number < 0) ? -number : number;

    do {
        digit = number % 10;
        digits[digit] = 1;
        number /= 10;
    } while (number != 0);
}

/* PROGRAM OUTPUT
Enter the size of the array of AnotherBadFraction objects: 6

Enter zeroFlag for object #1: 0
Enter positiveFlag for object #1: 1
Enter num for object #1: 123
Enter denom for object #1: 456

Enter zeroFlag for object #2: 0
Enter positiveFlag for object #2: 0
Enter num for object #2: 27
Enter denom for object #2: -5

Enter zeroFlag for object #3: 1
Enter positiveFlag for object #3: -1
Enter num for object #3: -45
Enter denom for object #3: 0

Enter zeroFlag for object #4: 0
Enter positiveFlag for object #4: 0
Enter num for object #4: -568
Enter denom for object #4: 9

Enter zeroFlag for object #5: 1
Enter positiveFlag for object #5: -1
Enter num for object #5: 18
Enter denom for object #5: 0

Enter zeroFlag for object #6: 0
Enter positiveFlag for object #6: -1
Enter num for object #6: 0
Enter denom for object #6: 9

Max: 123/456
Second Max: 0/9

The smallest digit from the largest and second largest
AnotherBadFraction objects is 0.
*/