#include "../headers/SomeHeader.h"

void PrintPersons(struct Person persons[], int personCount) {
	printf("|----------|----------|----------|----------|\n");
	printf("|%10s|%10s|%10s|%10s|\n", "Фамилия", "Имя", "Отчество", "Возраст");

	for (int i = 0; i < personCount; i++) {
		printf("|----------|----------|----------|----------|\n");
		printf("|%10s|%10s|%10s|%10d|\n", persons[i].fn, persons[i].ln,
				persons[i].mn, persons[i].age);
	}
	printf("|----------|----------|----------|----------|\n");
}
