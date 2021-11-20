module;
#include <cmath>
module BPZ1902.Mazin.Lab3.Task2;
namespace RBPO::Lab3::Task2 {
	inline double f1(double x) {
		return (1 - sin(x) * sin(x)) / (1 + sin(2 * x));
	}
	inline double f2(double x) {
		if (x >= -3.5)
			return 4 * pow(x, 2) + 2 * x - 19;
		else return -2 * x / (-4 * x + 1);
	}
	inline double a(unsigned int n) {
		return pow(-1, n) * pow(2, n + 1) / (pow(2, 2 * n) + 1);
	}
	double f3(unsigned int n) {
		double result = 0;
		unsigned int i = 0;
		while (i <= n)
			result += a(i++);
		return result;
	}
	double f4(double eps) {
		double result = 0;
		int i = 0;
		while (abs(a(i) - a(i - 1)) >= eps)
			result += a(i++);
		return result;
	}
}