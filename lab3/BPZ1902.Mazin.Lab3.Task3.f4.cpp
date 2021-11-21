module;
#include <cmath>
module BPZ1902.Mazin.Lab3.Task3;
namespace RBPO::Lab3::Task3 {
	double f4(double eps) {
		double result = 0;
		unsigned int i = 0;
		do
			result += a(i++);
		while (abs(a(i) - a(i - 1)) > eps);
		return result;
	}
}
