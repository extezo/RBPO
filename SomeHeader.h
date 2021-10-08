#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int CompareStrings(const char *lhs, const char *rhs);	// 0 - equals, -1 lhs "less than" rhs, 1 rhs "less than" lhs
struct Person {
    char *fn,			//First name
		*mn,			//Middle name
		*ln;			//Last name
    unsigned short age;	//Age
};
enum SortType {Asc, Desc};
void Sort(struct Person *persons, int count, enum SortType sortType);					//Sorting function
void CreatePersons(int argc, char *argv[], struct Person persons[], int personCount);	//Creates Person list
void PrintPersons(struct Person persons[], int personCount);							//Prints Person list
