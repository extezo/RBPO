module;
#include <cmath>
module BPZ1902.Mazin.Lab3.Task3;
namespace RBPO::Lab3::Task3 {
	export double f3(unsigned int n) {
		double result = 0;
		unsigned int i = 0;
		while (i <= n)
			result += a(i++);
		return result;
	}
}