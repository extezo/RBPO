module;
#include <cmath>
module BPZ1902.Mazin.Lab3.Task4:f1m;
namespace RBPO::Lab3::Task4 {
	double f1(double x) {
		return (1 - sin(x) * sin(x)) / (1 + sin(2 * x));
	}
}