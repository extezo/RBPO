#include <cmath>
#include <stdio.h>
double f(double x);

int main() {
	double x = 5;
	printf("%.4f\n", f(x));
	if (scanf("%lf", &x) == 1)
		printf("%.4f\n", f(x));
	else printf("%s\n", "Argument invalid");
	return 0;
}

double f(double x) {
	return sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x));
}