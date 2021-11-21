import BPZ1902.Mazin.Lab3.Task1;
import BPZ1902.Mazin.Lab3.Task2;
import BPZ1902.Mazin.Lab3.Task3;
import BPZ1902.Mazin.Lab3.Task4;
import BPZ1902.Mazin.Lab3.Task5;
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	double x = 3.14;
	unsigned int n = 6;
	double eps = 1E-3;
	int input = -1;

	while (input != 0) {
		printf("Type exercise number for demonstration (or \"0\" to exit):");
		cin >> input;
		switch (input) {
		case 1:
			printf("f1(x) = %f, f2(x) = %f, f3(x) = %f, f4(x) = %f\n", RBPO::Lab3::Task1::f1(x), RBPO::Lab3::Task1::f2(x), RBPO::Lab3::Task1::f3(n), RBPO::Lab3::Task1::f4(eps));
			break;
		case 2:
			printf("f1(x) = %f, f2(x) = %f, f3(x) = %f, f4(x) = %f\n", RBPO::Lab3::Task2::f1(x), RBPO::Lab3::Task2::f2(x), RBPO::Lab3::Task2::f3(n), RBPO::Lab3::Task2::f4(eps));
			break;
		case 3:
			printf("f1(x) = %f, f2(x) = %f, f3(x) = %f, f4(x) = %f\n", RBPO::Lab3::Task3::f1(x), RBPO::Lab3::Task3::f2(x), RBPO::Lab3::Task3::f3(n), RBPO::Lab3::Task3::f4(eps));
			break;
		case 4:
			printf("f1(x) = %f, f2(x) = %f, f3(x) = %f, f4(x) = %f\n", RBPO::Lab3::Task4::f1(x), RBPO::Lab3::Task4::f2(x), RBPO::Lab3::Task4::f3(n), RBPO::Lab3::Task4::f4(eps));
			break;
		case 5:
			printf("f1(x) = %f, f2(x) = %f, f3(x) = %f, f4(x) = %f\n", RBPO::Lab3::Task5::f1(x), RBPO::Lab3::Task5::f2(x), RBPO::Lab3::Task5::f3(n), RBPO::Lab3::Task5::f4(eps));
			break;
		}
	}
	return 0;
}