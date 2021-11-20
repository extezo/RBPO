module;
#include <cmath>
module BPZ1902.Mazin.Lab3.Task4:am;
namespace RBPO::Lab3::Task4 {
	double a(unsigned int n) {
		return pow(-1, n) * pow(2, n + 1) / (pow(2, 2 * n) + 1);
	}
}