module;
#include <cmath>
export module BPZ1902.Mazin.Lab3.Task1;
namespace RBPO::Lab3::Task1 {
	export inline double f1(double x) {
		return (1 - sin(x) * sin(x)) / (1 + sin(2 * x));
	}
	export inline double f2(double x) {
		return (x >= -3.5) ? (4 * pow(x, 2) + 2 * x - 19) : (-2 * x / (-4 * x + 1));
	}
	export inline double a(unsigned int n) {
		return pow(-1, n) * pow(2, n + 1) / (pow(2, 2 * n) + 1);
	}
	export double f3(unsigned int n) {
		double result = 0;
		for (unsigned int i = 0; i <= n; i++)
			result += a(i);
		return result;
	}
	export double f4(double eps) {
		double result = 0;
		for (unsigned int i = 0; i < _UI32_MAX; i++) {
			if (abs(a(i) - a(i - 1)) < eps)
				return result;
			result += a(i);
		}
		return NULL;
	}
}
