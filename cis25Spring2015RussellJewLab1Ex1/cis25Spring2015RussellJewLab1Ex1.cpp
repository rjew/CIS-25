/** 
 * Program Name:	cis25Spring2015RussellJewLab1Ex1.cpp
 * Discussion:		Lab 1 - Coding Assignment - Exercise #1
 * Written by:		Russell Jew
 * Date Modified:	2015/02/11
 */

#include <iostream>
using namespace std;

//Function Prototypes

void displayInfo(void);
void moveEvenDown(int[], const int);
void displayArray(int[], const int);

int main()
{
	const int SIZE1 = 5;
	const int SIZE2 = 6;

	int ary1[SIZE1] = {-15, 450, 6, -9, 9};
	int ary2[SIZE2] = {100, -15, 450, 6, -90, 9};

	displayInfo();

	cout << "This is the original first array." << endl;
	displayArray(ary1, SIZE1);

	moveEvenDown(ary1, SIZE1);

	cout << "This is the first array rearranged." << endl;
	displayArray(ary1, SIZE1);

	cout << "This is the original second array." << endl;
	displayArray(ary2, SIZE2);

	moveEvenDown(ary2, SIZE2);

	cout << "This is the second array rearranged." << endl;
	displayArray(ary2, SIZE2);

	return 0;
}

//Function Definitions

void displayInfo()
{
	cout << "CIS 25 - C++ Programming" << endl;
	cout << "Laney College" << endl;
	cout << "Russell Jew" << endl << endl;
	cout << "Assignment Information --" << endl;
	cout << "  Assignment Number:  Lab 01," << endl;
	cout << "                      Coding Assignment -- Exercise #1" << endl;
	cout << "  Written by:         Russell Jew" << endl;
	cout << "  Submitted Date:     2015/02/12" << endl << endl;
}

void moveEvenDown(int array[], const int SIZE)
{
	int even;
	int index;
	int back;

	for (index = 0; index < SIZE; index++)
	{
			for (back = SIZE; back != index && array[index] % 2 == 0; back--)
			{
				if (array[back] % 2 != 0)
				{
					even = array[index];

					array[index] = array[back];
					array[back] = even;
				}
			}
	}
}

void displayArray(int array[], const int SIZE)
{
	int count;

	for (count = 0; count < SIZE; count++)
	{
		cout << array[count] << " ";
	}
	cout << endl << endl;
}

/*  PROGRAM OUTPUT
CIS 25 - C++ Programming
Laney College
Russell Jew

Assignment Information --
  Assignment Number:  Lab 01,
                      Coding Assignment -- Exercise #1
  Written by:         Russell Jew
  Submitted Date:     2015/02/12

This is the original first array.
-15 450 6 -9 9

This is the first array rearranged.
-15 9 -9 6 450

This is the original second array.
100 -15 450 6 -90 9

This is the second array rearranged.
9 -15 450 6 -90 100

*/

/*  PROGRAM OUTPUT COMMENTS
	My program sucessfully rearranged the even array elements
	to the bottom of the array. However, my program may not be the
	most efficient way to do it because there may be a way to reduce
	the number of checks and iterations that the program performs, 
	making the program run even faster.
*/