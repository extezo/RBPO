module;
#include <cmath>
module BPZ1902.Mazin.Lab3.Task3;
namespace RBPO::Lab3::Task3 {
	double f3(unsigned int n) {
		double result = 0;
		unsigned int i = 0;
		do 
			result += a(i++);
		while (i <= n);
		return result;
	}
}