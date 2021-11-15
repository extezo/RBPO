#include "SomeHeader.h"
int main(int argc, char *argv[]) {
	int personCount = 0;
	for (int i = 1; i < argc; i++)
		if (CompareStrings(argv[i], "-person") == 0)
			personCount++;
	struct Person persons[personCount];
	CreatePersons(argc, argv, persons, personCount);
	printf("%s\n",
			"Sort list ascending (1) or descending (0)?");
	fflush(NULL);
	char ans[100];
	scanf_s("%s", ans);
	if (CompareStrings(ans, "1") == 0)
		Sort(persons, personCount, Asc);
	else if (CompareStrings(ans, "0") == 0)
		Sort(persons, personCount, Desc);
	else {
		printf("%s\n%s\n", "Incorrect input", "Exiting...");
		return 0;
	}
	PrintPersons(persons, personCount);
	system("pause");
	return 0;
}
