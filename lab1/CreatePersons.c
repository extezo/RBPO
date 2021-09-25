#include "../headers/SomeHeader.h"

void CreatePersons(int argc, char *argv[], struct Person persons[],
		int personCount) {
	for (int i = 0; i < personCount; i++) {
		persons[i].fn = "";
		persons[i].mn = "";
		persons[i].ln = "";
		persons[i].age = 0;
	}
	for (int i = 1, count = -1; i < argc; i++) {
			if (CompareStrings(argv[i], "-person") == 0)
				count++;
			else if (CompareStrings(argv[i], "--fn") == 0 && argv[i + 1][0] != '-')
				persons[count].fn = argv[i + 1];
			else if (CompareStrings(argv[i], "--mn") == 0 && argv[i + 1][0] != '-')
				persons[count].mn = argv[i + 1];
			else if (CompareStrings(argv[i], "--ln") == 0 && argv[i + 1][0] != '-')
				persons[count].ln = argv[i + 1];
			else if (CompareStrings(argv[i], "--age") == 0 && argv[i + 1][0] != '-')
				persons[count].age = atoi(argv[i + 1]);
	}
}