module;
#include <cmath>
module BPZ1902.Mazin.Lab3.Task4:f2;
namespace RBPO::Lab3::Task4 {
	export inline double f2(double x) {
		if (x >= -3.5)
			return 4 * pow(x, 2) + 2 * x - 19;
		else return -2 * x / (-4 * x + 1);
	}
}