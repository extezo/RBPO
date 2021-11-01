#include <cmath>
#include <stdio.h>
void f(double& x, double& result) {
	result = sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x));
}

int main() {
	double x = 5;
    double result;
    f(x, result);
	printf("%.4f\n", result);
	if (scanf("%lf", &x) == 1) {
        f(x, result);
        printf("%.4f\n", result);
    }
	else printf("%s\n", "Argument invalid");
	return 0;
}