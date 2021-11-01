#include <cmath>
#include <stdio.h>
int main() {
	double x = 5;
	printf("%.4f\n", sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x)));
	if (scanf("%lf", &x) == 1)
		printf("%.4f\n", sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x)));
	else printf("%s\n", "Argument invalid");
	return 0;
}
