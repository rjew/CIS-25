/**
 * Program Name: cis25Spring2015FractionRussellJUtility.h
 * Discussion:   Specification file for stand alone functions
 * Written By:   Russell Jew
 * Date:         2015/04/21
 */

#ifndef FRACTIONRUSSELLJUTILITY_H
#define FRACTIONRUSSELLJUTILITY_H

void displayInfo(void);
void displayMenu(void);
void init(FractionRussellJ**, FractionRussellJ**);
FractionRussellJ add(FractionRussellJ*, FractionRussellJ*);
FractionRussellJ subtract(FractionRussellJ*, FractionRussellJ*);
FractionRussellJ multiply(FractionRussellJ*, FractionRussellJ*);
FractionRussellJ divide(FractionRussellJ*, FractionRussellJ*);
void print(FractionRussellJ*, FractionRussellJ*);
int getGCD(int, int);

#endif 