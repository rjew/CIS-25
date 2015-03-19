/**
 * Program Name:    cis25Spring2015RussellJewLab4Ex1.cpp
 * Discussion:		Lab 4 - Exercise #1
 * Written by:		Russell Jew
 * Date Modified:	2015/03/18
 */

#include <iostream>
using namespace std;

// Class Definitions

class FractionRussellJ {
private:
    int num;
    int denom;

public:
    //Constructors

    //Default
    FractionRussellJ() {
        num = 0;
        denom = 1;
    }
    
    //Copy
    FractionRussellJ(const FractionRussellJ& ref) {
        num = ref.num;
        denom = ref.denom;
    }

    //Convert

    //Set Functions
    void setNum(int arg) {
        num = arg;
    }

    void setDenom(int arg) {
        denom = arg;
    }

    //Get Functions

    int getNum() {
        return num;
    }

    int getDenom() {
        return denom;
    }

    //Print Function

    void printFraction(){

    }
};

//Function Prototype

void displayInfo(void);
void displayMenu(void);

int main() {
    displayInfo();

    displayMenu();

    return 0;
}

//Function Definitions

void displayInfo() {
    cout << "CIS 25 - C++ Programming" << endl;
    cout << "Laney College" << endl;
    cout << "Russell Jew" << endl << endl;
    cout << "Assignment Information --" << endl;
    cout << "  Assignment Number:  Lab 04," << endl;
    cout << "                      Exercise #1" << endl;
    cout << "  Written by:         Russell Jew" << endl;
    cout << "  Due Date:           2015/03/26" << endl << endl;
}

void displayMenu() {
    int option;
    int* iPtr1;
    int* iPtr2;
    int size1;
    int size2;

    do {
        cout << "***************************" << endl;
        cout << "*          MENU           *" << endl;
        cout << "*                         *" << endl;
        cout << "* 1. Calling init()       *" << endl;
        cout << "* 2. Calling add()        *" << endl;
        cout << "* 3. Calling subtract()   *" << endl;
        cout << "* 4. Calling multiply()   *" << endl;
        cout << "* 5. Calling divide()     *" << endl;
        cout << "* 6. Calling print()      *" << endl;
        cout << "* 7. Quit                 *" << endl;
        cout << "*                         *" << endl;
        cout << "***************************" << endl;

        cout << "Select an option (use integer value only) : ";
        cin >> option;
        cout << endl;

        switch (option) {
        case 1:
            cout << "Calling init() --" << endl << endl;
            break;
        case 2:
            cout << "Calling add() --" << endl << endl;
            break;
        case 3:
            cout << "Calling subtract() --" << endl << endl;
            break;
        case 4:
            cout << "Calling multiply() --" << endl << endl;
            break;
        case 5:
            cout << "Calling divide() --" << endl << endl;
            break;
        case 6:
            cout << "Calling print() --" << endl << endl;
            break;
        case 7:
            cout << "Having Fun ...!" << endl;
            break;
        default:
            cout << "WRONG OPTION!\n\n\n";
        }
    } while (option != 7);
}

void init() {

}

void add() {

}

void subtract() {

}

void multiply() {

}

void divide() {

}

void print() {

}

/*  PROGRAM OUTPUT

*/

/*  PROGRAM OUTPUT COMMENTS

*/