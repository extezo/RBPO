#include "../headers/SomeHeader.h"

void CreatePersons(int argc, char *argv[], struct Person persons[],
		int personCount) {
	for (int i = 0; i < personCount; i++) {
		persons[i].fn = "";
		persons[i].mn = "";
		persons[i].ln = "";
		persons[i].age = 0;
	}
	for (int i = 1, count = 0; i < argc; i++) {
			if (strcmp(argv[i], "-person") == 0)
				count++;
			else if (strcmp(argv[i], "--fn") == 0 && argv[i + 1][0] != '-')
				persons[count - 1].fn = argv[i + 1];
			else if (strcmp(argv[i], "--mn") == 0 && argv[i + 1][0] != '-')
				persons[count - 1].mn = argv[i + 1];
			else if (strcmp(argv[i], "--ln") == 0 && argv[i + 1][0] != '-')
				persons[count - 1].ln = argv[i + 1];
			else if (strcmp(argv[i], "--age") == 0 && argv[i + 1][0] != '-')
				persons[count - 1].age = atoi(argv[i + 1]);
	}
}
