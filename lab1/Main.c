#include "../headers/SomeHeader.h"
int main(int argc, char *argv[]) {
	system("chcp 1251");
	int personCount = 0;
	for (int i = 1; i < argc; i++)
		if (strcmp(argv[i], "-person") == 0)
			personCount++;
	struct Person persons[personCount];
	CreatePersons(argc, argv, persons, personCount);
	printf("%s\n",
			"Сортировать список по возрастанию (1) или по убыванию (0)?");
	fflush(NULL);
	char ans[100];
	scanf_s("%s", ans);
	if (CompareStrings(ans, "1") == 0)
		Sort(persons, personCount, Asc);
	else if (CompareStrings(ans, "0") == 0)
		Sort(persons, personCount, Desc);
	else {
		printf("%s\n%s\n", "Некорректный ввод", "Выход из программы");
		return 0;
	}
	PrintPersons(persons, personCount);
	system("pause");
	return 0;
}
