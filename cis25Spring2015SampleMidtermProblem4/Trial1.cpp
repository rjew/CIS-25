#include <iostream>
using namespace std;

//Function Prototype

int displayMenu(void);
void storeArrayElements(int*, int);
void displayArray(int*, int);
void updateBasedOnEvenUncommonRussellJew(int*, int);

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

    cout << "****************************************************" << endl;
    cout << "*                      MENU                        *" << endl;
    cout << "* 1. Calling updateBasedOnEvenUncommonRussellJew() *" << endl;
    cout << "* 2. Quit                                          *" << endl;
    cout << "****************************************************" << endl;

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

        cout << "\n  Calling updateBasedOnEvenUncommonRussellJew() -" << endl << endl;

        updateBasedOnEvenUncommonRussellJew(iPtr, size);

        cout << "  The updated array:" << endl;

        displayArray(iPtr, size);

        cout << endl << endl;

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

void displayArray(int* iPtr, int size) {
    int i;

    for (i = 0; i < size; i++)
    {
        cout << "    " << *(iPtr + i) << endl;
    }
}

void updateBasedOnEvenUncommonRussellJew(int* iPtr, int size) {
    int digits1[10] = {0};
    int digits2[10] = {0};
    int uncommonDigits[10] = {0};
    int i, j, k;
    int digit;
    int *iPtrTemp;
    int *iPtrTemp2;
    int *numberOfUncommonEvenDigits;
    int largestUncommonOccurence;
    int temp;

    iPtrTemp = new int[size];
    iPtrTemp2 = new int[size];

    //initialize iptrTemp
    for (i = 0; i < size; i++)
    {
        *(iPtrTemp + i) = (*(iPtr + i) < 0) ? -(*(iPtr + i)) : *(iPtr + i);
    }

    //Extract from first integer
    do
    {
        digit = *(iPtrTemp + 0) % 10;
        digits1[digit] = 1;
        *(iPtrTemp + 0) /= 10;
    } while (*(iPtrTemp + 0) != 0);

    //Extract from second integer, maybe should check if there is a second integer
    do
    {
        digit = *(iPtrTemp + 1) % 10;
        digits2[digit] = 1;
        *(iPtrTemp + 1) /= 10;
    } while (*(iPtrTemp + 1) != 0);

    //compare digit1 with digits2
    for (j = 0; j < 10; j++)
    {
        if (digits1[j] != digits2[j])//if they either is 1 and the other is 0
            uncommonDigits[j] = 1;
        else if (digits1[j] == 1 && digits2[j] == 1) // if they're both 1
            uncommonDigits[j] = 2; // 2 represents that the number appeared in both integers before and could never be uncommmon
                                    // 0 means that it never appeared before, 1 means it only appeared once
    }

    for (i = 0; i < (size - 2); i++) // starting with the third element until the end
    {
        //reset each value in digits1 to 0
        for (j = 0; j < 10; j++)
        {
            digits1[j] = 0;
        }

        //Keep track of unique occurences in integer
        do
        {
            digit = *(iPtrTemp + (i + 2)) % 10;
            digits1[digit] = 1;
            *(iPtrTemp + (i + 2)) /= 10;
        } while (*(iPtrTemp + (i + 2)) != 0);

        //Compare digits1 with uncommon digits
        for (j = 0; j < 10; j++)
        {
            if (digits1[j] != uncommonDigits[j] && uncommonDigits[j] != 2)//If they are different and can be uncommon (is not 2)
                uncommonDigits[j] = 1;
            else
            {
                if (digits1[j] == 0 && uncommonDigits[j] == 0) // leave uncommon as is
                    uncommonDigits[j] = 0;
                if (digits1[j] == 1 && uncommonDigits[j] == 1) // set uncommonDigits to 2, never to be uncommon again
                    uncommonDigits[j] = 2;
            }
        }
    }

    numberOfUncommonEvenDigits = new int[size]; // parallel array to hold number of in each iPtr uncommon digits

    for (i = 0; i < 10; i += 2) {//to control the uncommon digits
        if (uncommonDigits[i] == 1) { // If uncommon digit

            //Reinitilize each array because of the /= operator for the digits
            for (k = 0; k < size; k++) {
                *(iPtrTemp2 + k) = (*(iPtr + k) < 0) ? -(*(iPtr + k)) : *(iPtr + k);
            }

            //Step through each element, keeping track of how many uncommon even digits appear for each value
            for (j = 0; j < size; j++) {
                do {
                    digit = *(iPtrTemp2 + j) % 10;

                    if (digit == i)
                        (*(numberOfUncommonEvenDigits + j))++; // increment if array value contains uncommon digit

                    *(iPtrTemp2 + j) /= 10;
                } while (*(iPtrTemp2 + j) != 0);
            }
        }
    }

    for (i = 0; i < size; i++) {

        largestUncommonOccurence = i;// set the intial largest uncommon occurence to i because will skip front
        
        //Find the index for the iPtr value that has the most uncommon digits
        for (j = i + 1; j < size; j++) {
            if (*(numberOfUncommonEvenDigits + largestUncommonOccurence) < *(numberOfUncommonEvenDigits + j))
                largestUncommonOccurence = j;
        }

        //Swap the numberOfUncommonEvenDigits to place the largest uncommon digit
        // in front of the array so that it will skip it next time the for loop with j = i + 1
        temp = *(numberOfUncommonEvenDigits + i);
        *(numberOfUncommonEvenDigits + i) = *(numberOfUncommonEvenDigits + largestUncommonOccurence);
        *(numberOfUncommonEvenDigits + largestUncommonOccurence) = temp;

        //Swap the iPtr element, placing the value with the largest uncommon even digits in front
        temp = *(iPtr + i);
        *(iPtr + i) = *(iPtr + largestUncommonOccurence);
        *(iPtr + largestUncommonOccurence) = temp;
    }

    delete[] iPtrTemp;
    delete[] numberOfUncommonEvenDigits;
}