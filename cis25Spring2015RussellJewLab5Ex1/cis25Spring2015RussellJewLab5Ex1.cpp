/**
 * Program Name: cis25Spring2015RussellJewLab4Ex1.cpp
 * Discussion:   Lab 4 - Exercise #1
 * Written by:   Russell Jew
 * Date:	     2015/04/16
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
  Assignment Number:  Lab 04,
                      Exercise #1
  Written by:         Russell Jew
  Due Date:           2015/04/16

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 6

Calling print() --

  No Fractions are available!

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 2

Calling add() --

  Not a proper call as no Fractions are available!

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 1

Calling init() --

    *******************************
    *           INIT MENU         *
    * 1. Set up Fractions         *
    * 2. Update Fractions         *
    * 3. Delete Fractions         *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 1

    Enter num1: 1
    Enter denom1: 2
    Enter num2: 3
    Enter denom2: 4

    *******************************
    *           INIT MENU         *
    * 1. Set up Fractions         *
    * 2. Update Fractions         *
    * 3. Delete Fractions         *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 4


***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 2

Calling add() --

  Fraction1 + Fraction2 = 5/4

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 3

Calling subtract() --

  Fraction1 - Fraction2 = -1/4

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 4

Calling multiply() --

  Fraction1 * Fraction2 = 3/8

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 5

Calling divide() --

  Fraction1 / Fraction2 = 2/3

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 6

Calling print() --

  Fraction 1: 1/2
  Fraction 2: 3/4

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 8

WRONG OPTION!

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 1

Calling init() --

    *******************************
    *           INIT MENU         *
    * 1. Set up Fractions         *
    * 2. Update Fractions         *
    * 3. Delete Fractions         *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 1

    Fraction1 and Fraction2 are already created!

    *******************************
    *           INIT MENU         *
    * 1. Set up Fractions         *
    * 2. Update Fractions         *
    * 3. Delete Fractions         *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 2

    Update num1: -5
    Update denom1: 9
    Update num2: 7
    Update denom2: 11

    *******************************
    *           INIT MENU         *
    * 1. Set up Fractions         *
    * 2. Update Fractions         *
    * 3. Delete Fractions         *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 4


***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 2

Calling add() --

  Fraction1 + Fraction2 = 8/99

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 3

Calling subtract() --

  Fraction1 - Fraction2 = -118/99

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 4

Calling multiply() --

  Fraction1 * Fraction2 = -35/99

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 5

Calling divide() --

  Fraction1 / Fraction2 = -55/63

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 6

Calling print() --

  Fraction 1: -5/9
  Fraction 2: 7/11
  
***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 1

Calling init() --

    *******************************
    *           INIT MENU         *
    * 1. Set up Fractions         *
    * 2. Update Fractions         *
    * 3. Delete Fractions         *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 3

    Fraction1 and Fraction2 have been deleted.

    *******************************
    *           INIT MENU         *
    * 1. Set up Fractions         *
    * 2. Update Fractions         *
    * 3. Delete Fractions         *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 3

    No Fractions to delete!

    *******************************
    *           INIT MENU         *
    * 1. Set up Fractions         *
    * 2. Update Fractions         *
    * 3. Delete Fractions         *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 2

    No Fractions are available!

    *******************************
    *           INIT MENU         *
    * 1. Set up Fractions         *
    * 2. Update Fractions         *
    * 3. Delete Fractions         *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 1

    Enter num1: -1
    Enter denom1: 2
    Enter num2: 0
    Enter denom2: 1

    *******************************
    *           INIT MENU         *
    * 1. Set up Fractions         *
    * 2. Update Fractions         *
    * 3. Delete Fractions         *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 4


***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 2

Calling add() --

  Fraction1 + Fraction2 = -1/2

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 3

Calling subtract() --

  Fraction1 - Fraction2 = -1/2  

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 4

Calling multiply() --

  Fraction1 * Fraction2 = 0/2

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 5

Calling divide() --

  Fraction1 / Fraction2 = Undefined

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 6

Calling print() --

  Fraction 1: -1/2
  Fraction 2: 0/1
  
***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 1

Calling init() --

    *******************************
    *           INIT MENU         *
    * 1. Set up Fractions         *
    * 2. Update Fractions         *
    * 3. Delete Fractions         *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 2

    Update num1: 0
    Update denom1: 1
    Update num2: 7
    Update denom2: 11

    *******************************
    *           INIT MENU         *
    * 1. Set up Fractions         *
    * 2. Update Fractions         *
    * 3. Delete Fractions         *
    * 4. Return to Previous MENU  *
    *******************************
    Select an option (1, 2, 3, or 4): 4


***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 2

Calling add() --

  Fraction1 + Fraction2 = 7/11

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 3

Calling subtract() --

  Fraction1 - Fraction2 = -7/11

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 4

Calling multiply() --

  Fraction1 * Fraction2 = 0/11

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 5

Calling divide() --

  Fraction1 / Fraction2 = 0/7

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 6

Calling print() --

  Fraction 1: 0/1
  Fraction 2: 7/11

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 8

WRONG OPTION!

***************************
*          MENU           *
*                         *
* 1. Calling init()       *
* 2. Calling add()        *
* 3. Calling subtract()   *
* 4. Calling multiply()   *
* 5. Calling divide()     *
* 6. Calling print()      *
* 7. Quit                 *
*                         *
***************************
Select an option (use integer value only) : 7

Having Fun ...!
*/

/*  PROGRAM OUTPUT COMMENTS
    My program seems to work correctly. It has all the
    necessary constructors, member functions, and stand alone functions.
    The program could be improved by giving the user more control
    over the way the fractions are created or operated on, maybe
    by giving more options to the user through sub-menus.
*/