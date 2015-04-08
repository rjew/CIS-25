/**
 * Program Name: cis25Spring2015FractionRussellJUtility.h
 * Discussion:   Specification file for stand alone functions
 * Written By:   Russell Jew
 * Date:         2015/04/07
 */

#ifndef FRACTIONRUSSELLJUTILITY_H
#define FRACTIONRUSSELLJUTILITY_H

void displayInfo(void);
void displayMenu(void);
void init(FractionRussellJ*, FractionRussellJ*);
void init(FractionRussellJ**, FractionRussellJ**);
void add(FractionRussellJ*, FractionRussellJ*, FractionRussellJ*);
void subtract(FractionRussellJ*, FractionRussellJ*, FractionRussellJ*);
void multiply(FractionRussellJ*, FractionRussellJ*, FractionRussellJ*);
void divide(FractionRussellJ*, FractionRussellJ*, FractionRussellJ*);
void print(FractionRussellJ*, FractionRussellJ*);
int getGCD(int, int);

#endif 