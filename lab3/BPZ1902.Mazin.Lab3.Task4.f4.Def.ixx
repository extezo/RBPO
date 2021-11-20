module;
#include <cmath>
module BPZ1902.Mazin.Lab3.Task4:f4;
import BPZ1902.Mazin.Lab3.Task4:a;
namespace RBPO::Lab3::Task4 {
	export double f4(double eps) {
		double result = 0;
		int i = 0;
		while (abs(a(i) - a(i - 1)) >= eps)
			result += a(i++);
		return result;
	}
}