#include <stdio.h>
double x, result;
void f();

int main() {
	x = 5;
    f();
	printf("%.4f\n", result);
	if (scanf("%lf", &x) == 1) {
        f();
		printf("%.4f\n", result);
    }
	else printf("%s\n", "Argument invalid");
	return 0;
}
