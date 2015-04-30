/**
 * Program Name: cis25Spring2015RussellJewLab5Ex1.cpp
 * Discussion:   Lab 5 - Exercise #1
 * Written by:   Russell Jew
 * Date:	     2015/04/29
 */

#include <iostream>
#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015FractionRussellJUtility.h"
using namespace std;

int main() {
    displayInfo();

    displayMenu();

    return 0;
}

/*  PROGRAM OUTPUT
CIS 25 - C++ Programming
Laney College
Russell Jew

Assignment Information --
  Assignment Number:  Lab 5,
                      Exercise #1
  Written by:         Russell Jew
  Due Date:           2015/04/30

**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 6

  PRINTING Option --

    Not a proper call as no Fractions are available!

**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 2

  ADDING Option --

    Not a proper call as no Fractions are available!

**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 1

  INITIALIZING Option --

    ******************************
    *      INITIALIZING MENU     *
    * 1. Set up Fractions        *
    * 2. Update Fractions        *
    * 3. Delete Fractions        *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 1

    Enter num1: 1
    Enter denom1: 2
    Enter num2: 3
    Enter denom2: 4

    ******************************
    *      INITIALIZING MENU     *
    * 1. Set up Fractions        *
    * 2. Update Fractions        *
    * 3. Delete Fractions        *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 5

      WRONG OPTION ...

    ******************************
    *      INITIALIZING MENU     *
    * 1. Set up Fractions        *
    * 2. Update Fractions        *
    * 3. Delete Fractions        *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 4


**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 2

  ADDING Option --

    ******************************
    *      ADDING MENU           *
    *                            *
    * 1. add() - Member          *
    * 2. add() - Stand Alone     *
    * 3. operator+() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 1

      Calling member add()

        Fraction1 + Fraction2 = 5/4

    ******************************
    *      ADDING MENU           *
    *                            *
    * 1. add() - Member          *
    * 2. add() - Stand Alone     *
    * 3. operator+() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 2

      Calling stand alone add()

        Fraction1 + Fraction2 = 5/4

    ******************************
    *      ADDING MENU           *
    *                            *
    * 1. add() - Member          *
    * 2. add() - Stand Alone     *
    * 3. operator+() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 3

      Calling member operator+()

        Fraction1 + Fraction2 = 5/4

    ******************************
    *      ADDING MENU           *
    *                            *
    * 1. add() - Member          *
    * 2. add() - Stand Alone     *
    * 3. operator+() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 4


**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 3

  SUBTRACTING Option --

    *******************************
    *      SUBTRACTING MENU       *
    *                             *
    * 1. subtract() - Member      *
    * 2. subtract() - Stand Alone *
    * 3. operator-() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 1

      Calling member subtract()

        Fraction1 - Fraction2 = -1/4

    *******************************
    *      SUBTRACTING MENU       *
    *                             *
    * 1. subtract() - Member      *
    * 2. subtract() - Stand Alone *
    * 3. operator-() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 2

      Calling stand alone subtract()

        Fraction1 - Fraction2 = -1/4

    *******************************
    *      SUBTRACTING MENU       *
    *                             *
    * 1. subtract() - Member      *
    * 2. subtract() - Stand Alone *
    * 3. operator-() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 3

      Calling member operator-()

        Fraction1 - Fraction2 = -1/4

    *******************************
    *      SUBTRACTING MENU       *
    *                             *
    * 1. subtract() - Member      *
    * 2. subtract() - Stand Alone *
    * 3. operator-() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 4


**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 4

  MULTIPLYING Option --

    *******************************
    *      MULTIPLYING MENU       *
    *                             *
    * 1. multiply() - Member      *
    * 2. multiply() - Stand Alone *
    * 3. operator*() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 1

      Calling member multiply()

        Fraction1 * Fraction2 = 3/8

    *******************************
    *      MULTIPLYING MENU       *
    *                             *
    * 1. multiply() - Member      *
    * 2. multiply() - Stand Alone *
    * 3. operator*() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 2

      Calling stand alone multiply()

        Fraction1 * Fraction2 = 3/8

    *******************************
    *      MULTIPLYING MENU       *
    *                             *
    * 1. multiply() - Member      *
    * 2. multiply() - Stand Alone *
    * 3. operator*() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 3

      Calling member operator*()

        Fraction1 * Fraction2 = 3/8

    *******************************
    *      MULTIPLYING MENU       *
    *                             *
    * 1. multiply() - Member      *
    * 2. multiply() - Stand Alone *
    * 3. operator*() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 4


**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 5

  DIVIDING Option --

    ******************************
    *      DIVIDING MENU         *
    *                            *
    * 1. divide() - Member       *
    * 2. divide() - Stand Alone  *
    * 3. operator/() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 1

      Calling member divide()

        Fraction1 / Fraction2 = 2/3

    ******************************
    *      DIVIDING MENU         *
    *                            *
    * 1. divide() - Member       *
    * 2. divide() - Stand Alone  *
    * 3. operator/() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 2

      Calling stand alone divide()

        Fraction1 / Fraction2 = 2/3

    ******************************
    *      DIVIDING MENU         *
    *                            *
    * 1. divide() - Member       *
    * 2. divide() - Stand Alone  *
    * 3. operator/() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 3

      Calling member operator/()

        Fraction1 / Fraction2 = 2/3

    ******************************
    *      DIVIDING MENU         *
    *                            *
    * 1. divide() - Member       *
    * 2. divide() - Stand Alone  *
    * 3. operator/() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 4


**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 6

  PRINTING Option --

    ******************************
    *      PRINTING MENU         *
    *                            *
    * 1. print() - Member        *
    * 2. print() - Stand Alone   *
    * 3. Return to Previous MENU *
    ******************************
    Select an option (1, 2, or 3): 1

      Calling member print()

        Fraction 1: 1/2
        Fraction 2: 3/4

    ******************************
    *      PRINTING MENU         *
    *                            *
    * 1. print() - Member        *
    * 2. print() - Stand Alone   *
    * 3. Return to Previous MENU *
    ******************************
    Select an option (1, 2, or 3): 2

      Calling stand alone print()

        Fraction 1: 1/2
        Fraction 2: 3/4

    ******************************
    *      PRINTING MENU         *
    *                            *
    * 1. print() - Member        *
    * 2. print() - Stand Alone   *
    * 3. Return to Previous MENU *
    ******************************
    Select an option (1, 2, or 3): 3


**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 1

  INITIALIZING Option --

    ******************************
    *      INITIALIZING MENU     *
    * 1. Set up Fractions        *
    * 2. Update Fractions        *
    * 3. Delete Fractions        *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 2

    Update num1: -5
    Update denom1: 9
    Update num2: 7
    Update denom2: 11

    ******************************
    *      INITIALIZING MENU     *
    * 1. Set up Fractions        *
    * 2. Update Fractions        *
    * 3. Delete Fractions        *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 4


**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 2

  ADDING Option --

    ******************************
    *      ADDING MENU           *
    *                            *
    * 1. add() - Member          *
    * 2. add() - Stand Alone     *
    * 3. operator+() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 1

      Calling member add()

        Fraction1 + Fraction2 = 8/99

    ******************************
    *      ADDING MENU           *
    *                            *
    * 1. add() - Member          *
    * 2. add() - Stand Alone     *
    * 3. operator+() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 2

      Calling stand alone add()

        Fraction1 + Fraction2 = 8/99

    ******************************
    *      ADDING MENU           *
    *                            *
    * 1. add() - Member          *
    * 2. add() - Stand Alone     *
    * 3. operator+() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 3

      Calling member operator+()

        Fraction1 + Fraction2 = 8/99

    ******************************
    *      ADDING MENU           *
    *                            *
    * 1. add() - Member          *
    * 2. add() - Stand Alone     *
    * 3. operator+() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 4


**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 3

  SUBTRACTING Option --

    *******************************
    *      SUBTRACTING MENU       *
    *                             *
    * 1. subtract() - Member      *
    * 2. subtract() - Stand Alone *
    * 3. operator-() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 1

      Calling member subtract()

        Fraction1 - Fraction2 = -118/99

    *******************************
    *      SUBTRACTING MENU       *
    *                             *
    * 1. subtract() - Member      *
    * 2. subtract() - Stand Alone *
    * 3. operator-() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 2

      Calling stand alone subtract()

        Fraction1 - Fraction2 = -118/99

    *******************************
    *      SUBTRACTING MENU       *
    *                             *
    * 1. subtract() - Member      *
    * 2. subtract() - Stand Alone *
    * 3. operator-() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 3

      Calling member operator-()

        Fraction1 - Fraction2 = -118/99

    *******************************
    *      SUBTRACTING MENU       *
    *                             *
    * 1. subtract() - Member      *
    * 2. subtract() - Stand Alone *
    * 3. operator-() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 4


**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 4

  MULTIPLYING Option --

    *******************************
    *      MULTIPLYING MENU       *
    *                             *
    * 1. multiply() - Member      *
    * 2. multiply() - Stand Alone *
    * 3. operator*() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 1

      Calling member multiply()

        Fraction1 * Fraction2 = -35/99

    *******************************
    *      MULTIPLYING MENU       *
    *                             *
    * 1. multiply() - Member      *
    * 2. multiply() - Stand Alone *
    * 3. operator*() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 2

      Calling stand alone multiply()

        Fraction1 * Fraction2 = -35/99

    *******************************
    *      MULTIPLYING MENU       *
    *                             *
    * 1. multiply() - Member      *
    * 2. multiply() - Stand Alone *
    * 3. operator*() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 3

      Calling member operator*()

        Fraction1 * Fraction2 = -35/99

    *******************************
    *      MULTIPLYING MENU       *
    *                             *
    * 1. multiply() - Member      *
    * 2. multiply() - Stand Alone *
    * 3. operator*() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 5

      WRONG OPTION ...

    *******************************
    *      MULTIPLYING MENU       *
    *                             *
    * 1. multiply() - Member      *
    * 2. multiply() - Stand Alone *
    * 3. operator*() - Member     *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 4


**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 5

  DIVIDING Option --

    ******************************
    *      DIVIDING MENU         *
    *                            *
    * 1. divide() - Member       *
    * 2. divide() - Stand Alone  *
    * 3. operator/() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 1

      Calling member divide()

        Fraction1 / Fraction2 = -55/63

    ******************************
    *      DIVIDING MENU         *
    *                            *
    * 1. divide() - Member       *
    * 2. divide() - Stand Alone  *
    * 3. operator/() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 2

      Calling stand alone divide()

        Fraction1 / Fraction2 = -55/63

    ******************************
    *      DIVIDING MENU         *
    *                            *
    * 1. divide() - Member       *
    * 2. divide() - Stand Alone  *
    * 3. operator/() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 3

      Calling member operator/()

        Fraction1 / Fraction2 = -55/63

    ******************************
    *      DIVIDING MENU         *
    *                            *
    * 1. divide() - Member       *
    * 2. divide() - Stand Alone  *
    * 3. operator/() - Member    *
    * 4. Return to Previous MENU *
    ******************************
    Select an option (1, 2, 3, or 4): 4


**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 6

  PRINTING Option --

    ******************************
    *      PRINTING MENU         *
    *                            *
    * 1. print() - Member        *
    * 2. print() - Stand Alone   *
    * 3. Return to Previous MENU *
    ******************************
    Select an option (1, 2, or 3): 1

      Calling member print()

        Fraction 1: -5/9
        Fraction 2: 7/11

    ******************************
    *      PRINTING MENU         *
    *                            *
    * 1. print() - Member        *
    * 2. print() - Stand Alone   *
    * 3. Return to Previous MENU *
    ******************************
    Select an option (1, 2, or 3): 2

      Calling stand alone print()

        Fraction 1: -5/9
        Fraction 2: 7/11

    ******************************
    *      PRINTING MENU         *
    *                            *
    * 1. print() - Member        *
    * 2. print() - Stand Alone   *
    * 3. Return to Previous MENU *
    ******************************
    Select an option (1, 2, or 3): 3


**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 8

  WRONG OPTION!

**************************
*          MENU          *
*                        *
* 1. Initializing        *
* 2. Adding              *
* 3. Subtracting         *
* 4. Multiplying         *
* 5. Dividing            *
* 6. Printing            *
* 7. Quit                *
*                        *
**************************
Select an option (use integer value only) : 7

Having Fun ...!
*/

/*  PROGRAM OUTPUT COMMENTS
Program appears to work correctly and produce the required output.
*/