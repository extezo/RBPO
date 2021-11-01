#include <cmath>

double f(double x) {
	return sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x));
}