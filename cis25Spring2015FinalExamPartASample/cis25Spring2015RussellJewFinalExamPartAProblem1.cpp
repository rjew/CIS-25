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

    cout << "Ener the size of the array of AnotherBadFraction objects: ";
    cin >> size;

    AnotherBadFractionPtr = new AnotherBadFraction[size];

    for (i = 0; i < size; i++) {
        cout << "Enter num: ";
        cin >> (AnotherBadFractionPtr + i)->num;

        cout << "Enter denom: ";
        cin >> (AnotherBadFractionPtr + i)->denom;

        if ((AnotherBadFractionPtr + i)->denom < 0) {
            (AnotherBadFractionPtr + i)->num = -((AnotherBadFractionPtr + i)->num);
            (AnotherBadFractionPtr + i)->denom = -((AnotherBadFractionPtr + i)->denom);
        }

        (AnotherBadFractionPtr + i)->zeroFlag = ((AnotherBadFractionPtr + i)->denom == 0) ? 1 : 0;

        if ((AnotherBadFractionPtr + i)->num == 0 || (AnotherBadFractionPtr + i)->denom == 0)
            (AnotherBadFractionPtr + i)->positiveFlag = -1;
        else if ((AnotherBadFractionPtr + i)->num > 0)
            (AnotherBadFractionPtr + i)->positiveFlag = 1;
        else
            (AnotherBadFractionPtr + i)->positiveFlag = 0;
    }

    smallestDigit = analyzeLargestAndSecondLargest(AnotherBadFractionPtr, size);

    cout << "The smallest digit from the largest and second largest AnotherBadFraction objects is "
        << smallestDigit << "." << endl;

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

    for (i = 0; i < size; i++) {
        if (*(AnotherBadFractionPtr + i) > max) {
            secondMax = max;
            max = *(AnotherBadFractionPtr + i);
        } else {
            if (*(AnotherBadFractionPtr + i) > secondMax)
                secondMax = *(AnotherBadFractionPtr + i);
        }
    }

    extractDigits(secondMax.num, digits);
    extractDigits(secondMax.denom, digits);
    extractDigits(max.num, digits);
    extractDigits(max.denom, digits);

    for (i = 0; i < 10; i++) {
        if (digits[i] = 1)
            return i;
    }
}

void extractDigits(int number, int digits[]) {
    int digit;

    do {
        digit = number % 10;
        digits[digit] = 1;
        number /= 10;
    } while (number != 0);
}