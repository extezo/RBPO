#include "../headers/SomeHeader.h"

void PrintPersons(struct Person persons[], int personCount) {
	printf("|--------------------|--------------------|--------------------|--------------------|\n");
	printf("|%20s|%20s|%20s|%20s|\n", "�������", "���", "��������", "�������");

	for (int i = 0; i < personCount; i++) {
		printf("|--------------------|--------------------|--------------------|--------------------|\n");
		printf("|%20s|%20s|%20s|%20d|\n", persons[i].fn, persons[i].ln,
				persons[i].mn, persons[i].age);
	}
	printf("|--------------------|--------------------|--------------------|--------------------|\n");
}
