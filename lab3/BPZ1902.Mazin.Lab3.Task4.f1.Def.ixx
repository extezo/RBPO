module;
#include <cmath>
module BPZ1902.Mazin.Lab3.Task4:f1;
namespace RBPO::Lab3::Task4 {
	export inline double f(double x) {
		return (1 - sin(x) * sin(x)) / (1 + sin(2 * x));
	}
}