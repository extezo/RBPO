import BPZ1902.Mazin.Lab3.Task1;
import BPZ1902.Mazin.Lab3.Task2;
import BPZ1902.Mazin.Lab3.Task3;
import BPZ1902.Mazin.Lab3.Task4;
import BPZ1902.Mazin.Lab3.Task5;
#include <cstdio>
using namespace std;
int main() {
	double x = 3.14;
	unsigned int n = 6;
	double eps = 1E-3; 
	printf("%f %f %f %f\n", RBPO::Lab3::Task1::f1(x), RBPO::Lab3::Task1::f2(x), RBPO::Lab3::Task1::f3(n), RBPO::Lab3::Task1::f4(eps));
	printf("%f %f %f %f\n", RBPO::Lab3::Task2::f1(x), RBPO::Lab3::Task2::f2(x), RBPO::Lab3::Task2::f3(n), RBPO::Lab3::Task2::f4(eps));
	printf("%f %f %f %f\n", RBPO::Lab3::Task3::f1(x), RBPO::Lab3::Task3::f2(x), RBPO::Lab3::Task3::f3(n), RBPO::Lab3::Task3::f4(eps));
	printf("%f %f %f %f\n", RBPO::Lab3::Task4::f1(x), RBPO::Lab3::Task4::f2(x), RBPO::Lab3::Task4::f3(n), RBPO::Lab3::Task4::f4(eps));
	printf("%f %f %f %f", RBPO::Lab3::Task5::f1(x), RBPO::Lab3::Task5::f2(x), RBPO::Lab3::Task5::f3(n), RBPO::Lab3::Task5::f4(eps));
	return 0;
}