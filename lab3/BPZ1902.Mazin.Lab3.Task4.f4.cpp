module;
#include <cmath>
module BPZ1902.Mazin.Lab3.Task4:f4m;
import :am;
namespace RBPO::Lab3::Task4 {
	double f4(double eps) {
		double result = 0;
		int i = 0;
		while (abs(a(i) - a(i - 1)) >= eps)
			result += a(i++);
		return result;
	}
}