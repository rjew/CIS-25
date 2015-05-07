/**
 * Program Name: cis25Spring2015RussellJewLab6Ex1Driver.cpp
 * Discussion:   Lab 6 - Exercise #1
 * Written by:   Russell Jew
 * Date:	     2015/05/07
 */

void displayInfo(void);
void displayMenu(void);

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
  Assignment Number:  Lab 6,
                      Exercise #1
  Written by:         Russell Jew
  Due Date:           2015/05/07

MAIN MENU
(1) Rectangle Tasks
(2) Circle Tasks
(3) Mixed Retangle & Circle Tasks
(4) Quit
Enter your option (1, 2, 3 or 4): 1

  RECTANGLE MENU
  1. Create two Rectangle objects
  2. Compare by volume
  3. Compare by area
  4. Print two Rectangle objects
  5. Quit
  Enter your option (between 1 through 5): 3

    Cannot compare area as no Rectangle objects are available!

  RECTANGLE MENU
  1. Create two Rectangle objects
  2. Compare by volume
  3. Compare by area
  4. Print two Rectangle objects
  5. Quit
  Enter your option (between 1 through 5): 1

    RECTANGLE 1

    Enter the length:

    Enter num: 7
    Enter denom: 2

    Enter the width:

    Enter num: 1
    Enter denom: 1

    Enter the lower left point:

    Enter the x-coordinate:
    Enter num: 1
    Enter denom: 2

    Enter the y-coordinate:
    Enter num: 1
    Enter denom: 1

    RECTANGLE 2

    Enter the length:

    Enter num: 3
    Enter denom: 1

    Enter the width:

    Enter num: 3
    Enter denom: 2

    Enter the lower left point:

    Enter the x-coordinate:
    Enter num: -1
    Enter denom: 1

    Enter the y-coordinate:
    Enter num: 2
    Enter denom: -1

  RECTANGLE MENU
  1. Create two Rectangle objects
  2. Compare by volume
  3. Compare by area
  4. Print two Rectangle objects
  5. Quit
  Enter your option (between 1 through 5): 2

    Both volumes are 0 so they are equal.

  RECTANGLE MENU
  1. Create two Rectangle objects
  2. Compare by volume
  3. Compare by area
  4. Print two Rectangle objects
  5. Quit
  Enter your option (between 1 through 5): 3

    RECTANGLE 1 AREA: 7/2
    RECTANGLE 2 AREA: 9/2

    Rectangle 2 is has a greater area than Rectangle 1.

  RECTANGLE MENU
  1. Create two Rectangle objects
  2. Compare by volume
  3. Compare by area
  4. Print two Rectangle objects
  5. Quit
  Enter your option (between 1 through 5): 4

    RECTANGLE 1

    Length: 7/2
    Width: 1/1
    Lower Left Point: (1/2, 1/1)

    RECTANGLE 2

    Length: 3/1
    Width: 3/2
    Lower Left Point: (-1/1, -2/1)

  RECTANGLE MENU
  1. Create two Rectangle objects
  2. Compare by volume
  3. Compare by area
  4. Print two Rectangle objects
  5. Quit
  Enter your option (between 1 through 5): 6

    WRONG OPTION ...

  RECTANGLE MENU
  1. Create two Rectangle objects
  2. Compare by volume
  3. Compare by area
  4. Print two Rectangle objects
  5. Quit
  Enter your option (between 1 through 5): 5


MAIN MENU
(1) Rectangle Tasks
(2) Circle Tasks
(3) Mixed Retangle & Circle Tasks
(4) Quit
Enter your option (1, 2, 3 or 4): 2

  CIRCLE MENU
  1. Create two Circle objects
  2. Compare by volume
  3. Compare by area
  4. Print two Circle objects
  5. Quit
  Enter your option (between 1 through 5): 1

    CIRCLE 1

    Enter the center:

    Enter the x-coordinate:
    Enter num: 1
    Enter denom: 2

    Enter the y-coordinate:
    Enter num: 2
    Enter denom: 1

    Enter the radius:

    Enter num: 4
    Enter denom: 1

    CIRCLE 2

    Enter the center:

    Enter the x-coordinate:
    Enter num: -1
    Enter denom: 1

    Enter the y-coordinate:
    Enter num: -1
    Enter denom: 2

    Enter the radius:

    Enter num: 2
    Enter denom: 1

  CIRCLE MENU
  1. Create two Circle objects
  2. Compare by volume
  3. Compare by area
  4. Print two Circle objects
  5. Quit
  Enter your option (between 1 through 5): 2

    Both volumes are 0 so they are equal.

  CIRCLE MENU
  1. Create two Circle objects
  2. Compare by volume
  3. Compare by area
  4. Print two Circle objects
  5. Quit
  Enter your option (between 1 through 5): 3

    CIRCLE 1 AREA: 5680/113
    CIRCLE 2 AREA: 1420/113

    Circle 1 is has a greater area than Circle 2.

  CIRCLE MENU
  1. Create two Circle objects
  2. Compare by volume
  3. Compare by area
  4. Print two Circle objects
  5. Quit
  Enter your option (between 1 through 5): 4

    CIRCLE 1

    Center: (1/2, 2/1)
    Radius: 4/1

    CIRCLE 2

    Center: (-1/1, -1/2)
    Radius: 2/1

  CIRCLE MENU
  1. Create two Circle objects
  2. Compare by volume
  3. Compare by area
  4. Print two Circle objects
  5. Quit
  Enter your option (between 1 through 5): 5


MAIN MENU
(1) Rectangle Tasks
(2) Circle Tasks
(3) Mixed Retangle & Circle Tasks
(4) Quit
Enter your option (1, 2, 3 or 4): 3

  MIXED RECTANGLE & CIRCLE MENU
  1. Compare by area
  2. Compare by volume
  3. Print ALL objects
  4. Quit
  Enter your option (between 1 through 4): 1

    RECTANGLE & CIRCLE OBJECTS
    1. Rectangle 1
    2. Rectangle 2
    3. Circle 1
    4. Circle 2
    Pick object #1 (Select between 1 through 4): 1

    RECTANGLE & CIRCLE OBJECTS
    1. Rectangle 1
    2. Rectangle 2
    3. Circle 1
    4. Circle 2
    Pick object #2 (Select between 1 through 4): 3

      OBJECT 1 AREA: 7/2
      OBJECT 2 AREA: 5680/113

      Object 2 is has a greater area than Object 1.

  MIXED RECTANGLE & CIRCLE MENU
  1. Compare by area
  2. Compare by volume
  3. Print ALL objects
  4. Quit
  Enter your option (between 1 through 4): 1

    RECTANGLE & CIRCLE OBJECTS
    1. Rectangle 1
    2. Rectangle 2
    3. Circle 1
    4. Circle 2
    Pick object #1 (Select between 1 through 4): 4

    RECTANGLE & CIRCLE OBJECTS
    1. Rectangle 1
    2. Rectangle 2
    3. Circle 1
    4. Circle 2
    Pick object #2 (Select between 1 through 4): 2

      OBJECT 1 AREA: 1420/113
      OBJECT 2 AREA: 9/2

      Object 1 is has a greater area than Object 2.

  MIXED RECTANGLE & CIRCLE MENU
  1. Compare by area
  2. Compare by volume
  3. Print ALL objects
  4. Quit
  Enter your option (between 1 through 4): 1

    RECTANGLE & CIRCLE OBJECTS
    1. Rectangle 1
    2. Rectangle 2
    3. Circle 1
    4. Circle 2
    Pick object #1 (Select between 1 through 4): 3

    RECTANGLE & CIRCLE OBJECTS
    1. Rectangle 1
    2. Rectangle 2
    3. Circle 1
    4. Circle 2
    Pick object #2 (Select between 1 through 4): 3

      OBJECT 1 AREA: 5680/113
      OBJECT 2 AREA: 5680/113

      Object 1 has the same area as Object 2.

  MIXED RECTANGLE & CIRCLE MENU
  1. Compare by area
  2. Compare by volume
  3. Print ALL objects
  4. Quit
  Enter your option (between 1 through 4): 2

    RECTANGLE & CIRCLE OBJECTS
    1. Rectangle 1
    2. Rectangle 2
    3. Circle 1
    4. Circle 2
    Pick object #1 (Select between 1 through 4): 1

    RECTANGLE & CIRCLE OBJECTS
    1. Rectangle 1
    2. Rectangle 2
    3. Circle 1
    4. Circle 2
    Pick object #2 (Select between 1 through 4): 3

      Object 1 has the same volume as Object 2.

  MIXED RECTANGLE & CIRCLE MENU
  1. Compare by area
  2. Compare by volume
  3. Print ALL objects
  4. Quit
  Enter your option (between 1 through 4): 2

    RECTANGLE & CIRCLE OBJECTS
    1. Rectangle 1
    2. Rectangle 2
    3. Circle 1
    4. Circle 2
    Pick object #1 (Select between 1 through 4): 3

    RECTANGLE & CIRCLE OBJECTS
    1. Rectangle 1
    2. Rectangle 2
    3. Circle 1
    4. Circle 2
    Pick object #2 (Select between 1 through 4): 2

      Object 1 has the same volume as Object 2.

  MIXED RECTANGLE & CIRCLE MENU
  1. Compare by area
  2. Compare by volume
  3. Print ALL objects
  4. Quit
  Enter your option (between 1 through 4): 3

    RECTANGLE 1
    Length: 7/2
    Width: 1/1
    Lower Left Point: (1/2, 1/1)

    RECTANGLE 2
    Length: 3/1
    Width: 3/2
    Lower Left Point: (-1/1, -2/1)

    CIRCLE 1
    Center: (1/2, 2/1)
    Radius: 4/1

    CIRCLE 2
    Center: (-1/1, -1/2)
    Radius: 2/1

  MIXED RECTANGLE & CIRCLE MENU
  1. Compare by area
  2. Compare by volume
  3. Print ALL objects
  4. Quit
  Enter your option (between 1 through 4): 4


MAIN MENU
(1) Rectangle Tasks
(2) Circle Tasks
(3) Mixed Retangle & Circle Tasks
(4) Quit
Enter your option (1, 2, 3 or 4): 4

  Have fun and good bye!
*/

/*  PROGRAM OUTPUT COMMENTS
Program appears to work correctly and produce
the required output. All the volumes are 0 so the
program always states that the volumes are the same.
*/